#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int employeeNumber, workedHours;
    double receivesPerHour, salary;

    cin >> employeeNumber;
    cin >> workedHours;
    cin >> receivesPerHour;

    salary = workedHours * receivesPerHour;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << employeeNumber << endl;
    cout << "SALARY = U$ " << salary << endl;

    return 0;
}