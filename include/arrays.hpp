// Initializing Class with C++

#include <iostream>
#include <string>
#include <vector>


class ArrayAlgorithms 
{
    private:
        std::vector<int> array{45, 100, 2, -1, 10, 55};
    public:
        std::vector <int> FindDuplicates();
        std::vector <int> GetArray();
        void BinarySearch(int target);
        void SelectionSort();
        void InsertionSort();
        void PrintArray(std::vector<int>);
};
