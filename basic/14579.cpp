#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;

    int sum1 = 0;
    for (int i=1;i<=a;i++){
        sum1 += i;
    }

    long long mul = sum1;
    long long sum2 = sum1;
    for (int i=a+1;i<=b;i++){
        sum2 += i;
        sum2 = sum2 % 14579;
        mul *= sum2;
        mul = mul % 14579;
    }

    if (a<b && a>=1 && b<=1000){
        cout << mul << "\n";
    }
}