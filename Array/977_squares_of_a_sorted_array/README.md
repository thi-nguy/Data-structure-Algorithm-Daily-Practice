# 977. Squared of a sorted array
- In this problem, I had difficulty not on the algorithm but the prototype of the function: `int *sortedSquares(int *nums, int numsSize, int *returnSize)`. 
-  `int *returnSize` actually does not contribute to the function but rather it serves to the main function when we do unit tests.
- I made the mistake of setting `int *returnSize` as a pointer to integer in the `main` function. But actually it should be just `int`.