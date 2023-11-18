#include <iostream>
using namespace std;

int main() {
    int lock1, lock2;
    cin >>lock1 >>lock2;

    if (lock1 % 2 == 0 || lock2 % 2 != 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}