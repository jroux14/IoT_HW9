#!/usr/bin/python

for x in range(20):
    if x%2 == 0:
        print(str(x) + " is even")
    else:
        result = x**3
        print(str(x) + "^3 = " + str(result))
else:
    print("Finished")
