# 1089. Duplicate Zeros
## C codes
- There are two solutions: duplicate_zero_1 and duplicate_zero_2. The second one has better run time but uses a lot of memory because we basically just copy all array into another array and then compare them.
## Python Code
- Python code follows the second solution. Here I learnt that array copying in Python has two kinds: 
- **Shallow copy**: `array1 = array2`. This one works like pointer. When we change one array, other changes correspondingly.
- **Deep copy**: `array1 = array2.copy()`. With this one, we allocate memory to a whole new copy. Changing one does not affect the other.