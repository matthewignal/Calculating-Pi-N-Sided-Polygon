# Final pt. 1

Calculates pi by determining the ratio of the perimeter of a regular n-sided polygon to its diameter.

In floating point arithmetic, catastrophic precision loss occurs when two large nearly equal numbers are subtracted
from one another. In our derived equation to approximate pi, the 1 - sqrt[1 - sin^2(asubn)] terms are nearly identical, causing the relative error to  greatly increase compared to the absolute error. We must then rewrite the term as sin^2(asubn)/(1 + sqrt[1 - sin^2(asubn)] which avoids the subtraction that causes the catastrophic precision loss.

Calculatesf the perimeter of a regular
n-sided polygon inscribed in a circle of radius r
