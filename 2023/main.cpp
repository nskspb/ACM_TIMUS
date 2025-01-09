#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int readAddressToValue()
{
    int v = 0;
    string a;
    cin >> a;
    if (
        a == "Alice" || a == "Ariel" || a == "Aurora" ||
        a == "Phil" || a == "Peter" || a == "Olaf" ||
        a == "Phoebus" || a == "Ralph" || a == "Robin")
    {
        v = 0;
    }
    else if (
        a == "Bambi" || a == "Belle" || a == "Bolt" ||
        a == "Mulan" || a == "Mowgli" || a == "Mickey" ||
        a == "Silver" || a == "Simba" || a == "Stitch")
    {
        v = 1;
    }
    else
    {
        v = 2;
    }
    return v;
}
int main()
{

    int address0;
    int address1;
    int steps = 0;
    int n;
    cin >> n;

    address0 = readAddressToValue();
    steps += address0 - 0;
    for (int i = 1; i < n; i++)
    {
        address1 = readAddressToValue();
        steps += abs(address1 - address0);
        address0 = address1;
    }

    cout << steps;
    return 0;
}