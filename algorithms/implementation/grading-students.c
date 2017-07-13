#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
    // Complete this function
    result_size = grades_size--;
    for (int i = 0; i < result_size; i++) {
        if (grades[i] > 37) {
            if (grades[i] % 5 > 2){
                grades[i] += (5 - (grades[i] % 5));
            }
        }
        printf("%d\n", grades[i]);
    }
    return grades;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size;
    int* result = solve(n, grades, &result_size);
    puts("");
    
    return 0;
}