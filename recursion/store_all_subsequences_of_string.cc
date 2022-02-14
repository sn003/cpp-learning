#include <iostream>
#include <string>
#include <vector>

void store_subsequences(std::string input, std::string answer, std::vector<std::string> &output)
{
    if(input.size() == 0)
    {
        output.push_back(answer);
        return;
    }

    store_subsequences(input.substr(1), answer, output);
    store_subsequences(input.substr(1), answer + input[0], output);

}

int main()
{
    std::string input;
    std::string ans = "";
    std::cin >> input;
    std::vector<std::string> output;
    store_subsequences(input, ans, output);
    for(auto str: output)
        std::cout << str << std::endl;
    return 0;


}
