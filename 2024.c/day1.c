#include "aoc.h"

static int part1(int* a, int* b, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += abs(a[i] - b[i]);
    }
    return sum;
}

static int part2(int* a, int* b, int size){
    int sum = 0;
    int c;
    for(int i = 0; i< size; i++){
        c = 0;
        for(int j = 0; j < size; j++){
            if(a[i] == b[j])
                c++;
        }
        sum += c*a[i];
    }
    return sum;
}

static int cmp(const void *a, const void *b){
    return ( *(int*)a - *(int*)b );
}

void day1(char* file, int len){
    clock_t start = clock();
    FILE* input = fopen(file, "r");

    int* a = malloc(sizeof(int)*len);
    int* b = malloc(sizeof(int)*len);

    for(int i = 0; i < len; i++){
        fscanf(input, "%d   %d", a+i, b+i);
    }

    fclose(input);

    qsort(a, len, sizeof(int), cmp);
    qsort(b, len, sizeof(int), cmp);

    printf("    1: %15d / %-15d  %f\n", part1(a, b, len), part2(a, b, len), (double)(clock()-start)/CLOCKS_PER_SEC);

    free(a);
    free(b);
}