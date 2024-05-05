#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cin >> n;
    int mas[n][n];
    for (auto i = 0; i < n; ++i)
    {
        for (auto j = 0; j < n; ++j)
        {
            std::cin >> mas[i][j];
        }
    }

    for (auto i = 0; i < n; ++i)
    {
        for (auto j = 0; j <= i; ++j)
        {
            std::cout << mas[i - j][j] << "  ";
        }
    }

    for (int i = n; i < 2 * n - 1; i++)
    {
        for (int j = n - 1; j >= i - (n - 1); j--)
            std::cout << mas[j][i - j] << " ";
    }

    return 0;
}

// 0.0 1.0 0.1 2.0 1.1 0.2 3.0 2.1 1.2 0.3   3.1 2.2 1.3 3.2 2.3 3.3

// 1 3 6 10 2 5 9 13 4 8 12 15 7 11 14 16