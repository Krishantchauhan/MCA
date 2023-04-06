#11 practical
#2
student=read.csv (file.choose () ,header=TRUE)
student
#3
cor.test(student$Marks, student$Age, method = "spearman")
#4 
library(corrplot) 
M=cor(mtcars)
corrplot (M,method='number')
#5
r=lm(student$Age-student$Weight)
summary(r)
