# Ocean Data Explorer — Project Documentation

## 1. Project Overview

Ocean Data Explorer is a Python project that reads ocean-related data from a CSV file, calculates basic statistics, and creates charts to display trends over time. The project focuses on three measures: ocean temperature, sea level, and plastic waste.

## 2. Project Purpose

The purpose of the project is to demonstrate basic data analysis and visualization using Python. It takes data stored in a CSV file, uses a data-analysis library to work with the information, calculates summary values, and produces charts that make the selected measures easier to view.

## 3. Technologies Used

- **Python:** Programming language used for the analysis.
- **Pandas:** Used to read and work with tabular data.
- **Matplotlib:** Used to generate charts.
- **CSV:** File format used to store the dataset.

## 4. Main Features

The project README identifies these features:

- Reads ocean data from a CSV file.
- Displays the dataset and its basic information.
- Calculates the average ocean temperature.
- Calculates the average sea level.
- Calculates the total recorded plastic waste.
- Generates three charts to visualize the data.

## 5. Data and Measures

The input dataset is stored in `ocean_data.csv`. The analysis focuses on:

1. Ocean temperature.
2. Sea level.
3. Plastic waste.

**Dataset note:** The project uses simulated sample data rather than verified scientific measurements. The charts and calculated values should therefore be understood as demonstrations of data analysis, not as authoritative measurements of real-world ocean conditions.

## 6. Generated Visualizations

The project generates three charts:

- `ocean_temperature.png` — visualization of ocean temperature data.
- `sea_level.png` — visualization of sea-level data.
- `plastic_waste.png` — visualization of plastic-waste data.

The charts provide a visual way to inspect the data being analyzed.

## 7. Project Structure

The project repository contains the following files:

```text
Ocean-Data-Explorer/
├── ocean_data.csv
├── ocean_analysis.py
├── requirements.txt
├── README.md
├── ocean_temperature.png
├── sea_level.png
└── plastic_waste.png
```

The CSV file contains the input dataset, the Python script performs the analysis, and the three PNG files contain the generated visualizations.

## 8. Installation and Setup

1. Clone or download the project.
2. Open a terminal in the `Ocean-Data-Explorer` project folder.
3. (Recommended) Create and activate a virtual environment:

   ```bash
   python3 -m venv .venv
   source .venv/bin/activate
   ```

4. Install the required libraries:

   ```bash
   pip install -r requirements.txt
   ```

## 9. Running the Project

Run the analysis script from the project folder:

```bash
python3 ocean_analysis.py
```

The script reads the CSV data, displays information and summary calculations, and generates the three visualizations.

## 10. Testing and Verification

The project was run locally after its Python environment and dependencies were set up. The main checks for this project are:

- Confirm that the CSV dataset can be read.
- Confirm that the dataset and its basic information are displayed.
- Confirm that the average temperature, average sea level, and total recorded plastic waste are calculated.
- Confirm that all three chart image files are generated.

## 11. Project Files

- `ocean_analysis.py` — Python script that performs the analysis.
- `ocean_data.csv` — input dataset.
- `requirements.txt` — required Python packages.
- `README.md` — project overview and usage instructions.
- `ocean_temperature.png` — generated ocean temperature chart.
- `sea_level.png` — generated sea-level chart.
- `plastic_waste.png` — generated plastic-waste chart.

## 12. Limitations and Considerations

- The dataset contains simulated sample data, so it should not be used as a source of real ocean measurements.
- The project analyzes the columns and records available in its CSV dataset.
- The charts reflect the supplied sample data; they do not independently validate the accuracy of the underlying data.

## 13. Summary

Ocean Data Explorer demonstrates a basic data-analysis workflow using Python, Pandas, and Matplotlib. It reads a CSV dataset, calculates summary statistics for three ocean-related measures, and generates three charts to visualize the data.
