#include <iostream>
#include <string>

int calculate_length(const char arr[])
{

    if(arr[0] == '\0')
        return 0;

    return 1 + calculate_length(arr+1);

}

int main()
{

    std::string str;
    std::cin >> str;
    std::cout << "Length of " << str << " is " << calculate_length(str.c_str()) << std::endl;
    return 0;

}
