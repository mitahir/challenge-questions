#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int v, n;
    scanf("%d %d", &v, &n);
    
    int *ar = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    
    int index = 0;
    while (ar[index] != v) {
        index++;
    }
    
    printf("%d", index);
    return 0;
}
