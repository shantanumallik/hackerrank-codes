#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, pos, r1, r2, temp;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    cin>>pos;
    arr.erase(arr.begin()+pos-1);
    cin>>r1>>r2;
    arr.erase(arr.begin()+r1-1, arr.begin()+r2-1);
    cout<<arr.size()<<endl;
    for(int x:arr)
    {
        cout << x << " ";
    }
    return 0;
}
