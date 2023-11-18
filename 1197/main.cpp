#include <iostream>
#include <vector>

class Place
{
public:
    Place(char x, int y) : x{x}, y{y} {}

    bool isOnBoard(char a, int b)
    {
        if (a < 'a' || a > 'h' || b < 1 || b > 8)
            return false;
        return true;
    }

    char getx() const
    {
        return x;
    }

    int gety() const
    {
        return y;
    }

private:
    char x;
    int y;
};

int main()
{
    int N;
    std::cin >> N;
    std::vector<Place> places;

    for (int i = 0; i < N; i++)
    {
        char x;
        int y;
        std::cin >> x >> y;
        Place place(x, y);

        places.push_back(place);
    }

    for (int i = 0; i < N; i++)
    {
        int moves = 0;
        // left 2 up 1
        char a1 = places[i].getx() - 2;
        int b1 = places[i].gety() + 1;
        moves += places[i].isOnBoard(a1, b1);

        // left 2 down 1
        char a2 = places[i].getx() - 2;
        int b2 = places[i].gety() - 1;
        moves += places[i].isOnBoard(a2, b2);

        // right 2 up 1
        char a3 = places[i].getx() + 2;
        int b3 = places[i].gety() + 1;
        moves += places[i].isOnBoard(a3, b3);

        // right 2 down 1
        char a4 = places[i].getx() + 2;
        int b4 = places[i].gety() - 1;
        moves += places[i].isOnBoard(a4, b4);

        // left 1 up 2
        char a5 = places[i].getx() - 1;
        int b5 = places[i].gety() + 2;
        moves += places[i].isOnBoard(a5, b5);

        // left 1 down 2
        char a6 = places[i].getx() - 1;
        int b6 = places[i].gety() - 2;
        moves += places[i].isOnBoard(a6, b6);

        // right 1 up 2
        char a7 = places[i].getx() + 1;
        int b7 = places[i].gety() + 2;
        moves += places[i].isOnBoard(a7, b7);

        // right 1 down 2
        char a8 = places[i].getx() + 1;
        int b8 = places[i].gety() - 2;
        moves += places[i].isOnBoard(a8, b8);

        std ::cout << moves << std::endl;
    }
    return 0;
}