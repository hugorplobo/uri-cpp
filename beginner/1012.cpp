#include <iostream>
#include <iomanip>

using namespace std;

#define pi 3.14159

int main(){

    double a, b, c, triangleArea, circleArea, trapeziumArea, squareArea, rectArea;

    cin >> a >> b >> c;

    triangleArea = a * c / 2.0;

    circleArea = pi * c * c;

    trapeziumArea = (a + b) * c / 2.0;

    squareArea = b * b;

    rectArea = a * b;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangleArea << endl;
    cout << "CIRCULO: " << circleArea << endl;
    cout << "TRAPEZIO: " << trapeziumArea << endl;
    cout << "QUADRADO: " << squareArea << endl;
    cout << "RETANGULO: " << rectArea << endl;

    return 0;
}