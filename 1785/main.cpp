#include <iostream>

int main() {
    int n;
    std :: cin >> n;
    switch(n){
        case 1 ... 4: std :: cout << "few"; break;
        case 5 ... 9: std :: cout << "several"; break;
        case 10 ... 19: std :: cout << "pack"; break;
        case 20 ... 49: std :: cout << "lots"; break;
        case 50 ... 99: std :: cout << "horde"; break;
        case 100 ... 249: std :: cout << "throng"; break;
        case 250 ... 499: std :: cout << "swarm"; break;
        case 500 ... 999: std :: cout << "zounds"; break;
        default: std :: cout << "legion"; break;
    }

    return 0;
}
