#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int summa = 0;
    int mas[N];
    mas[0] = 2;
    mas[1] = 2;

    if (N > 2)
    {
        for (auto i = 2; i < N; ++i)
        {
            mas[i] = mas[i - 1] + mas[i - 2];
        }
    }

    /*for (auto i = 0; i < N; ++i)
    {
        std::cout << mas[i] << "  ";
    }*/
    std::cout << mas[N - 1] << std::endl;
    return 0;
}