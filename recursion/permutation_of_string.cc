#include <iostream>
#include <string>

void permutations_of_string(std::string str, int l)
{
    if (str.size()-1 == l)
        std::cout << str << std::endl;

    for(int i = l; i < str.size(); i++)
    {
        str[i] = str[l];
        permutations_of_string(str, l+1);
        str[l] = str[i];
    }
}


int main()
{
    std::string str;
    std::cin >> str;
    permutations_of_string(str, 0);
    return 0;
}
