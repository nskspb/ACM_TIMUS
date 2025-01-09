#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n > 2)
    {
        if (((n % 4) == 1) || ((n % 4) == 2))
        {
            std::cout << "grimy";
        }
        else
            std::cout << " black";
    }
    else
        std::cout << "grimy";

    return 0;
}