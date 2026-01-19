#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<double> price;
    price.push_back(350.34);
    price.push_back(230.90);
    price.push_back(190.55);
    price.push_back(125.30);
    price.push_back(180.90);
    
    int T = 0;
    cin >> T;
    double A,B,C,D,E=0;
    for (int i=0;i<T;i++){
        cin >> A >> B >> C >> D >> E;
        cout << fixed << setprecision(2);
        cout << "$" << A * price[0] + B * price[1] + C * price[2] + D * price[3] + E * price[4] << "\n";
    }

}