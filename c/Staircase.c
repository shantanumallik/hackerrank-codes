#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void staircase(int n) {
    // Complete this function
    int i,j;
    for(i=n;i>0;i--)
    {
        for(j=0;j<i-1;j++)
            printf(" ");
        for(j=n+1;j>i;j--)
            printf("#");
      if(i>0)  printf("\n");
    }
        
}

int main() {
    int n; 
    scanf("%i", &n);
    staircase(n);
    return 0;
}
