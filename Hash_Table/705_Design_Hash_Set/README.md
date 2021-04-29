# 705. Design Hash Set
- C code is not optimal in Space complexity?
- Apply C code in doing #1346.
- Python code is where we start to use Object and Method!
## Main idea:
- Use Hash function to produce index of a number. Here index plays the role of "key" in hash set.
- If the range of number is big, we need a lot of space. We should think about linked list for the collision.
## Refine the code:
- Why is it better if we put hash size is prime number?