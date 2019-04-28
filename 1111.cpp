#include <iostream>
#include <algorithm>
#include <cmath>
#define PI 3.14159265
using namespace std;


struct Square{
    long x1, x2, y1, y2;
    double R;
    unsigned short id;
};

double CountR(Square sq, long x, long y) {
    double x1, x2, y1, y2;
    double X, Y;
    //если квадрат не повернут
    if (abs(sq.x1 - sq.x2) == abs(sq.y1 - sq.y2)) {
        x1 = min(sq.x1, sq.x2);
        x2 = max(sq.x1, sq.x2);
        y1 = min(sq.y1, sq.y2);
        y2 = max(sq.y1, sq.y2);
        X = x;
        Y = y;
    } else {
        if (sq.x1 <= sq.x2) {
            x1 = sq.x1;
            x2 = sq.x2;
            y1 = sq.y1;
            y2 = sq.y1;
            X = x;
            Y = y;
        } else {
            x1 = sq.x2;
            x2 = sq.x1;
            y1 = sq.y2;
            y2 = sq.y1;
            X = x;
            Y = y;
        }
        double a = (PI/4.0) - atan((x2-x1)/(y2-y1));
        //диагональ квадрата
        double r = sqrt((x1-x2) * (x1-x2) + (y1-y2)*(y1-y2));
        x2 = x1 + r/sqrt(2);
        y2 = y1 + r/sqrt(2);
        //расстояние до точки
        r = sqrt((X - x1)*(X - x1) + (Y-y1)*(Y-y1));
        double b = atan((X-x1)/(Y-y1));
        X = x1 + r*sin(a + b);
        Y = y1 + r*cos(a + b);
        cout << "NEW COORDINATES SQUARE " << x1 << " " << y1;
        cout << " " << x2 << " " << y2 << endl;
        cout << "NEW COORDINATES DOT " << X << " " << Y << endl;
    }
    if (x1 <= X && x2 >= X && y1 <= Y && y2 >= Y)
        return 0;
    else if (x1 <= X && x2 >= X)
        return min(abs(Y - y1), abs(Y - y2));
    else if (y1 <= Y && y2 >= Y)
        return min(abs(X - x1), abs(X - x2));
    else
        return min (min(sqrt((Y-sq.y1)*(Y-sq.y1) + (X-sq.x1)*(X-sq.x1)), sqrt((Y-sq.y2)*(Y-sq.y2) + (X-sq.x1)*(X-sq.x1))), min(sqrt((Y-sq.y1)*(Y-sq.y1) + (X-sq.x2)*(X-sq.x2)), sqrt((Y-sq.y2)*(Y-sq.y2) + (X-sq.x2)*(X-sq.x2))));
}

bool foo(Square lhs, Square rhs){
    return (lhs.R > rhs.R) || (lhs.R == rhs.R && lhs.id > rhs.id);
}

void print(Square *squares, int n ){

    for(int i = n-1; i >= 0 ; i--){
        cout << squares[i].id << " ";
    }
}

int main(){
    unsigned short n ;
    cin >> n;
    Square *sq = new Square[n];
    for(int i = 0; i < n ; i++){
        sq[i].id = i+1;
        cin >> sq[i].x1 >> sq[i].y1 >> sq[i].x2 >> sq[i].y2;
    }
    long x, y;
    cin >> x >> y;

    for (int i = 0; i < n; i++) {
        sq[i].R = CountR(sq[i], x, y);
        //cout << sq[i].R << endl;
    }

    stable_sort(sq,sq+n ,foo);
    print(sq, n);
    //atan((x2-x1)/(y2-y1) * 180.0 / PI)
    //cout << atan((4-0.0)/(4-0)) * 180.0 / PI << endl;
    return 0;
}
