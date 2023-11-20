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
    int max = std::max(n[0], std::max(n[1], n[2]));
    int NumMax = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (n[i] == max)
        {
            NumMax = i;
        }
    }
    std::sort(ch[NumMax].begin(), ch[NumMax].end());
    for (int i = 0; i < ch[NumMax].size() - 1; ++i)
    {
        if (ch[NumMax][i] == ch[NumMax][i + 1])
        {
            ch[NumMax].erase(ch[NumMax].begin() + i);
            max--;
        }
    }
    std::vector<int> s(max);
    bool check = false;
    for (int j = 0; j < s.size(); ++j)
    {
        check = false;
        for (auto i = 0; i < n[1]; ++i)
        {
            if ((ch[1][i] == ch[NumMax][j]) && (check == false))
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
            if ((ch[2][i] == ch[NumMax][j]) && (check == false))
            {
                s[j]++;
                check = true;
            }
        }
    }

    for (int j = 0; j < s.size(); ++j)
    {
        check = false;
        for (auto i = 0; i < n[0]; ++i)
        {
            if ((ch[0][i] == ch[NumMax][j]) && (check == false))
            {
                s[j]++;
                check = true;
            }
        }
    }

    int k = 0;
    for (int j = 0; j < s.size(); ++j)
    {
        if (s[j] >= 3)
        {
            k++;
        }
    }
    std::cout << k;
    return 0;
}