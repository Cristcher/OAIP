#include <iostream>
#include <cmath>
using namespace std;
void drawSemiCircle(int radius, char fillChar) {
    for (int y = radius; y >= 0; --y) {
        for (int x = -2 * radius; x <= 2 * radius; ++x) {
            if (x * x + 4 * y * y <= 4 * radius * radius) {
                cout << fillChar;
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    int radius; char fillChar;
    cout << "Введите радиус полукруга: ";
    cin >> radius;
    cout << "Введите символ для заполнения полукруга: ";
    cin >> fillChar;
    drawSemiCircle(radius, fillChar);
}