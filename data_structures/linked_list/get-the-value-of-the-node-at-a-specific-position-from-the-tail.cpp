int GetNode(Node *head, int positionFromTail) 
{
   Node *temp = head;
   int Node_Length = 0;
   int positionFromHead = 0;

   while(temp != NULL) {
      Node_Length++;
      temp = temp->next;
   }

   positionFromHead = Node_Length - positionFromTail;

   for (int i = 0; i < positionFromHead - 1; i++) {
      head = head->next;
   }

   return head->data;
}