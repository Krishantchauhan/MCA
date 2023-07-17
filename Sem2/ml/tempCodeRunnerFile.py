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