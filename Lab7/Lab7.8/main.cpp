#include <iostream>

using namespace std;

class safeexarray {
private:
    int N_f;
    int N_l;
    int N;
    int n[9999];
public:
    safeexarray (int first, int last): N_f(first), N_l(last){}

    void putel () {
        do{
        cout << "Enter index from " << N_f << " to " << N_l << " (if you want to end enter 0) : ";
        cin >> N;
            if (N>=N_f && N<=N_l) {
                cout << "Enter number in this index: ";
                cin >> n[N];
                cout << endl;
            }
            else if (N == 0) {}
            else {
                cout << "You are trying to write number in not allowed index!!!" << endl << endl;
            }
        }
        while (N != 0);
    }

    void getel () {
        do{
            cout << "Enter index from " << N_f << " to " << N_l << " (if you want to end enter 0) : ";
            cin >> N;
            if (N>=N_f && N<=N_l) {
                cout << "Number in this index: " << n[N] << endl;
            }
            else {
                cout << "You are not allowed to read this index!!!" << endl << endl;
            }
        }
        while(N != 0);
    }
};

int main()
{
    safeexarray P(15, 60);
    P.putel();
    cout << endl << "END OF WRITING" << endl << endl;
    P.getel();
    return 0;
}
