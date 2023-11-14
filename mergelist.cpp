class Solution {
public:
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
// // list1:- head of LL1 | list2:- head of LL2

// // c1 :- if either of the list is empty
// if(list1 == NULL) return list2;
// else if(list2 == NULL) return list1;
// // c2 :- if both the lists are empty
// else if(list1 == NULL && list2 == NULL) return NULL;
// // c3 :- none of the list is empty
// else {
// ListNode* temp = new ListNode(-1);
// // head of the list3
// ListNode* current = temp;
// // curr -> -1 -> 1 -> 1 -> 2 -> 3 -> 4 -> 4
// // traverse both the lists and merge the nodes by comparing and putting in asc order.
// while(list1 && list2) {
// if(list1->val < list2->val) {
// current->next = new ListNode(list1->val);
// list1 = list1->next;
// } else {
// current->next = new ListNode(list2->val);
// list2 = list2->next;
// }
// current = current->next;
// }
// // There is a change that either of the list will become empty
// if(list1) {
// current->next = list1;
// } else {
// current->next = list2;
// }
// // Removing the dummy data -1 from the list
// ListNode* mergedLL = current->next;
// delete(current);
// return mergedLL;
// }

if(!list1) return list2;
if(!list2) return list1;
if(list1->val < list2->val) {
list1->next = mergeTwoLists(list1->next, list2);
return list1;
} else {
list2->next = mergeTwoLists(list2->next, list1);
return list2;
}
}
};