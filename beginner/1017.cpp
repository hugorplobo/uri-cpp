#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int spent, average, distance;
    double needed;

    cin >> spent >> average;

    distance = spent * average;
    needed = distance / 12.0;

    cout << fixed << setprecision(3) << needed << endl;

    return 0;
}