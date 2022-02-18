#include <iostream>

/*
 * select first index and search for smallest element in the right side of the array. 
 * swap the smallest element with the first index and proceed with the next element
 */
// 3, 5, 2, 1, 7, 6

void selection_sort(int *arr, int size)
{
    int i, j;
    int smaller;
    for(i = 0; i < size; i++)
    {
        smaller = i+1;
        for(j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[smaller])
                smaller = j;
        }
        if(arr[smaller] < arr[i]) 
            std::swap(arr[i], arr[smaller]);
    }
}

int main()
{

    int size_of_array = 0;
    std::cin >> size_of_array;
    int *arr = new int[size_of_array];
    for(int i = 0; i < size_of_array; i++)
        std::cin >> arr[i];

    selection_sort(arr, size_of_array);
    
    for(int i = 0; i < size_of_array; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    delete [] arr;
    return 0;

}
