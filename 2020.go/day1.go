package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"time"
)

func Day1(input *os.File, _ error) {
	start := time.Now()
	defer input.Close()

	scanner := bufio.NewScanner(input);

	lines := []int{};
	for scanner.Scan(){
		num, _ := strconv.Atoi(scanner.Text())
		lines = append(lines, num)
	}

	fmt.Printf("    1: %15d / %-15d  %s\n", part1(lines), part2(lines), time.Since(start));
}

func part1(input []int) (int){
	for i := 0; i < len(input); i++{
		for j :=0; j < len(input); j++{
			if input[i] + input[j] == 2020{
				return input[i]*input[j];
			}
		}
	}
	return 0;
}

func part2(input []int) (int){
	for i := 0; i < len(input); i++{
		for j :=0; j < len(input); j++{
			for k := 0; k < len(input); k++{
				if input[i] + input[j] + input[k] == 2020{
					return input[i]*input[j]*input[k];
				}
			}
			
		}
	}
	return 0;
}
