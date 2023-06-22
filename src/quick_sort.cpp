#include<bits/stdc++.h>

int partition_array(int array[], int start, int end)
{
    int pivot = array[end];
    int partition_idx = start;

    for(int i=start; i<end; i++)
    {
        if(array[i] <= pivot)
        {
            std::swap(array[i], array[partition_idx]);
            partition_idx++;
        }
    }

    std::swap(array[partition_idx], array[end]);


    return partition_idx;
}

void QuickSort(int array[], int start, int end)
{   
    if(start < end)
    {   
        int partition_idx = partition_array(array, start, end);
        QuickSort(array, start, partition_idx-1);
        QuickSort(array, partition_idx+1, end);
    }

}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}


int main()
{   // create an unsorted array of size 1000
    int arr[100000];
    for(int i=0; i<100000; i++)
    {
        arr[i] = rand() % 100000;
    }
	// int arr[] = {45, 10, -1, -2, 100, 55, -1, 100, 2, 10};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Given array is \n";
	printArray(arr, arr_size);

	QuickSort(arr, 0, arr_size - 1);

	std::cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}