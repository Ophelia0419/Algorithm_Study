#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T = 0;
    cin >> T;

    vector <int> time;
    for (int i=0; i<T; i++){
        cin >> time[i];
        cout << "\n";
    }

    vector <int> record;
    for (int i=0; i<T; i++){
        if (time[i]>30){
            record[i] = 1;
        }
        else if (time[i]<30);
    }
}