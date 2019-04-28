#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    array <long, 20> mas;
    for (int i = 0; i < n; i++) {
        cin >> mas.at(i);
    }
    sort(mas.begin(), mas.at(n-1));
    return 0;
}
