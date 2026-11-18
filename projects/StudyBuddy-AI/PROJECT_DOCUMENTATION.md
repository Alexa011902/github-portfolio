# StudyBuddy AI – Project Documentation

## 1. Project Overview

StudyBuddy AI is an interactive AI-powered study assistant developed for the COSC 4272 Senior Seminar project. Its purpose is to help students learn and review academic topics using artificial intelligence.

The application allows students to request explanations, create study guides, and generate practice quizzes.

## 2. Project Objectives

The main objectives of this project are:

- Develop a functional AI-powered application using Python.
- Connect the application to Google's Gemini AI model.
- Create a simple and user-friendly interface.
- Demonstrate how artificial intelligence can support student learning.

## 3. Technologies and Tools

The following technologies were used:

- **Python:** Main programming language.
- **Streamlit:** Used to build the interactive web application.
- **Google Gemini API:** Generates AI-powered responses.
- **Google GenAI:** Python library used to communicate with Gemini.
- **Python-dotenv:** Loads the API key from the environment file.
- **Visual Studio Code:** Development environment.

## 4. Application Features

### Explain a Topic
Students can enter a topic or question and receive a simple explanation with examples.

### Create a Study Guide
The application generates an organized study guide containing key concepts, definitions, and examples.

### Generate a Quiz
The application creates five multiple-choice practice questions and provides an answer key.

## 5. Application Structure

- `app.py` – Contains the main application code and AI functionality.
- `requirements.txt` – Lists the Python packages required to run the application.
- `.env` – Stores the private Gemini API key.
- `.gitignore` – Prevents private or unnecessary files from being uploaded to GitHub.
- `README.md` – Provides an overview and instructions for using the project.
- `PROJECT_DOCUMENTATION.md` – Describes the project, objectives, technologies, and features.

## 6. Development Process

The application was developed using Python and Streamlit. The Gemini API was integrated to generate responses based on student input.

The development process included:

1. Creating the project folder and Python environment.
2. Installing the required packages.
3. Configuring the Gemini API key using an environment file.
4. Developing the Streamlit interface.
5. Implementing the three study features.
6. Testing the application to confirm that each feature generated a response.

## 7. Testing and Results

The application was tested using all three available features:

- Explain a Topic – Successfully generated explanations.
- Create a Study Guide – Successfully generated organized study materials.
- Generate a Quiz – Successfully generated practice questions and an answer key.

All three features were successfully tested.

## 8. Security

The Gemini API key is stored in a private `.env` file rather than being written directly into the application code. The `.gitignore` file is used to help prevent the private key from being uploaded to GitHub.

## 9. Conclusion

StudyBuddy AI demonstrates how artificial intelligence can be integrated into a Python application to support education. The project provides students with an interactive tool for understanding topics, preparing study guides, and practicing through quizzes.