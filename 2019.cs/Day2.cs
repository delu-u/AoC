using System.Diagnostics;

namespace AoC;

class Day2{
    static readonly Stopwatch time = new();
    public static void Solve(string input){
        time.Start();
        Console.WriteLine($"    1: {Part1(input),15} / {Part2(input),-15}  {time.Elapsed}");
    }
    private static int Part1(string input){
        int[] nums = [.. input.Split(',').Select(x => int.Parse(x))];
        int i = 0;
        nums[1] = 12;
        nums[2] = 2;
        while(nums[i]!=99){
            switch(nums[i]){
                case 1:
                    nums[nums[i+3]] = nums[nums[i+1]]+nums[nums[i+2]];
                    i += 4;
                    break;
                case 2:
                    nums[nums[i+3]] = nums[nums[i+1]]*nums[nums[i+2]];
                    i += 4;
                    break;   
            }
        }
        return nums[0];
    }
    private static int Part2(string input){
        //takes forever too lazy to think more
        // int[] nums = [.. input.Split(',').Select(x => int.Parse(x))];
        // int i = 0, noun = 0, verb = 0;
        
        // while(nums[0]!=19690720){
        //     while(nums[i]!=99){
        //         switch(nums[i]){
        //             case 1:
        //                 nums[nums[i+3]] = nums[nums[i+1]]+nums[nums[i+2]];
        //                 i += 4;
        //                 break;
        //             case 2:
        //                 nums[nums[i+3]] = nums[nums[i+1]]*nums[nums[i+2]];
        //                 i += 4;
        //                 break;   
        //         }
        //     }
        //     verb++;
        //     if(verb==100){
        //         verb = 0;
        //         noun++;
        //     }
        // }
        
        // return 100*noun+verb;
        return 0;
    }
}