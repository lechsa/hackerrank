Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;
    
  // if head is null, insert the node to head
  if (head == NULL) {
    return head = temp;
  }
      
  if (position == 0) {
    temp->next = head;
    head = temp;
    return head;
  }
    
  Node* nth_next = head;
  Node* nth_prev = NULL;
    
  for(int i = 0; i < position; i++) {    
    nth_prev = nth_next;
    nth_next = nth_next->next;
  }
    
  nth_prev->next = temp;
  temp->next = nth_next;
    
  return head;
}