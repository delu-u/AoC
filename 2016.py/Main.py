import time, Day1

start = time.time()
print("  Day:          Part 1 / Part 2           Runtime")
Day1.solve(open("1").read())
print(f"Total:                                    {time.time()-start}")