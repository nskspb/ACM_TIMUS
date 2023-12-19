#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> sections(n);
    int magic = 0;
    int summ = 0;
    int sred = 0;

    for (auto i = 0; i < n; ++i)
    {
        std::cin >> sections[i];
    }

    for (auto i = 1; i < n - 1; ++i)
    {
        summ = sections[i - 1] + sections[i] + sections[i + 1];
        if (summ > magic)
        {
            magic = summ;
            sred = i;
        }
    }

    std::cout << magic << " " << sred + 1 << std::endl;
    return 0;
}