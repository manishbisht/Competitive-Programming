pragma solidity ^0.5.2;

contract PropertyRegistration {

    /********************************************************************************************/
    /*                                       DATA VARIABLES                                     */
    /********************************************************************************************/

    address private contractOwner;
    struct Property {
        string ownerName;
        address ownerId;
        uint256 passCode;
        uint256 propertyType;
        string propertyAddress;
        string propertyDimensions;
        bytes32 propertyId;
        uint256 price;
    }
    bytes32[] private registeredProperties;
    mapping(bytes32 => Property) private propertyDetails;

    /********************************************************************************************/
    /*                                       EVENT DEFINITIONS                                  */
    /********************************************************************************************/

    event PropertyRegistered(string ownerName, address ownerId, bytes32 propertyId);
    event PropertyOnSale(bytes32 propertyId, uint256 price);
    event PropertyTransferred(address from, address to, uint256 price, bytes32 propertyId);

    constructor() public {
        contractOwner = msg.sender;
    }

    /********************************************************************************************/
    /*                                       FUNCTION MODIFIERS                                 */
    /********************************************************************************************/

    /********************************************************************************************/
    /*                                       UTILITY FUNCTIONS                                  */
    /********************************************************************************************/

    function getPropertyId(uint256 propertyType, string memory propertyAddress, string memory propertyDimensions) pure internal returns (bytes32) {
        return keccak256(abi.encodePacked(propertyType, propertyAddress, propertyDimensions));
    }

    function isPropertyRegistered(bytes32 propertyId) public view returns (bool) {
        bool isRegistered = false;
        for(uint i = 0; i < registeredProperties.length; i++) {
            if(registeredProperties[i] == propertyId) {
                isRegistered = true;
            }
        }
        return isRegistered;
    }

    function getRegisteredProperties() public view returns (bytes32[] memory) {
        return registeredProperties;
    }

    /********************************************************************************************/
    /*                                     SMART CONTRACT FUNCTIONS                             */
    /********************************************************************************************/

    function registerProperty(string memory ownerName, address ownerId, uint256 passCode, uint256 propertyType, string memory propertyAddress, string memory propertyDimensions) public {
        require(msg.sender == ownerId, "Only the owner can register their own property");
        require(propertyType <= 1, "Property Type can be zero or one");
        bytes32 propertyId = getPropertyId(propertyType, propertyAddress, propertyDimensions);
        require(!isPropertyRegistered(propertyId), "This property is already registered");
        propertyDetails[propertyId] = Property({
            ownerName: ownerName,
            ownerId: ownerId,
            passCode: passCode,
            propertyType: propertyType,
            propertyAddress: propertyAddress,
            propertyDimensions: propertyDimensions,
            propertyId: propertyId,
            price: 0 //defaultPrice
        });
        registeredProperties.push(propertyId);
        emit PropertyRegistered(ownerName, ownerId, propertyId);
    }

    function setPropertyPrice(bytes32 propertyId, uint256 price) public {
        require(isPropertyRegistered(propertyId), "This property is not yet registered");
        require(propertyDetails[propertyId].ownerId == msg.sender, "You are not the owner of the property");
        propertyDetails[propertyId].price = price;
        emit PropertyOnSale(propertyId, price);
    }

    function transferProperty(bytes32 propertyId, string memory ownerName) public payable {
        require(isPropertyRegistered(propertyId), "This property is not yet registered");
        require(propertyDetails[propertyId].ownerId != msg.sender, "You are already the owner of the property");
        require(propertyDetails[propertyId].price != 0, "This property is not for sale");
        require(propertyDetails[propertyId].price == msg.value, "Please transfer enough funds to buy the property");
        address originalOwner = propertyDetails[propertyId].ownerId;
        address payable originalOwnerWalletAddress = address(uint160(originalOwner));
        uint256 originalPrice = propertyDetails[propertyId].price;
        originalOwnerWalletAddress.transfer(msg.value);
        propertyDetails[propertyId].ownerName = ownerName;
        propertyDetails[propertyId].ownerId = msg.sender;
        propertyDetails[propertyId].price = 0;
        emit PropertyTransferred(originalOwner, msg.sender, originalPrice, propertyId);
    }
}