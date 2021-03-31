import pytest
from mco import find_mco

def test_one_element() -> None:
    # Test one element
    assert find_mco([1]) == 1
    assert find_mco([0]) == 0

def test_several_elemnt() -> None:
    # Test several elements
    assert find_mco([1, 1, 1, 0]) == 3

def test_windows() -> None:
    assert find_mco([1, 1, 0, 1, 1, 1, 0, 1]) == 3

