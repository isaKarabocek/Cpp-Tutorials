# Cpp-Tutorials
Example application in Cpp Language

##    Bisection Method Procedure:
  
          The input for the method is a continuous function f,
          an interval [a, b], and the function values f(a) and f(b).
          The function values are of opposite sign (there is at least
          one zero crossing within the interval).
 ######   Each iteration performs these steps:

1. Calculate the midpoint c = (a + b)/2

2. Calculate the function value at the midpoint, function(c).

3. If convergence is satisfactory (that is, a – c is sufficiently small, or f(c) is sufficiently small), return c and stop iterating.

4. Examine the sign of f(c) and replace either (a, f(a)) or (b, f(b)) with (c, f(c)) so that there is a zero crossing within the new interval.

***Reference:*** https://www.thecrazyprogrammer.com/2017/04/bisection-method.html
