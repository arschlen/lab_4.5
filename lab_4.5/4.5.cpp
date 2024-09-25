#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {
    double x, y, R;

    cout << "R: ";
    cin >> R;

    srand(static_cast<unsigned>(time(0))); 

    // Перший спосіб:
    for (int i = 0; i < 10; i++) {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        // Перевірка 
        if ((x >= -R && x <= 0 && y >= 0 && (x + R) * (x + R) + y * y <= R * R) || // Верхня півкола
            (x >= 0 && x <= R && y <= 0 && (x - R) * (x - R) + y * y <= R * R)) {  // Нижня півкола
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    cout << endl << fixed;

    // Другий спосіб
    for (int i = 0; i < 10; i++) {
        x = 2.0 * R * rand() / RAND_MAX - R;
        y = 2.0 * R * rand() / RAND_MAX - R;

        cout << setw(8) << setprecision(4) << x << " " << setw(8) << setprecision(4) << y << " ";

        if ((x >= -R && x <= 0 && y >= 0 && (x + R) * (x + R) + y * y <= R * R) || // Верхня півкола
            (x >= 0 && x <= R && y <= 0 && (x - R) * (x - R) + y * y <= R * R)) {  // Нижня півкола
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}
