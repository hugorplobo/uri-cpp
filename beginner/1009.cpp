#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    string name;
    double salary, sold, total;

    cin >> name >> salary >> sold;

    total = salary + (15 * sold / 100);

    cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;

    return 0;
}