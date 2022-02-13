#include <iostream>
#include <vector>

void print_all_position_of_element(int *arr, int size, int element, int i, std::vector<int> &ans)
{
    if (i == size)
        return;
    
    if(arr[i] == element)
        ans.push_back(i);

    print_all_position_of_element(arr, size, element, i+1, ans);
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
    std::vector<int> ans;

    print_all_position_of_element(arr, size, element, 0, ans);
    for(auto i : ans)
        std::cout << i << " ";
    std::cout << std::endl;
    delete [] arr;

    return 0;
}
