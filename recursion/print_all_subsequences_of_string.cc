#include <iostream>
#include <string>

/*
 * To generate subsequences we have two choices.
 * One is to exclude the character and one more is to include the character in the output
 * Call the recursion one time with excluding the character.
 * Call the recursion one time with including the character.
 */

void print_all_subsequences(std::string input, std::string output)
{

    if (input.size() == 0)
    {
        std::cout << output << std::endl;
        return;
    }

    print_all_subsequences(input.substr(1), output); //Exclude the character in the output
    print_all_subsequences(input.substr(1), output + input[0]); //Include the character in the output

}

int main()
{
    std::string input;
    std::cin >> input;
    std::string output = "";
    print_all_subsequences(input, output);
    return 0;
}

