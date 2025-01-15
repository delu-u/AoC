using System.Diagnostics;

namespace AoC;

class AoC{
    static Stopwatch time = new();
    public static void Main(string[] args){
        time.Start();
        Console.WriteLine("  Day:          Part 1 / Part 2           Runtime");
        // Day1.solve(File.ReadAllLines(@"1"));
        Day2.Solve(File.ReadAllLines(@"C:\Users\durkac\Desktop\AoC\2019.cs\2")[0]);
        Console.WriteLine($"Total:                                    {time.Elapsed}");

    }
}
