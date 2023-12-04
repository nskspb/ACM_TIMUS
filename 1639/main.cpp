#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;
    int k = 0;

    k = m * n - 1;

    if ((k % 2 == 0) || (k == 1))
    {
        std::cout << "[second]=:]";
    }
    else
    {
        std::cout << "[:=[first]";
    }

    return 0;
}