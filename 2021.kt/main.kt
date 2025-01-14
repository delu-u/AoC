package aoc

import kotlin.time.measureTime
import kotlin.io.*
import java.io.File
import aoc.day1

@kotlin.time.ExperimentalTime
fun main(){
    
    val exec = measureTime{
        println("  Day:          Part 1 / Part 2           Runtime")
        day1(File("1").readLines());
        print("Total:                                    ")
    }

    println(exec.inWholeMilliseconds)
    
}