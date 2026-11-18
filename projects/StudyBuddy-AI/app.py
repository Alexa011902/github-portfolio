import streamlit as st
from google import genai
from dotenv import load_dotenv
import os

# Load private API key
load_dotenv()

API_KEY = os.getenv("GEMINI_API_KEY")

if not API_KEY:
    try:
        API_KEY = st.secrets["GEMINI_API_KEY"]
    except Exception:
        API_KEY = None

# Set up Gemini
client = genai.Client(api_key=API_KEY) if API_KEY else None

# Page settings
st.set_page_config(
    page_title="StudyBuddy AI",
    page_icon="📚",
    layout="centered"
)

# Main heading
st.title("📚 StudyBuddy AI")
st.write("Your personal AI study assistant!")

# Choose a study feature
feature = st.selectbox(
    "What would you like to do?",
    ["Explain a Topic", "Create a Study Guide", "Generate a Quiz"]
)

# Student input
topic = st.text_area(
    "What would you like help with?",
    placeholder="Enter a topic or question here..."
)

# Generate response
if st.button("Get Started"):
    if not topic.strip():
        st.warning("Please enter a topic or question.")

    elif not client:
        st.error("API key not found. Please check your .env file.")

    else:
        if feature == "Explain a Topic":
            prompt = (
                f"Explain {topic} in simple, student-friendly language. "
                "Use examples to help the student understand."
            )

        elif feature == "Create a Study Guide":
            prompt = (
                f"Create an organized study guide about {topic}. "
                "Include key concepts, definitions, and examples."
            )

        else:
            prompt = (
                f"Create 5 practice quiz questions about {topic}. "
                "Include multiple-choice answers and an answer key "
                "at the end."
            )

        try:
            with st.spinner("StudyBuddy is thinking..."):
                response = client.models.generate_content(
                    model="gemini-3.5-flash-lite",
                    contents=prompt
                )

            st.subheader("Your StudyBuddy Response")
            st.markdown(response.text)

        except Exception as error:
            st.error(f"Something went wrong: {error}")
