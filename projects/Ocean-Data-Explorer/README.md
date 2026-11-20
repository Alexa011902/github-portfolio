# Ocean Data Explorer

## Project Overview

Ocean Data Explorer is a Python project that analyzes ocean-related data and creates visual charts to help display trends over time.

The project uses Python, Pandas, and Matplotlib to read a simulated ocean dataset, calculate basic statistics, and visualize ocean temperature, sea level, and plastic waste.

## Features

- Reads ocean data from a CSV file.
- Displays the dataset and its basic information.
- Calculates the average ocean temperature.
- Calculates the average sea level.
- Calculates the total recorded plastic waste.
- Generates three charts to visualize the data:
  - Ocean temperature over time.
  - Sea level changes over time.
  - Plastic waste over time.

## Technologies Used

- Python
- Pandas
- Matplotlib
- CSV

## Project Structure

```text
Ocean-Data-Explorer/
├── data/
│   └── ocean_data.csv
├── images/
│   ├── ocean_temperature.png
│   ├── sea_level.png
│   └── plastic_waste.png
├── ocean_analysis.py
├── requirements.txt
└── README.md
```

## How to Run the Project

1. Clone or download the project repository.
2. Open a terminal in the Ocean-Data-Explorer project folder.
3. Create and activate a virtual environment (optional but recommended):

   ```bash
   python3 -m venv .venv
   source .venv/bin/activate
   ```

4. Install the required libraries:

   ```bash
   pip install -r requirements.txt
   ```

5. Run the Python program:

   ```bash
   python ocean_analysis.py
   ```

The program reads the dataset from the `data` folder, displays basic statistics, and generates
