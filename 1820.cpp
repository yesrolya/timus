#include <iostream>
#include <cmath>
using namespace std;

int main () {

    unsigned int n, k;
    cin >> n >> k;
    int result = ceil(n*2.0/k);
    if (n <= k) result = 2;
    cout << result;
    return 0;
}
