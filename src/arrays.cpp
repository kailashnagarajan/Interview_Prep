#include<arrays.hpp>

// The following is the implementation of the class methods

// Getters and Setters
std::vector <int> ArrayAlgorithms::GetArray()
{
    return array;
}

std::vector<int> ArrayAlgorithms::FindDuplicates()
{
    // This function finds duplicates in a sorted array
    // and returns a new array with the duplicates removed
    // Note : It will only work when you have a sorted array.

    std::vector<int> temp_array;

    for(int i=0; i<array.size(); i++)
    {
        if(array[i] == array[i+1])
        {
            temp_array.push_back(array[i]);
            i = i+1;
        }
        else 
        {
            temp_array.push_back(array[i]);
            continue;
        }
    }

    return temp_array;
}

void ArrayAlgorithms::BinarySearch(int target)
{
    // This function performs binary search on a sorted array
    // and returns the index of the target element

    int low = 0;
    int high = array.size()-1;
    int mid = 0;

    while(low <= high)
    {   mid = low+((high - low)/2);

        if(array[mid] == target)
        {
            std::cout<< "The target element is at index " << mid << std::endl;
            break;
        }
        else if(array[mid] < target)
        {
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
    } 
}

void ArrayAlgorithms::SelectionSort()
{   
    // This function performs selection sort on an array
    std::cout<< "Unsorted Array :" << std::endl;
    ArrayAlgorithms::PrintArray(array);

    int min_index = 0;
    for(int i=0; i<=array.size(); i++)
    {
        min_index = i;

        for(int j= i+1; j<=array.size(); j++)
        {
            if(array[min_index] > array[j])
            {
                min_index = j;
            }
        }

        std::swap(array[min_index], array[i]);

    }

    std::cout<< "Sorted Array :" << std::endl;
    ArrayAlgorithms::PrintArray(array);


}

void ArrayAlgorithms::InsertionSort()
{   // sorts array in ascending order with insertion sort
    std::cout<<"Unsorted array is :"<<std::endl;
    ArrayAlgorithms::PrintArray(array);
    int key = 0;
    int j = 0;
    for(int i = 1; i<=array.size(); i++)
    {
        int key = array[i];
        int j = i-1;

        while(j>=0 && key<array[j])
        {
            array[j+1] = array[j];
            j = j-1;
        }

        array[j+1] = key;
    }

    std::cout<<"Insertion Sorted array is :"<<std::endl;
    ArrayAlgorithms::PrintArray(array);
}


void ArrayAlgorithms::PrintArray(std::vector<int> array)
{
    // This function prints the array

    for(int i=0; i<array.size(); i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}



int main()
{   ArrayAlgorithms arrayobj;

}