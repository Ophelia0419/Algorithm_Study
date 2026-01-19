#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> mbti(4);
    for (int i=0;i<4;i++){
        cin >> mbti[i];
    }

    vector<char> ideal(4);
    
    if (mbti[0]=='I'){
        ideal[0]='E';
    }
    else {
        ideal[0]='I';
    }

    if (mbti[1]=='S'){
        ideal[1]='N';
    }
    else {
        ideal[1]='S';
    }

    if (mbti[2]=='F'){
        ideal[2]='T';
    }
    else {
        ideal[2]='F';
    }

    if (mbti[3]=='J'){
        ideal[3]='P';
    }
    else {
        ideal[3]='J';
    }

    for (int i=0;i<4;i++){
        cout << ideal[i];
    }
}