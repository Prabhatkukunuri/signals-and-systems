import numpy as np
import matplotlib.pyplot as plt

def x_p(n):
    period = 5
    return [0.5, 1, 0.5, 0, 0][n % period]

# Define the range of n values
n_values = np.arange(0, 20)  # Choose a range for n to cover multiple periods

# Calculate corresponding x values
x_values = [x_p(n) for n in n_values]

# Plot the graph
plt.stem(n_values, x_values)
plt.xlabel('n')
plt.ylabel('x_p(n)')
plt.title('Graph of x_p(n)')
plt.grid(True)
plt.show()
