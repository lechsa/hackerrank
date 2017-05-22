Node* Delete(Node *head, int position)
{
  // Complete this method
  Node* nth_next = head;
  Node* nth_prev = NULL;
    
  if (position == 0) {
    head = nth_next->next;
    free(nth_next);
    return head;
  }
    
  for(int i = 0; i < position; i++) {
    nth_prev = nth_next;
    nth_next = nth_next->next;
  }
    
  nth_prev->next = nth_next->next;
  free(nth_next);
    
  return head;
}