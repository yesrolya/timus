#include <iostream>
using namespace std;

bool step_it (int number) {
    if (number == 0|| number == 1|| number == 2)
        return false;

}

int main () {

    unsigned int n;
    list <unsigned long> mas;
    cin >> n;

    for (int i = 0; i < n; i++) {
        unsigned long m;
        cin >> m;
        mas.push_back(m);
    }

    if (flag) cout << "yes";
    else cout << "no";
    return 0;
}
