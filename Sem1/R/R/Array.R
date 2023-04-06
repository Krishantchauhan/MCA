#array

a1<-c(3,5,3)
a2<-c(10,11,18,13,19,15)
r<-array(c(a1,a2),dim<-c(3,3))
#r<-array(c(a1,a2),dim<-c(3,3,2))
#the above one will repeat the array
print(r)

rnames<-c("r1","r2","r3")
cnames<-c("c1","c2","c3")

a<-c("r1","r2","r3")
b<-c("c1","c2","c3")

n<-array(c(a1,a2),dim<-c(3,3),dimnames = list(rnames,cnames))
print(n)

#accessing element

print(r[2,,2])
print(r[2,3,1])
print(r[,,1])

#sum of row if c(1)=row
s<-apply(r, c(1), sum)
print(s)

#sum of col if c(2)=row
s<-apply(r, c(2), sum)
print(s)



