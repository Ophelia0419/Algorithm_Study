#include <iostream>
using namespace std;

int main() {
    long long A, B, V;
    cin >> A >> B >> V;

    long long day = (V - B) / (A - B);
    if ((V - B) % (A - B) != 0) {
        day++;
    }

    cout << day << endl;
    return 0;
}