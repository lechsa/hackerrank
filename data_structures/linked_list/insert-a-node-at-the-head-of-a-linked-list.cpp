Node* Insert(Node *head,int data)
{
  // Complete this method
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;
    
  if (head == NULL) {
    return head = temp;
  }
    
  temp->next = head;
  head = temp;
    
  return head;
    
}
