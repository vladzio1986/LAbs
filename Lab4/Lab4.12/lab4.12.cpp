#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Player {
    int level = 1;
    int XP = 0;
    unsigned short int HP = 50;
};

int main()
{
    Player player;
    unsigned short int rnd;
    unsigned short int pl;
        do {
            srand(time(NULL));
            rnd = rand() % 3 + 1;
            cout << "HP: " << player.HP << endl;
            cout << "Level: " << player.level << setw(3) << player.XP << "/" << 5 + player.level*player.level << endl;
            cout << "Enter number (1-3) or 0 to exit: ";
            cin >> pl;
            if (pl == rnd) {
                cout << "                    You guessed and earned:" << 5 << endl;
                player.XP += 5;
            }
            else {
                cout << "                    Wrong number. The number was: " << rnd << endl;
                player.HP--;
                if (player.level > 1) {
                    if (pl > rnd) {
                        player.XP -= (pl - rnd);
                    }
                    else {
                        player.XP -= (rnd - pl);
                    }
                }
            }
            if (player.XP >= 5 + player.level*player.level) {
                player.XP -= 5 + player.level*player.level;
                player.level++;
            }
            if (player.XP < 0) {
                if (player.level > 1) {
                player.level--;
                player.XP = 5 + player.level*player.level + player.XP;
                }
            }
            if (player.HP <= 0) {
                cout << "Game over";
                return 0;
            }
        }
        while (pl != 0);
    cout << "Game over";
    return 0;
}
