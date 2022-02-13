#include <iostream>

void print_all_position_of_element(int *arr, int size, int element, int i)
{
    if (i == size)
        return;
    
    if(arr[i] == element)
        std::cout << i << " ";

    print_all_position_of_element(arr, size, element, i+1);
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

    print_all_position_of_element(arr, size, element, 0);
    std::cout << std::endl;
    delete [] arr;

    return 0;
}