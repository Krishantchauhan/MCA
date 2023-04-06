course<-c("mca","bca","btech","psy","law")
lang<-c("eng","hindi","sanskrit","russian","spanish")
job<-c("it","techer","doc","adv","nurse")

m1<-matrix(c(course,lang,job),nrow=5)
print(m1)

a<-c(6,4,9,2,6)
barplot(a,main="course",col="cyan",names.arg =course)
png(file="a.png")
dev.off()


a<-c(6,4,9,2,6)
#pie(a,course)
pie3D(a,labels=course,col=rainbow(length(p)),explode=0.1)
png(file="a.png")
dev.off()

b<-mode(a)
print(b)


n=10

sum=1
c<-for (i in 1:n) {
#  sum<-sum*i
  print(i)
  i=i+2
}
print(sum)



a<-function()
  f=5
  fact=1
  while(f>0){
    fact=fact*f
    f=f-1
  }
  print(fact)


x<-5
fact=1
for(i in 1:x)
  fact<-i*fact
print(paste("The factorial is",fact))
