#include <iostream>

void remove_char(char arr[], char remove_ch)
{
    if(arr[0] == '\0')
        return;

    if(arr[0] == remove_ch)
    {
        int i = 0;
        while(arr[i] != '\0')
        {
            arr[i] = arr[i+1];
            i++;
        }
        remove_char(arr, remove_ch);
    }
    else
        remove_char(arr+1, remove_ch);


}

int main()
{
    char arr[100];
    std::cin >> arr;
    char remove_ch;
    std::cin >> remove_ch;
    remove_char(arr, remove_ch);
    std::cout << arr << std::endl;
    return 0;
}
