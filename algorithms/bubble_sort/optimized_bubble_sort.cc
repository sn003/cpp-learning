#include <iostream>

void optimized_bubble_sort(int *arr, int size)
{
    for(int i = 1; i < size; i++)
    {
        bool swap_flag = false;
        for(int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                std::swap(arr[j], arr[j+1]);
                swap_flag = true;
            }
        }
        if(!swap_flag)
            break;
    }
}

int main()
{
    int size;
    std::cin >> size;

    int *arr = new int[size];
    for(int i = 0; i < size; i++)
        std::cin >> arr[i];

    optimized_bubble_sort(arr, size);
    for(int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    
    delete [] arr;
    std::cout << std::endl;
    return 0;

}
