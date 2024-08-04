using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Net.Sockets;

namespace AoC;

class Day1{
    static Stopwatch time = new();
    public static void solve(string[] input){
        time.Start();
        Console.WriteLine($"    1: {Part1(input),15} / {Part2(input),-15}  {time.Elapsed}");
    }
    private static string Part1(string[] input){
        long sum = 0;
        foreach(string s in input){
            sum += long.Parse(s)/3-2;
        }
        return sum.ToString();
    }
    private static string Part2(string[] input){
        long sum = 0;
        long tsum;
        long t;
        foreach(string s in input){
            tsum = 0;
            t = long.Parse(s);
            while((t/3-2)>0){
                t = t/3-2;
                tsum += t;
            }
            sum += tsum;
        }
        return sum.ToString();
    }
}