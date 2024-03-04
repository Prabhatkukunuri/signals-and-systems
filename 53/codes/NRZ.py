import matplotlib.pyplot as plt

def nrz(signal):
    """
    Function to plot a Non-Return-to-Zero (NRZ) plot.
    
    Args:
    - signal: List of 1s and 0s representing the signal.
    """
    time = range(len(signal))
    adjusted_signal = [2 if bit == 1 else -2 for bit in signal]  # Adjust signal to be between -2 and 2
    plt.step(time, adjusted_signal)
    plt.ylim([-2.5, 2.5])  # Set y-axis limits to -2.5 and 2.5 for padding
    plt.xlabel('Time')
    plt.ylabel('Signal')
    plt.title('Non-Return-to-Zero (NRZ) Plot')
    plt.grid(True)
    plt.show()

# Example usage:
signal = [0, 1, 0, 1, 1, 0, 0, 1]
nrz(signal)
