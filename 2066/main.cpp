#include <iostream>
#include <algorithm>
int main()
{

    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << std::min(a - (b * c), a - b - c) << std::endl;

    /*char m = 'a';
    m -= 22;
    std::cout << m << std::endl;*/
    return 0;
}