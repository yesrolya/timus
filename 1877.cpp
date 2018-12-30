#include <iostream>
using namespace std;

int main () {

    unsigned int a, b;
    cin >> a >> b;
    bool flag = false;
    if (a % 2 == 0 || b % 2 == 1) flag = true;
    if (flag) cout << "yes";
    else cout << "no";
    return 0;
}
