#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

int main()
{
    std::vector<std::string> penguins;

    penguins.push_back("Emperor");
    penguins.push_back("Little");
    penguins.push_back("Macaroni");

    int emp = 0;
    int lit = 0;
    int mac = 0;

    int n;
    std::cin >> n;
    std::string peng;
    for (int i = 0; i < 2 * n; ++i)
    {
        std::cin >> peng;
        penguins.push_back(peng);
    }

    for (int i = 0; i < n * 2 + 3; ++i)
    {
        if (penguins[i + 3] == penguins[0])
            emp++;
        else if (penguins[i + 3] == penguins[1])
            lit++;
        else if (penguins[i + 3] == penguins[2])
            mac++;
    }

    if ((emp > lit) && (emp > mac))
        std::cout << "Emperor Penguin";
    if ((lit > emp) && (lit > mac))
        std::cout << "Little Penguin";
    if ((mac > lit) && (mac > emp))
        std::cout << "Macaroni Penguin";

    return 0;
}