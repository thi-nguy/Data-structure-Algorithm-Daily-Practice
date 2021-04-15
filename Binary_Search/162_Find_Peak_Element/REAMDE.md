# Hints
- To achieve O(logn) time complexity, we need to divide the array in two halves.  
- **Each half will have a peak no matter what.**
- Since the problem is to find any peak, we can just keep going to one half and then return the last element.