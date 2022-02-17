#include <iostream>

int tower_of_hanoi(int no_of_disks)
{

    if(no_of_disks == 0)
        return 0;
    if(no_of_disks == 1)
        return 1;
    if(no_of_disks == 2)
        return 3;

    return tower_of_hanoi(no_of_disks -1) + 1 + tower_of_hanoi(no_of_disks - 1);



}
int main()
{
    int disks = 0;
    std::cin >> disks;
    std::cout << tower_of_hanoi(disks) << std::endl;
    return 0;


}
