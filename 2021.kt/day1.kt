package aoc

import kotlin.time.measureTime
import kotlin.collections.*

@kotlin.time.ExperimentalTime
fun day1(input: List<String>){
    val exec = measureTime { 
        val nums: List<Int> = input.map{it.toInt()}.toList();
        print("    1: ${part1(nums).toString().padStart(15)} / ${part2(nums).toString().padEnd(15)}  ")
    }
    println(exec.inWholeMilliseconds);
}

private fun part1(input: List<Int>): Int{
    var sum = 0;
    for(i in 1..input.size-1){
        if(input[i]>input[i-1])
            sum++
    }
    return sum;
}

private fun part2(input: List<Int>): Int{
    var sum = 0;
    for(i in 3..input.size-1){
        if((input[i]+input[i-1]+input[i-2])>(input[i-1]+input[i-2]+input[i-3]))
            sum++
    }
    return sum;
}