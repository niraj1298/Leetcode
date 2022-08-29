//You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
//Merge all the linked-lists into one sorted linked-list and return it.
//Niraj Nepal

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
  if (l1 == NULL)
    return l2;
  if (l2 == NULL)
    return l1;
  if (l1->val <= l2->val) {
    l1->next = mergeTwoLists(l1->next, l2);
    return l1;
  } else {
    l2->next = mergeTwoLists(l1, l2->next);
    return l2;
  }
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
  if (listsSize == 0)
    return NULL;
  if (listsSize == 1)
    return *lists;
  struct ListNode* merged = mergeTwoLists(*lists, *(lists + 1));
  for (int i = 2; i < listsSize; i++) {
    merged = mergeTwoLists(merged, *(lists + i));
  }
  return merged;
}
