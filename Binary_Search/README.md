# Binary Search
## Template 1:  
At the end, you will be left with no elements to do anything. This is used when you want to find the target and the array doesn't contain any duplicates.  
## Template 2:  
you will be left with one element.  
## Template 3:  
you will be left with 2 elements at the end.  

One use case for T2/ T3 is when the sorted array is rotated and also contains duplicates. now to find the min element, you need to check with one extra element other than mid. the while loop condition makes sure the search space contains that extra neighbours. the 2 templates just helps us in assuring that the search space is with extra elements other than left, mid, right i.e to avoid overflow when accessing mid+1 or anything.