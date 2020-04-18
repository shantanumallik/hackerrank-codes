#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp;
    cin>>n;
    vector<int>a;
    for (int i = 0; i<n; i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    reverse(a.begin(), a.end());

    for(int x:a)
    {
        cout<<x<<" ";
    }
    return 0;
}
