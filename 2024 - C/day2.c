#include "aoc.h"

static int part1(FILE* input, int size){
    int sum = 0, lnum, cnum, inc, safe, read, read_b;
    char * str = malloc(256*sizeof(char));
    rewind(input);
    for(int i = 0; i < size; i++){
        safe = 1;
        inc = read = read_b = 0;
        fscanf(input, "%[^\n]\n", str);
        sscanf(str, "%d%n", &lnum, &read);
        while(sscanf(str+read, "%d%n", &cnum, &read_b)!=-1 && safe){
            read += read_b;
            if(inc == 0){
                if(lnum > cnum) inc = -1;
                else inc = 1;
            }
            if((abs(lnum-cnum)>3) || lnum==cnum || (inc == 1 && lnum > cnum) || (inc == -1 && lnum < cnum))
                safe = 0;
            lnum = cnum;
        }
        sum += safe;
    }
    free(str);
    return sum;
}

//no clue
static int part2(FILE* input, int size){
    int sum = 0, lnum, cnum, llnum, inc, safe, read, read_b, bad;
    char * str = malloc(256*sizeof(char));
    rewind(input);
    for(int i = 0; i < size; i++){
        safe = 1;
        inc = read = read_b = bad = 0;
        fscanf(input, "%[^\n]\n", str);
        sscanf(str, "%d%n", &lnum, &read);
        while(sscanf(str+read, "%d%n", &cnum, &read_b)!=-1 && safe){
            read += read_b;
            if(inc == 0){
                if(lnum > cnum) inc = -1;
                else inc = 1;
            }
            if(!bad && ((abs(lnum-cnum)>3) || lnum==cnum || (inc == 1 && lnum > cnum) || (inc == -1 && lnum < cnum))){
                bad++;
                lnum = llnum;
            }
            else if(bad && ((abs(lnum-cnum)>3) || lnum==cnum || (inc == 1 && lnum > cnum) || (inc == -1 && lnum < cnum))){
                safe = 0;
            }
            else{
                llnum = lnum;
                lnum = cnum;
            }
        }
        sum += safe;
    }
    free(str);
    return sum;
}

void day2(char* file, int len){
    clock_t start = clock();
    FILE* input = fopen(file, "r");

    printf("    1: %15d / %-15d  %f\n", part1(input, len), part2(input, len), (double)(clock()-start)/CLOCKS_PER_SEC);

    fclose(input);
}