#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    //cout << max(a*2 + 39, 40 + b*2) << endl;
    cout << max(39+2*a, 40 + 2*b) << endl;
    return 0;
}
