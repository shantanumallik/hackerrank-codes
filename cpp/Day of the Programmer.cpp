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
    int daysinfeb;
    if(n==1918) daysinfeb=28-13;
    if(n<1918)
    {
        if(n%4==0) daysinfeb=29;
        else daysinfeb=28;
    
    }
    if(n>1918)
    {
        if((n%400==0)||(n%4==0&&n%100!=0))
            daysinfeb=29;
        else daysinfeb=28;
    }
    int totaldays=215+daysinfeb;
    int daysinsep=256-totaldays;
    printf("%02d.%02d.%02d",daysinsep,9,n);
    return 0;
}
