#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double average = 0;
    bool three = false;
    int* m = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        if (m[i] == 3) three = true;
        average += m[i];
    }
    average /= n;
    if (three) cout << "None";
    else if (average == 5) cout << "Named";
    else if (average >= 4.5) cout << "High";
    else cout << "Common";
    cout << endl;
    return 0;
}
