#include <stdio.h>
#include "dup_zero.h"

void	print_array(int *arr, int arrSize)
{
	int i;

	i = 0;
	while (i < arrSize - 1)
	{
		printf("%i, ", arr[i]);
		i++;
	}
	printf("%i\n", arr[i]);
}

int	main(void)
{
	int arr1[5] = {1, 0, 2, 3, 0};
	printf("1, 0, 0, 2, 3\n");
	duplicateZeros(arr1, 5);
	print_array(arr1, 5);

	int arr3[6] = {1, 0, 2, 0, 1, 3};
	printf("1, 0, 0, 2, 0, 0\n");
	duplicateZeros(arr3, 6);
	print_array(arr3, 6);

	int arr2[6] = {0, 0, 0, 0, 0, 0};
	printf("0, 0, 0, 0, 0, 0\n");
	duplicateZeros(arr2, 6);
	print_array(arr2, 6);

	int arr4[6] = {1, 1, 1};
	printf("1, 1, 1\n");
	duplicateZeros(arr4, 3);
	print_array(arr4, 3);

	return (0);
}
