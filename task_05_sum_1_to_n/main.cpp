
#include <iostream>
using namespace std;
int main() {
    long long n, i = 1, sum = 0;

    cout << "Zadaj cislo ";
    cin >> n;

    while (i <= n) {
        sum = sum + i;
        i++;
    }
    cout << "Sucet cisel 1 - n je: " << sum;

    return 0;
}
