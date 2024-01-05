import numpy as np
import matplotlib.pyplot as plt

# Generate time values
t = np.linspace(0, 1e-6, 1000)  # Time values from 0 to 1e-6 seconds with 1000 points

# Calculate the corresponding y values
y = np.cos(2 * np.pi * 1e9 * t)

# Plot the graph
plt.plot(t, y)
plt.title('Graph of y = cos(2*pi*(10^9)*t)')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude of electromagnetic wave')
plt.grid(True)
plt.show()
