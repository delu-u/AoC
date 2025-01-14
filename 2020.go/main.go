package main

import (
    "fmt" 
    "time"
    "os"
)

func main(){
    start := time.Now();
    fmt.Println("  Day:          Part 1 / Part 2           Runtime");
    Day1(os.Open("1"));
    fmt.Printf("Total:                                    %s\n", time.Since(start));
}