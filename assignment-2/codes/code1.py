import matplotlib.pyplot as plt

# Read data from the file
with open("arithmetic_progression_data.txt", "r") as file:
    lines = file.readlines()

# Extract term values from the file
term_values = [int(line.split()[1]) for line in lines]

# Calculate the sum of n terms
sum_terms = [sum(term_values[:i+1]) for i in range(len(term_values))]

# Plot the graph
plt.plot(range(len(term_values)), sum_terms, marker='o', linestyle='-', color='b')
plt.title('Sum of Arithmetic Progression Terms vs n')
plt.xlabel('n')
plt.ylabel('Sum of n Terms')
plt.grid(True)
plt.show()
