#include <iostream>

int no_of_ways(int N)
{
    if(N == 0 || N == 1)
        return 1;
    if(N == 2)
        return 2;
    if(N == 3)
        return 4;

    return no_of_ways(N-1) + no_of_ways(N-2) + no_of_ways(N-3);


}

int main()
{

    int steps = 0;
    std::cin >> steps;
    std::cout << no_of_ways(steps) << std::endl;
    return 0;


}
