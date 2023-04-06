df <- read.csv(file.choose(), header = TRUE)
data <- df
#print(data)
stu_name<-data$name
stu_age<- data$age
stu_marks <-data$marks
mean(stu_marks)
median(stu_marks)
Zstat =((mean(data$marks))-70)/(sd(data$marks)/sqrt(nrow(data)))
Zstat
pt(Zstat,19)