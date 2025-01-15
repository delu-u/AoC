import time, Day1, Day2

start = time.time()
print("  Day:          Part 1 / Part 2           Runtime")
Day1.solve(open("2016.py\\1").read())
Day2.solve(open("2016.py\\2").readlines())
print(f"Total:                                    {time.time()-start}")