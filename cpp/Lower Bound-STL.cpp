#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, temp;
    vector<int> arr;
    cin>>n;
    for( int i = 0; i<n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int q;
    cin>>q;
    for (int i = 0; i<q; i++)
    {
        cin>>temp;
        auto it = lower_bound(arr.begin(), arr.end(), temp);

        if(*it != temp)
        {
            //auto it2 = lower_bound(arr.begin(), arr.end(), temp);
            cout<<"No "<<it - arr.begin()+1<<endl;
        }
        else
        {
            cout<<"Yes "<<it - arr.begin()+1<<endl;
        }

    }

    return 0;
}
