/*
Given an array find the last occurence of the element and return it's index.
Problem is solved using recursion.

*/
#include <iostream>

int find_last_index_of_an_element(int *arr, int size, int element)
{
    if(size == 0)
        return -1;

    if(arr[size - 1] == element)
        return size -1;

    return find_last_index_of_an_element(arr, size-1, element);
}

int main()
{
    int size;
    std::cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++)
        std::cin >> arr[i];

    int element;
    std::cin >> element;
    std::cout << find_last_index_of_an_element(arr, size, element);
    std::cout << std::endl;
    delete [] arr;
    return 0;
}