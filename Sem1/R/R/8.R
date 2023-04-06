datal= read.csv(file.choose () , header = TRUE)
datal
barplot(datal$Marks,main="Student",names.arg
         =datal$Rollno, xlab= "Roll No", ylab = "Marks",
         col=rainbow(length (datal$ Rollno)))
png(file="barchant.png")
dev.off()