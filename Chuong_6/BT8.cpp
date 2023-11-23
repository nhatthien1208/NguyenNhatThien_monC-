#include <iostream>
#include <cstdlib>
#include <ctime>

void coinToss(int numTosses)
{
    srand(time(0)); 

    for (int i = 0; i < numTosses; ++i)
    {
        int result = rand() % 2 + 1;

        if (result == 1)
        {
            std::cout << "Đầu" << std::endl;
        }
        else if (result == 2)
        {
            std::cout << "Đuôi" << std::endl;
        }
    }
}

int main()
{
    int numTosses;

    std::cout << "Nhập số lần tung đồng xu: ";
    std::cin >> numTosses;

    coinToss(numTosses);

    return 0;
}