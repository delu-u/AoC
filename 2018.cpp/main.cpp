#include "aoc.h"

int main(void){
    auto start = high_resolution_clock::now();
    std::cout << "  Day:          Part 1 / Part 2           Runtime" << std::endl;
    day1(std::ifstream("2018.cpp\\1"));
    day2(std::ifstream("2018.cpp\\2"));
    std::cout << "Total:                                    " << duration_cast<milliseconds>(high_resolution_clock::now() - start).count() << std::endl;
    return 0;
}