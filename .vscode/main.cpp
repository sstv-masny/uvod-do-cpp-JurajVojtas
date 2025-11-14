#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number " << endl;

    cin >> n;

    cout << "in: " << n << endl;

    if (n % 2 == 0) {
        cout << "Number is even ";
    }
    else
        cout << "Number is odd " << endl;
return 0;
}