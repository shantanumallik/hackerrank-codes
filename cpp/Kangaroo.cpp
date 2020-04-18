#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(v2>=v1) cout<<"NO";
    else{
        if(((x2-x1)%(v1-v2))==0) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}
