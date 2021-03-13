#include <iostream>
#include <list>
using namespace std;

void loop(list<int>);

int main() {

    list<int> inputs;
    int x, y, z;

    cin >> x >> y >> z;

    inputs.push_back(x);
    inputs.push_back(y);
    inputs.push_back(z);

    list<int> inputsSort(inputs);

    inputsSort.sort();
    loop(inputsSort);

    cout << endl;

    loop(inputs);

    return 0;

}

void loop(list<int> x) {
    list<int>::iterator iterator;
    for(iterator = x.begin(); iterator != x.end(); iterator++) {
        cout << *iterator << endl;
    }
}