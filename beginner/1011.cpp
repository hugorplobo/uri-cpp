#include <iostream>
#include <iomanip>

using namespace std;

#define pi 3.14159

int main(){

    double radius, volume;

    cin >> radius;

    volume = 4.0/3.0 * pi * radius * radius * radius;

    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;

    return 0;
}