#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

class Card
{
    char type[20];
    char nominal[20];
public:
    Card()
    {
        strcpy(type, "hearts");
        strcpy(nominal, "ace");
    }

    Card(char type[], char nominal[])
    {
        strcpy(this->type, type);
        strcpy(this->nominal, nominal);
    }

    void display()
    {
        cout << type << "-" << nominal << endl;
    }
};

int main()
{
    srand(time(0));
    Card A[52];

    A[0] = Card("hearts", "2");
    A[1] = Card("hearts", "3");
    A[2] = Card("hearts", "4");
    A[3] = Card("hearts", "5");
    A[4] = Card("hearts", "6");
    A[5] = Card("hearts", "7");
    A[6] = Card("hearts", "8");
    A[7] = Card("hearts", "9");
    A[8] = Card("hearts", "10");
    A[9] = Card("hearts", "jack");
    A[10] = Card("hearts", "queen");
    A[11] = Card("hearts", "king");
    A[12] = Card("hearts", "ace");

    A[13] = Card("diamonds", "2");
    A[14] = Card("diamonds", "3");
    A[15] = Card("diamonds", "4");
    A[16] = Card("diamonds", "5");
    A[17] = Card("diamonds", "6");
    A[18] = Card("diamonds", "7");
    A[19] = Card("diamonds", "8");
    A[20] = Card("diamonds", "9");
    A[21] = Card("diamonds", "10");
    A[22] = Card("diamonds", "jack");
    A[23] = Card("diamonds", "queen");
    A[24] = Card("diamonds", "king");
    A[25] = Card("diamonds", "ace");

    A[26] = Card("clubs", "2");
    A[27] = Card("clubs", "3");
    A[28] = Card("clubs", "4");
    A[29] = Card("clubs", "5");
    A[30] = Card("clubs", "6");
    A[31] = Card("clubs", "7");
    A[32] = Card("clubs", "8");
    A[33] = Card("clubs", "9");
    A[34] = Card("clubs", "10");
    A[35] = Card("clubs", "jack");
    A[36] = Card("clubs", "queen");
    A[37] = Card("clubs", "king");
    A[38] = Card("clubs", "ace");

    A[39] = Card("spades", "2");
    A[40] = Card("spades", "3");
    A[41] = Card("spades", "4");
    A[42] = Card("spades", "5");
    A[43] = Card("spades", "6");
    A[44] = Card("spades", "7");
    A[45] = Card("spades", "8");
    A[46] = Card("spades", "9");
    A[47] = Card("spades", "10");
    A[48] = Card("spades", "jack");
    A[49] = Card("spades", "queen");
    A[50] = Card("spades", "king");
    A[51] = Card("spades", "ace");

    for (int i = 0; i < 4; i++)
    {
        cout << "\nplayer - " << i + 1 << ":" << endl;
        for (int j = 0; j < 13; j++)
        {
            int k = rand() % 52;
            A[k].display();
        }
        cout << endl;
    }

    return 0;
}
