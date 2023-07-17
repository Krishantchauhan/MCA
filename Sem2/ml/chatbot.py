
# Import the required libraries
import random

# Define a list of greetings and responses
greetings = ["hello", "hi", "hey", "greetings", "howdy", "kase ho"]
responses = ["Hello!", "Hi there!", "Hey!", "Greetings!", "Howdy!", "mast"]

# Define a function to generate a random response
def get_response(user_input):
    # Convert user input to lowercase
    user_input = user_input.lower()

    # Check if user input is a greeting
    if user_input in greetings:
        return random.choice(responses)
    else:
        return "I'm sorry, I didn't understand that."

# Main program loop
while True:
    # Get user input
    user_input = input("User: ")

    # Check for exit command
    if user_input.lower() == "exit":
        break

    # Get bot response
    bot_response = get_response(user_input)
    print("ChatBot:", bot_response)









#KMeans

import numpy as np
from sklearn.cluster import KMeans

# Generate some sample data
X = np.array([[1, 2], [1, 4], [1, 0], [4, 2], [4, 4], [4, 0]])

# Create a KMeans object and specify the number of clusters
kmeans = KMeans(n_clusters=2)

# Fit the data to the K-means model
kmeans.fit(X)

# Get the cluster labels assigned to each data point
labels = kmeans.labels_

# Get the coordinates of the cluster centers
centers = kmeans.cluster_centers_

# Print the cluster labels and centers
print("Cluster Labels:", labels)
print("Cluster Centers:", centers)