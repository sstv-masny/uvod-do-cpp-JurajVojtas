
#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cout << "Enter the number of terms you want to find: ";
    cin >> n;
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    // TODO: print "even" or "odd"
    return 0;
}
