
#include <iostream>
using namespace std;
int main() {

    int n[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7};

    cout << sizeof(n) / 4;

    for (int i = 0; i < 12; i++) {
        cout << n[i] << '\n';
    }

    return 0;
}
