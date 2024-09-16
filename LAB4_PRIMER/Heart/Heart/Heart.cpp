#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char z; int f;
    std::cout << "Введите символ для заполнения сердца: ";
    std::cin >> z;
    std::cout << "Введите размер сердца: ";
    while (!(cin >> f)) {
        cout << "Неверный тип данных. Попробуй снова: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Size = " << f << endl;
    double x, y;
    double size = f;
    for (x = 0; x < size; x++)
    {
        for (y = 0; y <= 4 * size; y++)
        {
            double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));
            if (dist1 < size + 0.5 || dist2 < size + 0.5)
                cout << z;
            else
                cout << " ";
        }
        cout << endl;
    }
    for (x = 1; x < 2 * size; x++)
    {
        for (y = 0; y < x; y++)
            cout << " ";
        for (y = 0; y < 4 * size + 1 - 2 * x; y++)
            cout << z;
        cout << endl;
    }
    return 0;
}