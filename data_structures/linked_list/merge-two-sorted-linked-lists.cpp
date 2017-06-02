Node* MergeLists(Node *headA, Node *headB) {
   Node *merged = NULL;
   Node *new_head = NULL;
   Node *merged_prev = NULL;

   if (headA == NULL && headB == NULL) return NULL;
   if (headA == NULL && headB != NULL) return headB;
   if (headA != NULL && headB == NULL) return headA;

   while(headA != NULL || headB != NULL) {

      if (headA == NULL) {
         if (merged == NULL) {
            new_head = headB;
            merged = headB;
            headB = headB->next;
         } else {
            if (headB->data < merged->data) {
               merged_prev->next = headB;
               merged_prev = headB;
               headB = headB->next;
               merged_prev->next = merged;
            } else if (headB->data > merged->data) {
               merged->next = headB;
               merged_prev = merged;
               merged = headB;
               headB = headB->next;
            }
         }

      } else if (headB == NULL) {

         if (merged == NULL) {
            new_head = headA;
            merged = headA;
            headA = headA->next;
         } else {
            if (headA->data < merged->data) {
               merged_prev->next = headA;
               merged_prev = headA;
               headA = headA->next;
               merged_prev->next = merged;
            } else if (headA->data > merged->data) {
               merged->next = headA;
               merged_prev = merged;
               merged = headA;
               headA = headA->next;
            }
         }

      } else if (headA != NULL && headB != NULL) {

         if (headA->data < headB->data) {
            if (merged == NULL) { 
               new_head = headA;
            } else {
               merged->next = headA;
            }
            merged = headA;
            merged_prev = merged;
            headA = headA->next;
            merged->next = headB;
            merged = headB;
            headB = headB->next;
         } else if (headA->data > headB->data) {
            if (merged == NULL) { 
               new_head = headB;
            } else {
               merged->next = headB;
            }
            merged = headB;
            merged_prev = merged;
            headB = headB->next;
            merged->next = headA;
            merged = headA;
            headA = headA->next;
         }
      }
   }

   return new_head;
}