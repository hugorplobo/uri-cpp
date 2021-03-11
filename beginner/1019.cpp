#include <iostream>
using namespace std;

int main(){

    int time, hours = 0, minutes = 0, seconds = 0;

    cin >> time;

    while (time > 0) {
        if (time >= 3600) {
            hours++;
            time -= 3600;
        } else if (time >= 60) {
            minutes++;
            time -= 60;
        } else {
            seconds = time;
            time = 0;
        }
    }

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}