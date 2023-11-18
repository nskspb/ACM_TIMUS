#include <iostream>
int fact(int k){
    if (k==0) return 1;
    else return k * fact(k-1);
}

int main() {
    int N,M;
    std:: cin >> N >> M;
    if (N == 0) {  std::cout << 0 << std::endl; }
   else {std::cout << N*(M+1) << std::endl;}
    return 0;
}
