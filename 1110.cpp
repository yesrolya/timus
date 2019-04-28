#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned int n, m, y;
    cin >> n >> m >> y;
    bool finded = false;
    int j = 0;
    for(int i = 0; i < m - 1 ; ++i){

        long double temp;
        if (n != 0) {
            temp = pow(i*m + y, 1.0/n);
            if (temp >= m) break;
            if (temp == (int)temp) {
                finded = true;
                cout << temp << " ";
            }
        }
        else {
            temp = i;
            if (temp >= m) break;
            if (1%m == y) {
                finded = true;
                cout << temp << " ";
            }
        }

        //cout << temp << endl;


    }
    if (!finded) cout << "-1";
    return 0;
}
