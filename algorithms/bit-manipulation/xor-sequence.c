#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int Q; 
    scanf("%d",&Q);
    int result;
    int size = pow(10,5);
    int A[size];
    A[0] = 0;
    for (int j = 1; j < size; j++) {
        A[j] = A[j-1] ^ j;
    }
    for(int a0 = 0; a0 < Q; a0++){
        long L; 
        long R; 
        scanf("%ld %ld",&L,&R);
        result = A[L];
        for (long i = L+1; i <= R; i++){
            result ^= A[i];
        }
        printf("%d\n", result);
    }
    
    return 0;
}
