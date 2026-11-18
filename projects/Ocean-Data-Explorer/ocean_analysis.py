import pandas as pd
import matplotlib.pyplot as plt

# Load the ocean dataset
data = pd.read_csv("data/ocean_data.csv")

# Display the dataset
print("\nOCEAN DATA EXPLORER")
print("-------------------")
print(data)

# Display basic information
print("\nDataset Information:")
print(data.info())

# Calculate average ocean temperature
average_temperature = data["Ocean_Temperature_C"].mean()

print("\nAverage Ocean Temperature:")
print(f"{average_temperature:.2f} °C")

# Calculate average sea level
average_sea_level = data["Sea_Level_mm"].mean()

print("\nAverage Sea Level:")
print(f"{average_sea_level:.2f} mm")

# Calculate total plastic waste recorded
total_plastic_waste = data["Plastic_Waste_Million_Tons"].sum()

print("\nTotal Plastic Waste Recorded:")
print(f"{total_plastic_waste:.2f} million tons")

# Create an ocean temperature chart
plt.figure(figsize=(10, 5))

plt.plot(
    data["Year"],
    data["Ocean_Temperature_C"],
    marker="o"
)

plt.title("Ocean Temperature Over Time")
plt.xlabel("Year")
plt.ylabel("Temperature (°C)")
plt.grid(True)

plt.savefig("images/ocean_temperature.png")
plt.show()

# Create a sea level chart
plt.figure(figsize=(10, 5))

plt.plot(
    data["Year"],
    data["Sea_Level_mm"],
    marker="o"
)

plt.title("Sea Level Changes Over Time")
plt.xlabel("Year")
plt.ylabel("Sea Level (mm)")
plt.grid(True)

plt.savefig("images/sea_level.png")
plt.show()

# Create a plastic waste chart
plt.figure(figsize=(10, 5))

plt.bar(
    data["Year"],
    data["Plastic_Waste_Million_Tons"]
)

plt.title("Plastic Waste Over Time")
plt.xlabel("Year")
plt.ylabel("Plastic Waste (Million Tons)")
plt.grid(axis="y")

plt.savefig("images/plastic_waste.png")
plt.show()