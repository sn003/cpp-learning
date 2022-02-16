#include <iostream>
#include <string>


int convertStringToInt(std::string str)
{
    if(str.size() == 0)
        return 0;

    int small_ans =  convertStringToInt(str.substr(0, str.size() - 1));
    int last_digit = str[str.size() - 1] - '0';
    return small_ans * 10 + last_digit;
}


int main()
{

    std::string str;
    std::cin >> str;
    std::cout << convertStringToInt(str);
    return 0;

}
