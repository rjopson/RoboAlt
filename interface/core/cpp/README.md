# Example
+ main file is essentially a script which builds all the necessary parts, puts them in a configuration and runs a simulation

# Data structure
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
  + ...
  + Part1
  + Part2
  + Part3
+ rocket2
  + ...
  
# Requirements
+ Create/delete all entities above. Take input user data like length, diameter etc. Eventually exposed to user through tree widget.
+ Run simulations. This mostly involves for loops through list of parts to calculate drag contribution, weight, etc. This is all set up now as virtual functions on the Part class. 
