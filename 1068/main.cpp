#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int summa = 0;
    if (n < 1)
    {
        for (auto i = 1; i >= n; --i)
        {
            summa += i;
        }
    }
    else
    {
        for (auto i = 1; i <= n; ++i)
        {
            summa += i;
        }
    }

    std::cout << summa << std::endl;
    return 0;
}