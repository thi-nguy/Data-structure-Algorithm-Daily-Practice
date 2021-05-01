# 707. Design Linked List
- This data structure I thought at first is easy. But how wrong I was! After struggling with it, I learnt something important about `struct` in C.
- Apparently, if I declare struct as `int data` before `struct MyLinkedList *next`, the code does not work since the pointer will point to `data`, not to `next`  
----> **WHY????**  
----> **How could we change the code with `int data` before and it works?**

## Some thoughts
- If the codes "work" on pythontutor.com, does not mean it works. By some weird compiling system on that website, some segfaults can pass and the codes appear working!  
--> **Always try on your computer first!!**
- So we have two solutions:
- 1. Using pointer to pointer: `void myLinkedListAddAtHead(MyLinkedList **obj, int val)`
- 2. Returning a pointer to MyLinkedList: `MyLinkedList *myLinkedListAddAtHead(MyLinkedList *obj, int val)`
- Problem: either way doesn't comply with the problem on LeetCode! How do we solve it with `void myLinkedListAddAtHead(MyLinkedList* obj, int val) ` How do we know what kind of main that Leetcode uses?
## Solutions:
- To comply with function prototype, we use two structs as option 3 in `main_practice.c`. Then to update the `head node` is trivial (no need pointer to pointer).