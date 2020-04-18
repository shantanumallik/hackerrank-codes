#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int i;
    int count=0;
    int sum[105];
    for(i=0;i<n;i++) sum[i+1]=sum[i]+s[i];
    for(i=0;i<=n-m;i++){
        if((sum[i+m]-sum[i])==d) count++;
    }
    return count;
        
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
