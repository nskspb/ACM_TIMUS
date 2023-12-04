#include <iostream>
#include <math.h>

int main()
{
    double n, k;
    std::cin >> n >> k;
    double del = 0;
    if (n <= k)
    {
        del = 2;
    }
    else
    {
        del = ceil((n / k) * 2);
    }

    std::cout << del;
    return 0;
}