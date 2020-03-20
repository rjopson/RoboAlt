# Data structure:

+ rocket1
  + Configuration1
    + Stage1
      + Instance1 (pointer to part1)
      + instance2 (pointer to part2)
      + Instance3 (pointer to part3)
    + Simulation1
    + Simulation2
  + Configuration2
    + Stage1 (not same object as above)
      + Instance1 (pointer to part1) (not same object as above)
      + Instance2 (pointer to part2) (not same object as above)      
    ...
  + Part1
  + Part2
  + Part3
  
