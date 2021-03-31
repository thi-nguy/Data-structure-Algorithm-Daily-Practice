#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	mco(int *nums, int numSize)
{
	int count;
	int count_max;
	int i;
	
	i = 0;
	count = 0;
	count_max = 0;
	while (i <= numSize)
	{
		if (nums[i] == 1)
			count++;
		else if (nums[i] == 0 || i == numSize)
		{
			if (count >= count_max)
				count_max = count;
			count = 0;
		}
		i++;
	}
	return (count_max);
}

int	main(int ac, char **av)
{
	int count;
	int *array;
	int i;
	int numSize;
	int len;

	if (ac > 2)
	{
		printf("Should have one input at a time.\n");
		return (0);
	}
	len = strlen(av[1]);
	if(!(array = (int *)malloc((len + 1) * sizeof(int))))
		return (0);
	numSize = len;
	i = 0;
	while (numSize > 0)
	{
		if (av[1][i] != '0' && av[1][i] != '1')
		{
			printf("Array should be binary.\nEnd program now.\n");
			free(array);
			array = NULL;
			return (0);
		}
		array[i] = av[1][i] - '0';
		i++;
		numSize--;
	}
	count = mco(array, len);
	printf("Output is: %i\n", count);
	free(array);
	array = NULL;
	return (0);
}
