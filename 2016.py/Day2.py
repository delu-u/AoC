from time import time
from string import ascii_uppercase

def Part1(input: list[str]) -> str:
    out = ""
    pos = 4
    for i in input:
        for mv in i:
            if mv=='U' and pos//3>0:
                pos -= 3
            elif mv=='D' and pos//3<2:
                pos += 3
            elif mv=='L' and pos%3>0:
                pos -= 1
            elif mv=='R' and pos%3<2:
                pos += 1
        out += str(pos+1)
    return out

def Part2(input: list[str]) -> str:
    out = ""
    pos = 5
    for i in input:
        for mv in i:
            if mv=='U' and pos not in [1,2,4,5,9]:
                if pos in [3,13]:
                    pos -= 2
                else:
                    pos -= 4
            elif mv=='D' and pos not in [5,9,10,12,13]:
                if pos in [1,11]:
                    pos += 2
                else:
                    pos += 4
            elif mv=='L' and pos not in [1,2,5,10,13]:
                pos -= 1
            elif mv=='R' and pos not in [1,4,9,12,13]:
                pos += 1
        if pos < 10:
            out += str(pos)
        else:
            out += ascii_uppercase[pos-10]
    return out


@staticmethod
def solve(input: list[str]):
    start = time()
    print(f"    2: {Part1(input).rjust(15, ' ')} / {Part2(input).ljust(15, ' ')}  {time()-start}")