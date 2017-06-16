int FindMergeNode(Node *headA, Node *headB)
{
    Node *tempA = headA;
    Node *tempB = headB;
    
    while(tempA->next != NULL) {
      while(tempB->next != NULL) {
        if (tempA->next == tempB->next) {
          return tempA->next->data;
        }
        tempB = tempB->next;
      }
      tempA = tempA->next;
      tempB = headB;
    }
    
    return 0;
}