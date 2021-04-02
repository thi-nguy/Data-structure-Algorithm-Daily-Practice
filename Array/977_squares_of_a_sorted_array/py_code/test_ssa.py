import pytest 
from ssa import sortedSquares

def test_odd_elements() -> None:
	assert sortedSquares([-4, -2, 0, 1, 8]) == [0, 1, 4, 16, 64]

def test_even_elements() -> None:
	assert sortedSquares([-10, -9, -8, 3]) == [9, 64, 81, 100]

def test_zero_elements() -> None:
	assert sortedSquares([10]) == [100]
