#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int code, qnt;
    double prices[5] = {4.0, 4.5, 5.0, 2.0, 1.5};

    cin >> code >> qnt;

    cout << fixed << setprecision(2)
        << "Total: R$ " << prices[code - 1] * qnt << endl;
    
    return 0;
}