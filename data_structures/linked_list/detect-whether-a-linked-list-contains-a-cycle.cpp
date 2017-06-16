bool has_cycle(Node* head) {
  if (head == NULL || head->next == NULL) return 0;
  
  Node *slow = head;
  Node *fast = head->next;
  
  while(fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
    
    if (slow == fast) {
      return 1;
    }
  }
  
  return 0;
}