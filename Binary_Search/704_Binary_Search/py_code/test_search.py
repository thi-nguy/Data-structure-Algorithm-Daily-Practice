import pytest
from search import search

def test_normal_array():
    assert search([-1, 0, 1, 5, 7], 3) == -1
    assert search([-1, 0, 3, 5, 9, 12], 12) == 5
    assert search([-1, 0, 3, 5, 9, 12], -1) == 0
    assert search([-1, 0, 3, 5, 9, 12], 5) == 3


def test_one_element():
    assert search([], 1) == -1
    assert search([-42], 0) == -1
    assert search([42], 42) == 0

def test_two_elemnt():
    assert search([-1, 9], 0) == -1
    assert search([-17, 2], 2) == 1