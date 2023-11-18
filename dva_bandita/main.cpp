#include <iostream>

int main() {
    int a,b;
    std :: cin >> a >> b;
    if ((a>1) && (b>1)) {
        std::cout << b - 1 << " " << a - 1;
    }
    else std :: cout << 0 << 0;
    return 0;
}
