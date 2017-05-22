void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
  if (head == NULL) return;
    
  Node* tail = head;
    
  while(tail->next != NULL) {
    tail = tail->next;
  }
        
  Node* current = head;
        
  while(tail != head) {
    cout << tail->data << endl;
      
    while(current->next != tail) {
      current = current->next;
    }  
      
    tail = current;
    current = head;
  }
        
  cout << tail->data << endl;

  // recursive
  
  // if (head == NULL) return;
    
  // ReversePrint(head->next);
    
  // cout << head->data << endl;
  
}