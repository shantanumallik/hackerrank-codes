#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int diagonalDifference(int a_size_rows, int a_size_cols, int** a) {
    // Complete this function
    int i, temp=0, temp2=0;
   for(i=0;i<a_size_rows;i++)
   {
       temp+=a[i][i];
       temp2+=a[i][a_size_cols -i-1];
   }
   int temp3=temp-temp2;
    if(temp3<0) temp3*=(-1);
    return temp3;
}

int main() {
    int n; 
    scanf("%i", &n);
    //int a[n][n];
    int **a;
    a=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=malloc(n*sizeof(int));
    }
    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) {
      
          scanf("%i",&a[a_i][a_j]);
       }
    }
    int result = diagonalDifference(n, n, a);
    printf("%d\n", result);
    return 0;
}
