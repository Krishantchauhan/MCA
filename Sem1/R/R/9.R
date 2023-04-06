dat1=read.csv(file.choose() , header = TRUE)
dat1
#Apply z test by formula not the command for weight.
zstat=(mean (dat1$Weight)-40)/(sd(dat1$Weight)/sqrt(nrow(dat1)))
zstat
pt(zstat, 10)
# Apply † Test for age of student.
test <- t.test (dat1$Age, dat1$Weight,
var.equal = TRUE, alternative = "greater")
test
