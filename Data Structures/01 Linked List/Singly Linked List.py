# Node class
class Node:
    # Constructor
    def __init__(self):
        self.data = None
        self.next = None

    # Set the data in the Node
    def set_data(self, data):
        self.data = data

    # Return the data of the Node
    def get_data(self):
        return self.data

    # Set the next value of the Node
    def set_next(self, next):
        self.next = next

    # Return the next value of the Node
    def get_next(self):
        return self.next

    # Check if the Node has the next value
    def has_next(self):
        return self.next is not None


# Singly LinkedList class
class SinglyLinkedList:
    # Constructor
    def __init__(self):
        self.head = None

    # Return the length of the linked list
    def list_length(self):
        current = self.head
        count = 0

        while current is not None:
            count += 1
            current = current.get_next()

        return count


LinkedList = SinglyLinkedList()
