class Day2
  def self.solve(input)
    start = Time.now
    printf("    2: %15s / %-15s  #{Time.now-start}\n", Part1(input.split), Part2(input.split))
  end
  def self.Part1(input)
    sum = 0
    for i in 0..input.length-1 do
      nums = input[i].split('x', -1).map(&:to_i);
      sides = [nums[0]*nums[1],nums[0]*nums[2],nums[1]*nums[2]]
      sum += 2*sides.sum+sides.min
    end
    return sum
  end
  def self.Part2(input)
    sum = 0
    for i in 0..input.length-1 do
      nums = input[i].split('x', -1).map(&:to_i);
      sum += nums.inject(:*) + 2*nums.min(2).sum
    end
    return sum
  end
end
