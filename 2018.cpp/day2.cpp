#include "aoc.h"

static int part1(std::ifstream* input){
    int a = 0, b = 0, cnt, fa = 0, fb = 0;
    std::string str;

    input->clear();
    input->seekg(0);

    while(*input >> str){
        fa = fb = 0;
        for(char c = 'a'; c <= 'z'; c++){
            cnt = std::count_if(str.begin(), str.end(), [c](char x){return x==c;});
            if(cnt==2 && !fa){
                a++;
                fa = 1;
            }
            else if(cnt==3 && !fb){
                b++;
                fb = 1;
            }
        }
    }
    return a*b;
}

static std::string part2(std::ifstream* input){
    int diff = 0, at = 0;
    std::vector<std::string> lines;
    std::string str;

    input->clear();
    input->seekg(0);

    while(*input >> str){
        lines.push_back(str);
    }

    for(std::string sa: lines){
        for(std::string sb: lines){
            if(!sa.compare(sb)) continue;
            diff = 0;
            for(int i = 0; i < sa.length(); i++){
                if(sa[i]!=sb[i] && !diff){
                    diff++;
                    at = i;
                }
                else if(sa[i]!=sb[i] && diff){
                    diff = 0;
                    break;
                }
            }
            if(diff==1){
                sa.erase(sa.begin()+at);
                return sa;
            }
        }
    }

    return "";
}

void day2(std::ifstream file){
    auto start = high_resolution_clock::now();
    std::cout << std::setw(7) << "2: " << std::setw(15) << part1(&file) << " / " << part2(&file) << std::setw(17) << duration_cast<milliseconds>(high_resolution_clock::now() - start).count() << std::endl;
}