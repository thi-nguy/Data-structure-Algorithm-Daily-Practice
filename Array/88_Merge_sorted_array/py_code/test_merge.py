import pytest
from merge import merge

def test_normal_case():
    assert merge([1, 3, 5, 0 , 0, 0], 3, [2, 4, 6], 3) == [1, 2, 3, 4, 5, 6]
    assert merge([1, 3, 5, 0, 0, 0], 3, [7, 8, 9], 3) == [1, 3, 5, 7, 8, 9]

def test_empty_array():
    assert merge([], 0, [], 0) == []