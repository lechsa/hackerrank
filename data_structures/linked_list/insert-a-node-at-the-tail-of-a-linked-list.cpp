Node* Insert(Node *head,int data)
{
  // Complete this method
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;

  if (head == NULL) {
    head = temp;
    return head;
  }

  Node* tail = head->next;

  if (tail == NULL) {
    head->next = temp;
    return head;
  }

  while(tail != NULL) {
    if (tail->next == NULL) {
      tail->next = temp;
      tail = NULL;
    } else {
      tail = tail->next;
    }
  }

  return head;
}