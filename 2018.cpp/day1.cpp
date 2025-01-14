#include "aoc.h"

static int part1(std::ifstream* input){
    int in, out = 0;

    input->clear();
    input->seekg(0);

    while(*input >> in){
        out += in;
    }

    return out;
}

//very bad but works
static int part2(std::ifstream* input){
    int in, out = 0;
    std::vector<int> seen = {0};

    input->clear();
    input->seekg(0);

    while(*input >> in){
        out += in;
        if(std::find(seen.begin(), seen.end(), out) != seen.end()){
            return out;
        }
        seen.push_back(out);
        if(input->peek() == EOF){
            input->clear();
            input->seekg(0);
        }
    }
    return out;
}

void day1(std::ifstream file){
    auto start = high_resolution_clock::now();
    std::cout << std::setw(7) << "1: " << std::setw(15) << part1(&file) << " / " << part2(&file) << std::setw(17) << duration_cast<milliseconds>(high_resolution_clock::now() - start).count() << std::endl;
}