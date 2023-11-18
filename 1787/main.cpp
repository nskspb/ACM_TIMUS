#include <iostream>

int main() {
    int k,n;
    int a[100];
    int sum = 0;
    std :: cin >> k >> n;
    //std::cout << std::endl;
    for (int i=1; i<=n; ++i){
        std :: cin >> a[i];
       // if ((a[i] - k) > 0){
            sum += a[i] - k;
       // }
        if (sum < 0) sum = 0;

    }
    if  ((n == 0) || (sum < 0)) { std :: cout << 0; }
        else { std :: cout << sum; }
    return 0;
}