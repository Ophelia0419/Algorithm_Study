#include <iostream>
using namespace std;

int main(){
    int N=0,remain=0,bag=0;
    cin >> N;

    for (int i=N/5;i>=0;i--){
        remain=N-(5*i);
        if ((remain%3)==0){
            bag=remain/3;
            cout << i+bag << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;    
} 
