/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function (head) {
    let slowPointer = head;
    let fastPointer = head;

    while (fastPointer.next && fastPointer.next.next) {
        slowPointer = slowPointer.next;
        fastPointer = fastPointer.next.next;
    }
    return fastPointer.next ? slowPointer.next : slowPointer;
};
