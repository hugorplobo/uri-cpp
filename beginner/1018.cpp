#include <iostream>

using namespace std;

int main(){

    int initValue, calcValue, hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;

    cin >> initValue;

    calcValue = initValue;

    while(calcValue > 0) {
        if (calcValue >= 100) {
            calcValue -= 100;
            hundred++;
        } else if (calcValue >= 50) {
            calcValue -= 50;
            fifty++;
        } else if (calcValue >= 20) {
            calcValue -= 20;
            twenty++;
        } else if (calcValue >= 10) {
            calcValue -= 10;
            ten++;
        } else if (calcValue >= 5) {
            calcValue -= 5;
            five++;
        } else if (calcValue >= 2) {
            calcValue -= 2;
            two++;
        } else {
            calcValue -= 1;
            one++;
        }
    }

    cout << initValue << endl;
    cout << hundred << " nota(s) de R$ 100,00" << endl;
    cout << fifty << " nota(s) de R$ 50,00" << endl;
    cout << twenty << " nota(s) de R$ 20,00" << endl;
    cout << ten << " nota(s) de R$ 10,00" << endl;
    cout << five << " nota(s) de R$ 5,00" << endl;
    cout << two << " nota(s) de R$ 2,00" << endl;
    cout << one << " nota(s) de R$ 1,00" << endl;

    return 0;
}