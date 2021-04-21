# Run time: O(n^2)
# def checkIfExist(arr) -> bool:
#     i = 0
#     while (i < len(arr)):
#         j = i + 1
#         while (j < len(arr)):
#             if (2 * arr[i] == arr[j] or 2 * arr[j] == arr[i]):
#                 return (True)
#             j += 1
#         i += 1
#     return (False)

# Run time: O(n). Using set.
def checkIfExist(arr) -> bool:
    # s = set(arr) #is faster
    s = set()
    for i in arr:
        s.add(i)
    for element in s:
        if 2 * element in s and element != 0:
            return True
    if arr.count(0) >= 2:
            return True
    return False
print(checkIfExist([10, 0, 3, 5, 3]))
print(checkIfExist([0, 0, 3, 5, 3]))