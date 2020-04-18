

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* last = head;
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);

    if(head == nullptr)
    {
        head = node;
        return head;
    }
    while(last->next !=nullptr)
    {
        last = last->next;
    }
    last->next = node;
    return head;



}

