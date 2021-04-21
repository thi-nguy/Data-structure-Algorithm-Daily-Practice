# 1346. Check if N and its double exist
- This problem is a simple one. Although if we analyse it, there are plenty of stuff to learn.
- To look for optimal runtime, we can come up with Set or Dictionary solution (in Python). I found that using `Set` is the clearest solution.  
- However, I am not sure that using `Set` and  `if item not in set` is optimal. To know wether or not the item is in the set, we need to use another loop? Doesn't it make double loops which has Runtime O(N^2)?
- Also, to get a set, we need to remove duplicate values. Which means we need to sort the array (O(nlogn)). Then remove duplicate elements (O(n)).
- Another question is how we can optimize C codes without all fancy stuff like `set`, `if not in` as in Python?

## Conclusion:
- If we care about Runtime. Use the Set approach. And Python.
- If we care about Space. Use the double loops one. Any language would work.