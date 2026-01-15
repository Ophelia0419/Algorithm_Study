#include <iostream>
using namespace std;

int main(){
    int A = 0;
    int B = 0;
    int C = 0;
    int temp = 0;
    cin >> A >> B >> C;

    if (A>B && B>C && A>C){
        cout << C << " " << B << " " << A;
    }
    else if (A>C && C>B && A>B){
        cout << B << " " << C << " " << A;
    }
    else if (B>A && A>C && B>C){
        cout << C << " " << A << " " << B;
    }
    else if (B>C && C>A && B>A){
        cout << A << " " << C << " " << B;
    }
    else if (C>A && A>B && C>B){
        cout << B << " " << A << " " << C;
    }
    else if (C>B && B>A && C>A){
        cout << A << " " << B << " " << C;
    }
}