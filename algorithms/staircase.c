#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        for (int k = (n - i); k < n; k++){
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}