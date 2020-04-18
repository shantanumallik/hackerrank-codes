#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void solve(int a0, int a1, int a2, int b0, int b1, int b2, int *arr){
    // Complete this function
    //int arr[2]={0,0};
    if(a0>b0) arr[0]+=1;
    else
    {
        if(a0<b0) arr[1]+=1;
    }
    if(a1>b1) arr[0]+=1;
    else
    {
        if(a1<b1) arr[1]+=1;
    }
    if(a2>b2) arr[0]+=1;
    else
    {
        if(a2<b2) arr[1]+=1;
    }
    
    
    
    
    
}

int main() {
    int *arr;
    arr=malloc(2*sizeof(int));
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size=2;
     solve(a0, a1, a2, b0, b1, b2, arr);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", arr[result_i]);
    }
    puts("");
    

    return 0;
}

