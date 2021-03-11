#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int distance;
    double spent, average;

    cin >> distance >> spent;

    average = distance / spent;

    cout << fixed << setprecision(3) << average << " km/l" << endl;

    return 0;
}