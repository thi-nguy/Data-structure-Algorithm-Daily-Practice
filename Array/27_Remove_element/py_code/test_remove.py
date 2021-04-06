import pytest
from remove import removeElement

def test_simple_case():
    assert removeElement([2, 3, 3, 2], 2) == [3, 3]

def test_long_array():
    assert removeElement([2, 0, 1, 2, 2, 2, 3, 0, 4, 2], 2) == [0, 1, 3, 0, 4]