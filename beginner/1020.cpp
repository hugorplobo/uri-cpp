#include <iostream>
using namespace std;

int main(){

    int age, years = 0, months = 0, days = 0;

    cin >> age;

    while (age > 0) {
        if (age >= 365) {
            years++;
            age -= 365;
        } else if (age >= 30) {
            months++;
            age -= 30;
        } else {
            days = age;
            age = 0;
        }
    }

    cout << years << " ano(s)\n" << months << " mes(es)\n" << days << " dia(s)" << endl; 
    
    return 0;
}