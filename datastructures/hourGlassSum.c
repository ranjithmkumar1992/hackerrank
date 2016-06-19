#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int hourGlassSum(int a, int b, int c, int d, int e, int f, int g){
    return a+b+c+d+e+f+g;
}

int main(){
    int arr[6][6];
    for(int i = 0; i < 6; i++){
       for(int j = 0; j < 6; j++){
          scanf("%d",&arr[i][j]);
       }
    }
    int maxSum = -35;
    int currentSum;
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            currentSum = hourGlassSum(arr[j][i],arr[j-1][i-1],arr[j-1][i],arr[j-1][i+1],arr[j+1][i-1],arr[j+1][i],arr[j+1][i+1]);
            //printf("\ni= %d j= %d currentSum=%d",i,j,currentSum);
            if(currentSum > maxSum)
                maxSum = currentSum;
        }
    }
    printf("%d",maxSum);
    return 0;
}

