require_relative 'Day1'
start = Time.now
printf("  Day:          Part 1 / Part 2           Runtime\n")
Day1.solve(File.read("1"))
printf("Total:                                    #{Time.now-start}")