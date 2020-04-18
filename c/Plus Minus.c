#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr_size, int* arr) {
    // Complete this function
    int i;
    int p=0,z=0,n=0;
    for(i=0;i<arr_size;i++)
    {
        if(arr[i]>0) p+=1; 
        else if(arr[i]<0) n+=1;
        else z+=1;
    }
    
    printf("%.6f\n",(float)((float)p/arr_size));
    printf("%.6f\n",(float)((float)n/arr_size));
    printf("%.6f",(float)((float)z/arr_size));
    
}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    plusMinus(n, arr);
    return 0;
}
