#include "aoc.h"

int main(void){
    clock_t start = clock();
    printf("  Day:          Part 1 / Part 2           Runtime\n");
    // day1("2024 - C\\1.txt", 1000);
    day2("2.txt", 6);
    printf("Total:                                    %f\n", (double)(clock()-start)/CLOCKS_PER_SEC);
    return 0;
}