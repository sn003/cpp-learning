#include <iostream>

int count_occurences_of_element(int *arr, int size, int element)
{
    int count = 0;

    if (size == 0)
        return 0;

    if (arr[size-1] == element)
        count += 1;

    return count + count_occurences_of_element(arr, size-1, element);
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

    std::cout << count_occurences_of_element(arr, size, element) << std::endl;    
    delete [] arr;

    return 0;
}