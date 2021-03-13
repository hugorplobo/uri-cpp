#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main() {

    double a, b, c, delta, x1, x2;

    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    
    x1 = (-1 * b + sqrt(delta)) / (2 * a);
    x2 = (-1 * b - sqrt(delta)) / (2 * a);

    cout << fixed << setprecision(5)
        << "R1 = " << x1 << endl
        << "R2 = " << x2 << endl;

    return 0;
}

