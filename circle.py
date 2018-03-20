import math
from pandas import *

"""
 Just a quick function to solve the problem of how to draw a circle with just the coordinates, to be used in future projects
"""

matrixSize = 30
sampleX = 15
sampleY = 15
sampleAngle = 30
sampleRadius = 10

someMatrix = [[ 0 for i in range(matrixSize) ] for j in range(matrixSize) ]

def circleStep(X,Y, alpha, r): #X and Y are the coordinates of the circle middle
  steps = int(math.floor(360/alpha))
  for i in range(steps):
    a = alpha * i
    y = 0.0
    h = r * math.sin(math.radians(a))
    if a % 180 != 90:
      if a == 180:
        y = r
      elif a % 360 == 0:
        y = -r
      else:
        y = -h / math.tan(math.radians(a))
    #print(" " + str(int(X+h)) + " " + str(int(Y+y)))
    someMatrix[int(X+h)][int(Y+y)] = 1
    
def main():
  circleStep(sampleX,sampleY,sampleAngle,sampleRadius)
  print DataFrame(someMatrix)

if __name__ == "__main__":
  main()
