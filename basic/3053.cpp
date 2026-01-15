#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double R = 0;
    cin >> R;

    double euclid = 0;
    double taxi = 0;
    double pi = 3.14159265359;

    euclid = R*R*pi;
    taxi = R*R*2;
    cout << fixed << setprecision(6); 
    cout << euclid << "\n";
    cout << taxi;

}