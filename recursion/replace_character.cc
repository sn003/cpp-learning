#include <iostream>

void replace_char(char arr[], char source, char destination)
{
    if(arr[0] == '\0')
        return;

    if(arr[0] == source)
        arr[0] = destination;

    replace_char(arr + 1, source, destination);
}

int main()
{

    char arr[100];
    std::cin >> arr;
    char source_char, destination_char;
    std::cin >> source_char >> destination_char;
    replace_char(arr, source_char, destination_char);
    std::cout << arr << std::endl;
    return 0;

}
