a<-matrix(c(1:12),nrow=3,byrow=TRUE)
print(a)

#bycolumn
b<-matrix(c(1:12),nrow=3,byrow=FALSE)
print(b)

#default
b<-matrix(c(1:12),nrow=3)
print(b)


#giving names to matrix
rownames<-c("r1","r2","r3")
colnames<-c("c1","c2","c3","c4")

n<-matrix(c(1:12),nrow = 3,byrow=TRUE,dimnames=list(rownames,colnames))
print(n)

#getting r1 c2
print(n[1,2])

#2nd row
print(n[2,])


#add of two matrix

m1<-matrix(c(2,3,-4,5,6),nrow=2)
print(m1)

m2<-matrix(c(3,4,2,1,3,4),nrow=2)
print(m2)

#Add
sum<-m1+m2
cat("Sum is =","\n")
print(sum)

#sub
sub<-m1-m2
cat("Subtraction is =","\n")
print(sub)







