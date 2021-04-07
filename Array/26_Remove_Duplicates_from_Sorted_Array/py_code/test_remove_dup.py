import pytest
from remove_dup import removeDuplicates

def test_empty_array():
    assert removeDuplicates([]) == []
def test_long_array():
    assert removeDuplicates([0, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 5, 5, 6]) == [0, 1, 2, 3, 4, 5, 6]
