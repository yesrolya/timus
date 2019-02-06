#include <iostream>
using namespace std;

int main() {
    int n = 1;
    cin >> n;
    char** mas = new char*[n];
    for (int i = 0; i < n; i++) {
        mas[i] = new char[2];
        cin >> mas[i];
        if (mas[i][1] > '4') {
            mas[i][1] = (char)('8' - mas[i][1] + '1');
        }
        if (mas[i][0] > 'd') {
            mas[i][0] = (char)('h' - mas[i][0] + 'a');
        }
        //cout << mas[i];
        if (mas[i][0] == 'a') {
            if (mas[i][1] == '1') {
                mas[i][0] = '2';
            } else if (mas[i][1] == '2') {
                mas[i][0] = '3';
            } else {
                mas[i][0] = '4';
            }
        } else if (mas[i][0] == 'b') {
            if (mas[i][1] == '1') {
                mas[i][0] = '3';
            } else if (mas[i][1] == '2') {
                mas[i][0] = '4';
            } else {
                mas[i][0] = '6';
            }
        } else if (mas[i][1] == '1') {
            mas[i][0] = '4';
        } else if (mas[i][1] == '2') {
            mas[i][0] = '6';
        } else
            mas[i][0] = '8';
    }
    for (int i = 0; i < n; i++)
        cout << mas[i][0] << endl;

    return 0;
}
