#include <iostream>
#include <cmath>
using namespace std;

int S(int n) {
    int sum = 0;
    int h = n;
    while (h > 0) {
        sum += h%10;
        h /= 10;
    }
    return sum;
}
int main()
{
    int n;
    long unsigned int s = 0;
    cin >> n;

    cout << S(25) << endl;
    return 0;
}
