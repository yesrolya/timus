#include <iostream>
using namespace std;

int main()
{
    unsigned long int n, max_potentional = 0;
    long long int potentional = 0;
    cin >> n;
    long int p;
    for (int i = 0; i < n; i++)  {
        cin >> p;
        potentional += p;
        if (potentional > max_potentional) max_potentional = potentional;
        if (potentional < 0) potentional = 0;
    }

    cout << max_potentional << endl;
    return 0;
}
