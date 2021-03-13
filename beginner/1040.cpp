#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double n1, n2, n3, n4, average;

    cin >> n1 >> n2 >> n3 >> n4;

    average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / (2 + 3 + 4 + 1);

    cout << fixed << setprecision(1) << "Media: " << average << endl;

    if (average >= 7) {
        cout << "Aluno aprovado." << endl;
        return 0;
    } else if (average < 5) {
        cout << "Aluno reprovado." << endl;
        return 0;
    } else {
        cout << "Aluno em exame." << endl;
    }

    double n5, average2;

    cin >> n5;

    cout << "Nota do exame: " << n5 << endl;

    average2 = (n5 + average) / 2;

    if (average2 >= 5) {
        cout << "Aluno aprovado." << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }

    cout << fixed << setprecision(1) << "Media final: " << average2 << endl;

    return 0;

}