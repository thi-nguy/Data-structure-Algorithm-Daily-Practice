import pytest
from duplicateZeros import duplicateZeros

def test_one_element():
    assert duplicateZeros([1]) == [1]
    assert duplicateZeros([0]) == [0]

def test_zero_element():
    assert duplicateZeros([]) == []

def test_several_elements():
    assert duplicateZeros([1, 0, 1]) == [1, 0, 0]
    assert duplicateZeros([0, 1]) == [0, 0]
    assert duplicateZeros([1, 2, 0, 3, 0, 4, 5, 0]) == [1, 2, 0, 0, 3, 0, 0, 4]