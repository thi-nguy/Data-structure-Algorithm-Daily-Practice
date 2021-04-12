import pytest
from mySqrt import mySqrt

def test_min():
    assert (mySqrt(0)) == 0

def test_max():
    assert(mySqrt(2147483647)) == 46340

def test_random_num():
    assert(mySqrt(4)) == 2
    assert(mySqrt(5)) == 2
    assert(mySqrt(6)) == 2
    assert(mySqrt(8)) == 2
    assert(mySqrt(9)) == 3
    assert(mySqrt(1000)) == 31