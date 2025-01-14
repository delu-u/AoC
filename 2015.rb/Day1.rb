class Day1
  def self.solve(input)
    start = Time.now
    printf("    1: %15s / %-15s  #{Time.now-start}\n", Part1(input), Part2(input))
  end
  def self.Part1(input)
    return input.count("(")-input.count(")")
  end
  def self.Part2(input)
    sum = 0
    for i in 0..input.length do
      if input[i] == "("
        sum += 1
      else
        sum -= 1
      end

      if sum==-1 
        return i+1
      end
    end
  end
end