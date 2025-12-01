import math
a=float(input());b=float(input());c=float(input());s=(a+b+c)/2;area=math.sqrt(s*(s-a)*(s-b)*(s-c));print(area)
# This program calculates the area of a triangle using Heron's formula and prints the result