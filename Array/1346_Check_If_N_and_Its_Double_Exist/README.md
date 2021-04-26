# 1346. Check if N and its double exist
- This problem is a simple one. Although if we analyse it, there are plenty of stuff to learn.
- To look for optimal runtime, we can come up with Set or Dictionary solution (in Python). I found that using `Set` is the clearest solution.  
## Questions
|Questions|Answers|
|:-|:-|
|I am not sure that using `Set` and  `if item not in set` is optimal. To know wether or not the item is in the set, don't we need to use nested loops which has Runtime O(N^2)?|Set in Python uses Hash Set, therefore to look up an item it takes O(1) for avarage case and O(N) for worst case (which is all items are on the same bucket / key).|
|Also, to get a set, we need to remove duplicate values. Which means we need to sort the array (O(nlogn)). Then remove duplicate elements (O(n)).|No, to create a set, we use Hash map and it is O(N) for time complexity.|
|Another question is how we can optimize C codes without all fancy stuff like `set`, `if not in` as in Python?|Use/create Hash map.|

## Conclusion:
- If we care about Runtime. Use the Set / Hash Table approach.
- If we care about Space. Use nested loops.