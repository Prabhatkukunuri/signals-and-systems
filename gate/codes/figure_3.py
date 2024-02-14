import matplotlib.pyplot as plt

# Read data from file
data = []
with open('data3.txt', 'r') as file:
    for line in file:
        k, value = map(float, line.split())
        data.append((k, value))

# Separate k and a_k values
k_values = [entry[0] for entry in data]
a_k_values = [entry[1] for entry in data]

# Plot the graph
plt.plot(k_values, a_k_values, marker='o', linestyle='-')
plt.xlabel('k')
plt.ylabel('a_k')
plt.title('Plot of a_k values')

# Highlight point corresponding to a_3
a_3_index = 3
plt.plot(a_3_index, a_k_values[a_3_index], marker='o', markersize=8, color='red')

plt.grid(True)
plt.show()
