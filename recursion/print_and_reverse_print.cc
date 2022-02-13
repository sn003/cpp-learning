#include <iostream>

void print(char *arr)
{
    if(arr[0] == '\0')
        return;
    std::cout << arr[0];
    print(arr + 1);

}

void reverse_print(char *arr)
{

    if(arr[0] == '\0')
        return;

    reverse_print(arr + 1);
    std::cout << arr[0];

}

int main()
{
    char arr[] = "Github";
    print(arr);
    std::cout << std::endl;
    reverse_print(arr);
    std::cout << std::endl;
    return 0;

}
