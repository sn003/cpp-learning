#include <iostream>
#include <string>

void permutations_of_string(std::string str, int end)
{
    if (str.size()-1 == end)
        std::cout << str << std::endl;

    for(int i = end; i < str.size(); i++)
    {
        std::swap(str[i], str[end]);
        permutations_of_string(str, end+1);
        std::swap(str[i],  str[end]);
    }
}


int main()
{
    std::string str;
    std::cin >> str;
    permutations_of_string(str, 0);
    return 0;
}
