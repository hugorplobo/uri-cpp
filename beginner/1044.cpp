#include <iostream>
using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if (max(a, b) % min(a, b) == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;

}