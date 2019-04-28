#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main(){
    unsigned short n = 0, t;
    double s;
    cin >> t >> s;
    if (t == 1) s = s * 2;
    else if (t == 2) s = s * sqrt(2);
    int q;
    cin >> q;
    for(int i = 0; i < q ; i++){
        int t1, s1;
        cin >> t1 >> s1;
        if (t1 == 1) {
            if (2*s1 <= s) {
                n++;
                //cout << "can" << endl;
            }
        }
        else if (t1 == 2) {
            if (s1 <= s) {
                n++;
                //cout << "can" << endl;
            }
        }
        else if (t1 == 3)
            if (s1*sqrt(3.0)/2.0 <= s)  {
                n++;
                //cout << "can" << endl;
            }
    }
    cout << n << endl;
    return 0;
}
