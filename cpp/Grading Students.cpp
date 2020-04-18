#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int i, j;
    for(i=0;i<n;i++)
    {
        cin>>j;
        if(j<38) cout<<j;
        else
        {
            int s=5-(j%5);
            if(s<3) j=j+s;
            cout<<j;
        }
        if(i<n-1) cout<<endl;
    }
    return 0;
}
