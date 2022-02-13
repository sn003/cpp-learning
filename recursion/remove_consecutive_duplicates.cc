#include <iostream>

void remove_consecutive_duplicates(char arr[])
{

    if(arr[0] == '\0')
        return;

    if(arr[0] != arr[1])
        remove_consecutive_duplicates(arr+1);
    else
    {
        int i = 0;
        while(arr[i] != '\0')
        {
            arr[i] = arr[i+1];
            i++;
               
        }
        remove_consecutive_duplicates(arr);
    }


}

int main()
{
    char arr[100];
    std::cin >> arr;
    remove_consecutive_duplicates(arr);
    std::cout << arr << std::endl;
    return 0;

}
