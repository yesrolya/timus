<<<<<<< HEAD
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
=======
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
>>>>>>> cc62bf9e3a666d9138c2c26ee943d9b8a52df50f
