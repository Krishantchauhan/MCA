v <-  c(6,19,21,8,30,32,12,41,31,38,17,7,8,6,9)

# Create the histogram.
#hist(v, xlab = "marks",col = "green", border = "black")

hist(v,xlab = "Weight",col = "lightblue",border = "black",xlim = c(0,45), ylim = c(0,10) )
# Give the chart file a name.
png(file = "hist.png")
dev.off()


#pie chart

# Create data for the graph.
x <- c(41, 61, 20, 4,69)
labels <- c("German", "English", "French", "Spanish")
# Plot the chart.
pie(x,labels)
# Give the chart file a name.
png(file = "language.png")
dev.off()