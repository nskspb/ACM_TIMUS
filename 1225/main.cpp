#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    long long mas[N];
    mas[0] = 2;
    mas[1] = 2;

    if (N > 2)
    {
        for (auto i = 2; i < N; ++i)
        {
            mas[i] = mas[i - 1] + mas[i - 2];
        }
    }
    std::cout << mas[N - 1] << std::endl;
    return 0;
}