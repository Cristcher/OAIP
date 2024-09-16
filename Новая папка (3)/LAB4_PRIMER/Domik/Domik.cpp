#include <iostream>
using namespace std;
void drawTriangle(int height, char symbol) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j) {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << symbol;
        }
        cout << endl;
    }
}
void drawSquare(int size, char symbol, int padding) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < padding; ++j) {
            cout << ' ';
        }
        for (int j = 0; j < size; ++j) {
            cout << symbol;
        }
        cout << endl;
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    int triangleHeight, squareSize;
    char triangleSymbol, squareSymbol;

    cout << "Введите высоту треугольника: ";
    cin >> triangleHeight;
    cout << "Введите символ для треугольника: ";
    cin >> triangleSymbol;
    cout << "Введите размер квадрата: ";
    cin >> squareSize;
    cout << "Введите символ для квадрата: ";
    cin >> squareSymbol;
    drawTriangle(triangleHeight, triangleSymbol);
    // Центрирование квадрата под треугольником
    int padding = (2 * triangleHeight - 1 - squareSize) / 2;
    drawSquare(squareSize, squareSymbol, padding);
    return 0;
}