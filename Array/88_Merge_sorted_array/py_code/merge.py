def merge(nums1, m, nums2, n) -> None:
    if (m + n != len(nums1)):
        return
    i = m - 1
    j = n - 1
    k = m + n - 1
    while (j >= 0):
        if (nums1[i] > nums2[j] and i >= 0):
            nums1[k] = nums1[i]
            i -= 1
        else:
            nums1[k] = nums2[j]
            j -= 1
        k -= 1
    return (nums1)