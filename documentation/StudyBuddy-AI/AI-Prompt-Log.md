# StudyBuddy AI — AI Prompt Log

## Purpose

This log documents how AI assistance was used during the development of StudyBuddy AI for COSC 4272 Senior Seminar. It records the main development topics, the type of help requested, how the guidance was used, and the resulting progress.

**Important note about wording:** The entries below are concise summaries reconstructed from the available development conversation and project information. They are not presented as exact, word-for-word copies of every prompt. Add or replace entries with exact prompt text if an original prompt or chat transcript is available.

## Development Prompt Log

| Stage | Prompt / assistance summary | How the assistance was used | Result / progress |
|---|---|---|---|
| 1. Project setup | Asked for help setting up the StudyBuddy AI project and understanding which files were needed. | Used the guidance while organizing the project folder and preparing the Python application files. | Established the project structure and began working in `app.py`. |
| 2. Python environment and dependencies | Asked how to install and prepare the packages required by the application. | Used the terminal to install the dependencies listed in `requirements.txt`. | Prepared the local environment to run the application. |
| 3. Gemini API configuration | Asked for help connecting the application to Google's Gemini API and configuring the API key. | Added the key through local environment configuration and kept the secret out of the public repository. | Connected the application to the AI service. The actual API key is intentionally not included in this log. |
| 4. Explain a Topic feature | Asked for help implementing and checking the feature that explains a topic in student-friendly language. | Used the guidance while developing the feature in the Streamlit application. | Added the topic-explanation study option. |
| 5. Create a Study Guide feature | Asked for help creating a feature that generates an organized study guide. | Used the guidance to develop the study-guide option, which is intended to include key concepts, definitions, and examples. | Added the study-guide study option. |
| 6. Generate a Quiz feature | Asked for help creating a quiz-generation feature with multiple-choice questions and an answer key. | Used the guidance while developing the quiz option. | Added the quiz feature; the project README describes five questions and an answer key. |
| 7. Application troubleshooting | Asked for help when the application appeared to remain in a loading or “thinking” state without showing a response. | Followed troubleshooting guidance and checked the running application for errors and behavior. | Worked through the issue and continued testing the application. |
| 8. Running and testing the app | Asked how to launch the Streamlit application and how long to wait for a response. | Ran the application locally and tried its study features. | Tested the app locally and checked that it could produce responses. |
| 9. Project files and security | Asked which project files should be included and how to handle configuration files. | Prepared project files such as `app.py`, `requirements.txt`, `.gitignore`, and the README; kept private credentials out of the public repository. | Prepared the project for version control without intentionally publishing the API key. |
| 10. Deployment | Asked for help publishing the application using Streamlit Community Cloud and configuring its secret settings. | Followed the deployment steps and configured the Gemini key as a deployment secret rather than placing it in public source code. | Deployed the application and tested the live version. |
| 11. GitHub portfolio preparation | Asked for help organizing and uploading the StudyBuddy AI project files to the GitHub portfolio. | Used the guidance to review the project files and add the project to the portfolio website. | Added StudyBuddy AI to the GitHub portfolio. |

## AI Assistance and Developer Responsibility

AI assistance was used as a development aid for setup, implementation guidance, troubleshooting, testing, deployment, and project organization. The developer followed the instructions, worked with the project files and terminal, tested the application, and made decisions about the project.

AI-generated suggestions were not treated as a substitute for testing. The application was run and its features were tried during development.

## Project Features Documented

The StudyBuddy AI README identifies these three application features:

1. **Explain a Topic** — provides simple explanations and examples.
2. **Create a Study Guide** — generates key concepts, definitions, and examples.
3. **Generate a Quiz** — creates five multiple-choice practice questions with an answer key.

## Security Note

The Gemini API key is private configuration information. It must not be added to this prompt log, committed to GitHub, or shown in screenshots. Local development should use a private `.env` file, and deployment should use the platform's secret configuration.

## Final Note

This log summarizes the main AI-assisted stages of the StudyBuddy AI development process based on the available project and conversation information. If the course requires exact prompt transcripts, those should be added from the original chat history rather than reconstructed or invented.
