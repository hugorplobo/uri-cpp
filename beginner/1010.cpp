#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int codeA, codeB, unitsA, unitsB;
    double priceA, priceB, toPay;

    cin >> codeA >> unitsA >> priceA;
    cin >> codeB >> unitsB >> priceB;

    toPay = unitsA * priceA + unitsB * priceB;

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << toPay << endl;

    return 0;
}