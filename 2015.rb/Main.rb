require_relative 'Day1'
require_relative 'Day2'

start = Time.now
printf("  Day:          Part 1 / Part 2           Runtime\n")
Day1.solve(File.read("2015.rb\\1"))
Day2.solve(File.read("2015.rb\\2"))
printf("Total:                                    #{Time.now-start}")