// ! Solution 1: Long runtime & Small memory used

#include "dup_zero.h"

void	insert_zero(int *arr, int index, int size)
{
	int i;

	i = size - 2;
	while (i >= index)
	{
		arr[i + 1] = arr[i];
		i--;
	}
	arr[index] = 0;
}
	
void	duplicateZeros(int *arr, int arrSize)
{
	int i;

	i = 0;
	while (i < arrSize - 1)
	{
		if (arr[i] == 0)
		{
			insert_zero(arr, i + 1, arrSize);
			i++;
		}
		i++;
	}
}