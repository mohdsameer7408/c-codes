#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{
	int i, j, k = start, n1 = mid - start + 1, n2 = end - mid;
	int firstArray[n1], secondArray[n2];

	for (i = 0; i < n1; i++)
	{
		firstArray[i] = arr[start + i];
	}

	for (j = 0; j < n2; j++)
	{
		secondArray[j] = arr[mid + 1 + j];
	}

	i = 0, j = 0;

	while ((i < n1) && (j < n2))
	{
		if (firstArray[i] < secondArray[j])
		{
			arr[k] = firstArray[i];
			i++;
		}
		else
		{
			arr[k] = secondArray[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = firstArray[i];
		k++;
		i++;
	}
	while (j < n2)
	{
		arr[k] = secondArray[j];
		k++;
		j++;
	}
}

void mergeSort(int arr[], int start, int end)
{
	if (start < end)
	{
		int mid = (start + (end - 1)) / 2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
}

void main()
{
	int n, i;
	printf("Enter the size for the array = ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the array elments...\n");
	for (i = 0; i < n; i++)
	{
		printf("Enter an elment at %d = ", i + 1);
		scanf("%d", &arr[i]);
	}
	mergeSort(arr, 0, n - 1);
	printf("Array after sorting is.....\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
