#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159

int main(){

    double r, a;

    cin >> r;

    a = r * r * pi;

    cout << fixed << setprecision(4);
    cout << "A=" << a << endl;

    return 0;
}