#include <iostream>
#include <string>

void tower_of_hanoi_steps(std::string source, std::string helper, std::string destination, int disks)
{
    if(disks == 0)
        return;

    tower_of_hanoi_steps(source, destination, helper, disks-1);
    std::cout << "Moving disk " << disks <<  " from  " << source << " to " << destination << std::endl;
    tower_of_hanoi_steps(helper, source, destination, disks-1);


}

int main()
{
    int disks = 0;
    std::cin >> disks;
    tower_of_hanoi_steps("A", "B", "C", disks);
    return 0;
}
