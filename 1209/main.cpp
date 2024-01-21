#include <iostream>
#include <cmath>
int main()
{
    int n, m;
    std::cin >> n;

    for (size_t i = 0; i < n; ++i)
    {
        std::cin >> m;
        for (size_t j = 0; j < m; ++j)
        {
            unsigned temp = (j * (j + 1) >> 1) + 1;
            if (sqrt(8. * m - 7) == int(sqrt(8. * m - 7)))
            {
                std::cout << 1 << " ";
                break;
            }
            else
            {
                std::cout << 0 << " ";
                break;
            }
        }
    }
    return 0;
}

// 1101001000100001000001000000
// 0, 1, 3, 6, 10, 15, 21
// n*(n+1)/2
// 0 - 0, 1 - 1, 2 - 3, 3 - 6, 4 - 10, 5 - 15, 6 - 21

// 1101001000100001000001000000
// 0, 1, 3, 6, 10, 15, 21
// n*(n+1)/2
// 0 - 0, 1 - 1, 2 - 3, 3 - 6, 4 - 10, 5 - 15, 6 - 21