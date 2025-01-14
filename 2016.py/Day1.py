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
    dir = 0
    ns, ew = 0, 0
    vis = []
    for i in input:
        if i[0] == "R":
            dir = (dir + 1) %4
            for j in range(min(ns, ns + dirs[dir][0]*int(i[1:])), max(ns, ns + dirs[dir][0]*int(i[1:]))+1):
                if(j, ew)not in vis:
                    vis.append((j,ew))
                else:
                    return str(abs(j)+abs(ew))
            ns += dirs[dir][0]*int(i[1:])
        else: 
            dir -= 1
            if dir < 0: dir = 3
            for j in range(min(ew, ew + dirs[dir][1]*int(i[1:])), max(ew, ew + dirs[dir][1]*int(i[1:]))+1):
                if(ns, j)not in vis:
                    vis.append((ns,j))
                else:
                    return str(abs(ns)+abs(j))
            ew += dirs[dir][1]*int(i[1:])

    
@staticmethod
def solve(input: str):
    start = time()
    input = input.split(", ")
    print(f"    1: {Part1(input).rjust(15, ' ')} / {Part2(input).ljust(15, ' ')}  {time()-start}")