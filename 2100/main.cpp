#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cin >> n;
    int n_guest = n;
    std::vector<std::string> guests(n);
    int count = 0;

    for (auto i = 0; i < n; ++i)
    {
        std::cin >> guests[i];
        for (auto j = 0; j < guests[i].size(); ++j)
        {
            if (guests[i][j] == '+')
            {
                n_guest++;
            }
        }
    }

    if ((n_guest + 2) == 13)
    {
        n_guest++;
    }

    std::cout << n_guest * 100 + 200;

    return 0;
}