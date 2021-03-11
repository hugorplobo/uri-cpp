#include <iostream>

using namespace std;

int main(){

    double initValue;
    int hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0;
    int oneDollar = 0, halfDollar = 0, quarterDollar = 0, oneDime = 0, fiveCents = 0, oneCents = 0;

    cin >> initValue;

    // initValue *= 100;

    while(true) {
        if (initValue >= 100) {
            initValue -= 100;
            hundred++;
        } else if (initValue >= 50) {
            initValue -= 50;
            fifty++;
        } else if (initValue >= 20) {
            initValue -= 20;
            twenty++;
        } else if (initValue >= 10) {
            initValue -= 10;
            ten++;
        } else if (initValue >= 5) {
            initValue -= 5;
            five++;
        } else if (initValue >= 2) {
            initValue -= 2;
            two++;
        } else {
            break;
        }
    }

    while(initValue > 0) {
        if (initValue >= 1) {
            initValue -= 1;
            oneDollar++;
        } else if (initValue >= 0.5) {
            initValue -= 0.5;
            halfDollar++;
        } else if (initValue >= 0.25) {
            initValue -= 0.25;
            quarterDollar++;
        } else if (initValue >= 0.1) {
            initValue -= 0.1;
            oneDime++;
        } else if (initValue >= 0.05) {
            initValue -= 0.05;
            fiveCents++;
        } else if (initValue >= 0.01) {
            initValue -= 0.01;
            oneCents++;
        }
    }

    std::cout << "NOTAS:" << std::endl;
    std::cout << hundred << " nota(s) de R$ 100,00" << std::endl;
    std::cout << fifty << " nota(s) de R$ 50,00" << std::endl;
    std::cout << twenty << " nota(s) de R$ 20,00" << std::endl;
    std::cout << ten << " nota(s) de R$ 10,00" << std::endl;
    std::cout << five << " nota(s) de R$ 5,00" << std::endl;
    std::cout << two << " nota(s) de R$ 2,00" << std::endl;

    std::cout << "MOEDAS:" << std::endl;
    std::cout << oneDollar << " moeda(s) de R$ 1.00" << std::endl;
    std::cout << halfDollar << " moeda(s) de R$ 0.50" << std::endl;
    std::cout << quarterDollar << " moeda(s) de R$ 0.25" << std::endl;
    std::cout << oneDime << " moeda(s) de R$ 0.10" << std::endl;
    std::cout << fiveCents << " moeda(s) de R$ 0.05" << std::endl;
    std::cout << oneCents << " moeda(s) de R$ 0.01" << std::endl;

    return 0;
}