// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n)
{
    int left;
    int right;
    int mid;

    left = 1;
    right = n;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (isBadVersion(mid) == false)
            left = mid + 1;
        else
            right = mid;
    }
    if (isBadVersion(left) == true)
        return (left);
    return (-1);
}