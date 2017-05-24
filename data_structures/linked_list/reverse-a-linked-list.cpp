Node* Reverse(Node *head)
{
  // Complete this method
  Node* current = head;
  Node* prev = NULL;
  Node* next = NULL;
    
  while(current != NULL) {      
    
    next = current->next;
     
    if (current == head) {
      current->next = NULL;
    } else {
      current->next = prev;
    }
    
    prev = current;
    current = next;
  }
    
  head = prev;
    
  return head;
}