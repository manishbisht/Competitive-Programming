/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var oddEvenList = function (head) {
    if (head) {
        let result = head;
        let oddNode = head;
        let evenNode = head.next;
        let connectingNode = head.next;

        while (oddNode != null && evenNode != null) {
            if (evenNode.next == null) {
                break;
            }

            oddNode.next = evenNode.next;
            oddNode = oddNode.next;

            evenNode.next = oddNode.next;
            evenNode = evenNode.next;
        }

        oddNode.next = connectingNode;

        return result;
    }

    return head;
};
