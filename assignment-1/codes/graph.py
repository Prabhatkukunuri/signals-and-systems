# importing libraries
import numpy as nu
import matplotlib.pyplot as plo


x = nu.arange(0, 0.00000005, 0.000000000001)
y = nu.cos((2/nu.pi)*(10**9)*x)
plo.plot(x, y, color='green')
plo.show()


