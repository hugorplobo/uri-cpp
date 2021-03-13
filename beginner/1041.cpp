#include <iostream>
using namespace std;

void result(string);

int main() {

    double x, y;

    cin >> x >> y;

    if (x == 0 && y == 0) {
        result("Origem");
    } else if (x == 0) {
        result("Eixo Y");
    } else if (y == 0) {
        result("Eixo X");
    } else if (x > 0 && y > 0) {
        result("Q1");
    } else if (x < 0 && y > 0) {
        result("Q2");
    } else if (x < 0 && y < 0) {
        result("Q3");
    } else if (x > 0 && y < 0) {
        result("Q4");
    }

    return 0;

}

void result(string txt) {
    cout << txt << endl;
}