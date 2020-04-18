#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) {
    int min=score[0];
    int max=score[0];
    int min_i=0;
    int max_i=0;
    int i;
    for(i=1;i<score.size();i++)
    {
           if(score[i]<min)
        {
           ++min_i;
            min=score[i];
        }
        if(score[i]>max)
        {
            ++max_i;
            max=score[i];
        }
    }
    vector<int>res={max_i,min_i};
    return res;
 }

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
