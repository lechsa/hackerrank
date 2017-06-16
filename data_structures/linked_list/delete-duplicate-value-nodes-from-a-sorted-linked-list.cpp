Node* RemoveDuplicates(Node *head) 
{
  if (head == NULL || head->next == NULL) {
    return head;
  } else {
    Node *current = head;
    while(current->next != NULL) {
      if (current->data != current->next->data) {
        current = current->next;
      } else {
        free(current->next);
        current->next = current->next->next;
      }
    }
  }

  return head;
}
