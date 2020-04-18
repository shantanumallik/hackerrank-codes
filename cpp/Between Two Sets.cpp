#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    int count=0;
    int j, flag=0;
    cin>>n>>m;
    int i;
    int *arr1=(int*)malloc(n*sizeof(int));
    int *arr2=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++) cin>>arr1[i];
    for(i=0;i<m;i++) cin>>arr2[i];
    int min=arr1[n-1];
    int max=arr2[0];
    for(i=min;i<=max;i++){
        for(j=0;j<n;j++){
            if(i%arr1[j]!=0) flag=1;
            
        }
        if(flag==0){
            for(j=0;j<m;j++){
            if(arr2[j]%i!=0) flag=1;
            
        }
        }
            if(flag==0) count++;
            else flag=0;
        
   
    }
    cout<<count;
    return 0;
}
