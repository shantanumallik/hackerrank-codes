#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<unsigned long long int>arr(26);
void check(string str)
{
    int i;
    int n=str.length();
    vector<unsigned long long int>arr2(26);
    for(i=0;i<26;i++)
    {
        arr2[i]=0;
    }
    for(i=0;i<n;i++)
    {
        
        int h=(int)str[i]-'a'; //cout<<h;
         arr2[h]=1;
    }
    
    for(i=0;i<26;i++)
    {
        arr[i]+=arr2[i];
    }
    for(i=0;i<26;i++)
    {
        arr2[i]=0;
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int count=0;
    int i;
    cin>>n;
    string str;
    for(i=0;i<=n;i++)
    {
        getline(cin,str);
        check(str);
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]==n) count+=1;
    }
    cout<<count;
    return 0;
}
