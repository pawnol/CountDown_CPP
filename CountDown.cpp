/*
Count Down
Pawelski
4/10/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <Windows.h>

int main()
{
    int j = 10;
    while (j > 0) {
        std::cout << j << "...\n";
        Sleep(1000);
        j--;
    }
    std::cout << "Blast off!\n";
    return 0;
}
