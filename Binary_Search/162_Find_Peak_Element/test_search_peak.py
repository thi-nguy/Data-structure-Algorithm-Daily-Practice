import pytest
from search_peak import findPeakElement

def test_one_element():
    assert findPeakElement([1]) == 0

def test_two_elements():
    assert findPeakElement([1, 2]) == 1
    assert findPeakElement([2, 1]) == 0 

def test_three_elements():
    assert findPeakElement([1, 2, 3]) == 2
    assert findPeakElement([3, 2, 1]) == 0
    assert findPeakElement([1, 3, 2]) == 1 
    
def test_random():
    assert findPeakElement([1, 2, 3, 4, 5, 9, 8, 7, 6]) == 5