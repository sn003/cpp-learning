#include <iostream>


bool check_palindrome(int *arr, int start, int end)
{
    if(start > end)
        return true;

    if(arr[start] == arr[end])
    {
        return check_palindrome(arr, start + 1, end - 1);

    }
    else
        return false;


}
int main()
{
    int size;
    std::cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++)
        std::cin >> arr[i];

    std::cout << std::boolalpha << check_palindrome(arr, 0, size-1) << std::endl;
    delete [] arr;
    return 0;


}
