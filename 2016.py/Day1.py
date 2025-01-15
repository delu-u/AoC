from time import time

dirs = [(1,0), (0,1), (-1,0), (0,-1)]

def Part1(input: list[str]) -> str:
    dir = 0
    ns, ew = 0, 0
    for i in input:
        if i[0] == "R":
            dir = (dir + 1) %4
        else: 
            dir -= 1
            if dir < 0: dir = 3
        ns += dirs[dir][0]*int(i[1:])
        ew += dirs[dir][1]*int(i[1:])
    return str(abs(ns)+abs(ew))
        
def Part2(input: list[str]) -> str:
    vis = [(0,0)]
    dir = 0
    ns, ew = 0, 0
    for i in range(0):continue
    for i in input:
        if i[0] == "R":
            dir = (dir + 1) %4
        else: 
            dir -= 1
            if dir < 0: dir = 3
        for _ in range(abs(dirs[dir][0]*int(i[1:]))):
            ns += dirs[dir][0]
            if (ns,ew) in vis:
                return str(abs(ns)+abs(ew))
            else: vis.append((ns,ew))
        for _ in range(abs(dirs[dir][1]*int(i[1:]))):
            ew += dirs[dir][1]
            if (ns,ew) in vis:
                return str(abs(ns)+abs(ew))
            else: vis.append((ns,ew))
    return str(abs(ns)+abs(ew))

    
@staticmethod
def solve(input: str):
    start = time()
    input = input.split(", ")
    print(f"    1: {Part1(input).rjust(15, ' ')} / {Part2(input).ljust(15, ' ')}  {time()-start}")