#include <iostream>
using namespace std;

int main() {
    int k, n = 1;
    cin >> k >> n;
    int* mas = new int[n];
    int temp = 0;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
        temp = mas[i] + temp - k;
        if (temp < 0) temp = 0;
    }
    cout << temp;

    return 0;
}
