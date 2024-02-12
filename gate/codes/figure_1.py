import numpy as np
import matplotlib.pyplot as plt

def x(n):
    if n in [-1, 3]:  # excluding -1 and 3 from the domain where x(n) = 0
        return 0
    elif n == 0 or n == 2:
        return 1/2
    elif n == 1:
        return 1

# Define the range of n values
n_values = np.arange(-1, 4)

# Calculate corresponding x values
x_values = [x(n) for n in n_values]

# Plot the graph
plt.stem(n_values, x_values)
plt.xlabel('n')
plt.ylabel('x(n)')
plt.title('Graph of x(n)')
plt.grid(True)
plt.show()
