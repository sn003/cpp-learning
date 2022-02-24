#include <iostream>

//5, 4, 3, 2, 1
//
//4, 5, 3, 2, 1
//4, 3, 5, 2, 1
//4, 3, 2, 5, 1
//
void bubble_sort(int *arr, int size)
{
    for(int i = 1; i < size; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int size;
    std::cin >> size;

    int *arr = new int[size];
    for(int i = 0; i < size; i++)
        std::cin >> arr[i];

    bubble_sort(arr, size);
    for(int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    
    delete [] arr;
    std::cout << std::endl;
    return 0;

}
