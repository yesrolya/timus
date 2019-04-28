#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int xa, ya, xb, yb, xc, yc, l;
    //int xa = -1, ya = 1, xb = 1, yb = 1, xc = -4, yc = -3, l = 0;
    double x, y;
    cin >> xa >> ya >> xb >> yb >> xc >> yc >> l;
    double l1, l2;
    if (xa != xb) {
        double kab = (ya - yb)/(xa - xb);
        if (kab != 0) {
            double kc = -1.0/ kab;
            double cab = ya - kab*xa;
            double cc = yc - kc*xc;
            x = (cab - cc)/(kab-kc);
            y = kab*x + cab;
        } else {
            x = xc;
            y = ya;
        }
        //cout << x << " " << y << endl;
    } else {
        x = xa;
        y = yc;
    }

    double la = sqrt((xa-xc)*(xa-xc) + (ya-yc)*(ya-yc)) - l;
    double lb = sqrt((xb-xc)*(xb-xc) + (yb-yc)*(yb-yc)) - l;
    //cout << la << endl << lb << endl;
    if (min(xa, xb) <= x && max(xa, xb) >= x && min(ya, yb) <= y && max(ya,yb) >= y) {
        l1 = sqrt((xc-x)*(xc-x) + (yc-y)*(yc-y)) - l;
        l1 = min(min(l1, la), lb);
    }
    else {
        l1 = min(la, lb);
    }
    l2 = max(la, lb);

    if (l1 < 0) l1 = 0;
    if (l2 < 0) l2 = 0;
    printf("%.2f \n%.2f\n", l1, l2);
    //cout << setprecision(2) << 1.0*l1 << endl << setprecision(2) << 1.0*l2 << endl;
    return 0;
}
