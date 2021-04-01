import pytest
from find_nums import findNumbers

def test_zero_element() -> None:
	assert findNumbers([]) == 0

def test_one_element() -> None:
	assert findNumbers([12]) == 1
	assert findNumbers([1]) == 0

def test_several_elements() -> None:
	assert findNumbers([11, 12, 12345, 1234]) == 3

def test_multiples_of_ten() -> None:
	assert findNumbers([1000, 100, 10]) == 2
