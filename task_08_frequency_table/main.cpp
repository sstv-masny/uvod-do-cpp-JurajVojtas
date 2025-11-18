
#include <iostream>
#include <string>
using namespace std;
int main() {
<<<<<<< HEAD
    // int n[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    char number[5] = {'f', 'i', 'l', 'i', 'p'};
    string meno = "filip";
    for (int i = 0; i < 11; i++) {
        cout << meno[i] << endl;
    }
    // TODO: read n values in [0,100], count, and print only those with count>0 in ascending value
=======

    int n[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7};

    cout << sizeof(n) / 4;

    for (int i = 0; i < 12; i++) {
        cout << n[i] << '\n';
    }

>>>>>>> c57e2686397020cf4ed5f8b16281ea5ff4a6a463
    return 0;
}
