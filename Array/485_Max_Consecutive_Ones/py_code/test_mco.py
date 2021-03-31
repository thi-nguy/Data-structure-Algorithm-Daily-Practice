import pytest
import mco

def test_findMaxConsecutiveOnes():
    max_count = mco.findMaxConsecutiveOnes([1])
    assert max_count == 1
    max_count = mco.findMaxConsecutiveOnes([0])
    assert max_count == 0
    max_count = mco.findMaxConsecutiveOnes([1, 1, 0, 1, 1, 1])
    assert max_count == 3

