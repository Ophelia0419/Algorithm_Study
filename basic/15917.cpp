#include <iostream>
#include <vector>
using namespace std;

int main(){
    int Q=0,A=0;
    cin >> Q;
    vector <int> v(Q-1,0);

    for (int i=0;i<Q;i++){
        cin >> A;
        v[i]=A;
    }
    
    for (int i=0;i<Q;i++){
        if ((v[i]&(v[i]-1))==0){
            cout << 1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
    return 0;
}