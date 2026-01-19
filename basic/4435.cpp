#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> gandalf_score;
    gandalf_score.push_back(1);
    gandalf_score.push_back(2);
    gandalf_score.push_back(3);
    gandalf_score.push_back(3);
    gandalf_score.push_back(4);
    gandalf_score.push_back(10);

    vector<int> shauron_score;
    shauron_score.push_back(1);
    shauron_score.push_back(2);
    shauron_score.push_back(2);
    shauron_score.push_back(2);
    shauron_score.push_back(3);
    shauron_score.push_back(5);
    shauron_score.push_back(10);

    int T = 0;
    cin >> T;

    vector<int> gandalf_num(6,0);
    vector<int> shauron_num(7,0);

    for (int i=0; i<T; i++){
        int total_score1 = 0;
        for (int i=0; i<6; i++){
            cin >> gandalf_num[i];
            total_score1 += gandalf_num[i]*gandalf_score[i];
        }
        int total_score2 = 0;
        for (int i=0; i<7; i++){
            cin >> shauron_num[i];
            total_score2 += shauron_num[i]*shauron_score[i];
        }
        if (total_score1 > total_score2){
            cout << "Battle " << i+1 << ": " << "Good triumphs over Evil" << "\n";
        }
        else if (total_score1 < total_score2){
            cout << "Battle " << i+1 << ": " << "Evil eradicates all trace of Good" << "\n";
        }
        else {
            cout << "Battle " << i+1 << ": " << "No victor on this battle field" << "\n";
        }
    }
}
