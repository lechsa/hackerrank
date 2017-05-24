int CompareLists(Node *headA, Node* headB)
{
  while(headA->data == headB->data) {      
    headA = headA->next;
    headB = headB->next;
    
    if (headA == NULL && headB == NULL) return 1;
    else if (headA == NULL || headB == NULL) return 0;
  }
    
  return 0;
}
