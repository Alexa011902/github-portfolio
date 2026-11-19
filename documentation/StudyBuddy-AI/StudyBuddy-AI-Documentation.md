# StudyBuddy AI — Project Documentation

## 1. Project Overview

StudyBuddy AI is an AI-powered study assistant created to help students understand topics, prepare study materials, and practice what they have learned. The application uses Google's Gemini AI model to generate student-friendly responses through an interactive application.

This project was developed as part of COSC 4272 Senior Seminar.

## 2. Project Purpose

The purpose of StudyBuddy AI is to demonstrate how Python and generative AI can be combined to create an application that supports learning. Instead of providing only one type of study support, the application offers explanations, study-guide creation, and quiz generation.

## 3. Technologies Used

- **Python:** The programming language used for the application.
- **Streamlit:** The framework used to build the interactive application.
- **Google Gemini API:** Connects the application to Google's Gemini AI model.
- **Google GenAI:** The Google AI library listed among the project's dependencies.
- **Python-dotenv:** Supports loading configuration values from an environment file during local development.

## 4. Main Features

### 4.1 Explain a Topic

This feature provides a simple explanation of a topic and uses examples to help students understand difficult concepts.

### 4.2 Create a Study Guide

This feature generates an organized study guide containing key concepts, definitions, and examples.

### 4.3 Generate a Quiz

This feature creates five practice questions with multiple-choice answers and an answer key. It gives students a way to practice and check their understanding.

## 5. How the Application Is Used

The project README identifies three study options: Explain a Topic, Create a Study Guide, and Generate a Quiz. A student selects the type of help they want and uses the application to request study material. Gemini AI is used to generate the response.

The README does not specify the full internal request-processing sequence or the exact prompts used by each feature; those details should be added only after checking the application source code and prompt log.

## 6. Installation and Configuration

1. Clone or download the project repository.
2. Open a terminal in the `StudyBuddy-AI` project folder.
3. Install the dependencies:

   ```bash
   pip install -r requirements.txt
   ```

4. Create a local `.env` file in the project folder.
5. Add a Gemini API key to the file using this format:

   ```text
   GEMINI_API_KEY=your_api_key_here
   ```

**Security note:** Keep the real API key private. Do not commit the `.env` file, paste the key into documentation, or publish it in screenshots. A user setting up the project must supply their own key.

## 7. Running the Application

From the project folder, run:

```bash
streamlit run app.py
```

The application opens in a web browser.

## 8. Testing and Verification

The project was run locally to verify that the application starts. The three listed study features are the main functions to check during testing:

- Submit a topic and verify that an explanation is generated.
- Request a study guide and verify that it includes key concepts, definitions, and examples.
- Generate a quiz and verify that it contains five multiple-choice questions and an answer key.

Record any additional test cases, observed results, or issues in the project prompt/development log. This document does not claim test results that are not recorded in the project README.

## 9. Limitations and Considerations

- The application depends on access to the Gemini API.
- A valid API key and correctly configured environment are required to use the AI features.
- AI-generated explanations and study materials should be reviewed by the student for accuracy and completeness.
- The project README does not list measured performance results or a complete set of known limitations.

## 10. Project Files

The project README identifies the following important setup and application files:

- `app.py` — application entry point used to launch the Streamlit app.
- `requirements.txt` — lists the Python packages needed by the project.
- `.env` — local configuration file for the Gemini API key; it must remain private.
- `.gitignore` — helps prevent selected local or sensitive files from being committed.

## 11. Summary

StudyBuddy AI demonstrates the use of Python, Streamlit, and Google's Gemini AI model in an interactive study-support application. Its three main features help students get explanations, create study guides, and generate practice quizzes.
