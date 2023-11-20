#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n[3];
    std::vector<std::vector<int>> ch(3);

    for (auto j = 0; j < 3; ++j)
    {
        std::cin >> n[j];
        ch[j].resize(n[j]);
        for (auto i = 0; i < n[j]; ++i)
        {
            std::cin >> ch[j][i];
        }
    }

    std::vector<int> s(std::max(n[0], std::max(n[1], n[2])));
    bool check = false;
    for (int j = 0; j < s.size(); ++j)
    {
        check = false;
        for (auto i = 0; i < n[1]; ++i)
        {
            if ((ch[1][i] == ch[0][j]) && (check == false))
            {
                s[j]++;
                check = true;
            }
        }
    }

    for (int j = 0; j < s.size(); ++j)
    {
        check = false;
        for (auto i = 0; i < n[2]; ++i)
        {
            if ((ch[2][i] == ch[0][j]) && (check == false))
            {
                s[j]++;
                check = true;
            }
        }
    }
    int k = 0;
    for (int j = 0; j < s.size(); ++j)
    {
        if (s[j] >= 2)
        {
            k++;
        }
    }

    std::cout << k;
    /*for (auto j = 0; j < 3; ++j)
    {
        for (auto i = 0; i < n[j]; ++i)
        {
            std::cout << ch[j][i];
        }
        std::cout << std::endl;
    }

    for (int j = 0; j < s.size(); ++j)
    {
        std::cout << s[j];
    }
    std::cout << std::endl;*/
    return 0;
}