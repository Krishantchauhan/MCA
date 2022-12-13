a<-"Krishant Chauhan"
print(a)
class(a)
b<-10
class(b)
print(8+9i)
print(8)

fruits <-c("mango","orange","apple")
print(fruits)

#sequence

num<-10:20
print(num)

#sequence diff.

two=seq(2,20,by=2)
print(two)

#diff
c<-4.8:9.2
print(c)

#c function 
d<-c('mango','s',10,"abc")
print(d)

#vector  
#indexing start from 1 ! from 0

t<-c("sun","mon","tue","web")
l<-t[c(3,4)]
print(l)

x<-t[c(-1,-2)]
print(x)

y<-t[c(1,1,3)]
print(y)

#operators

#add
v<-c(1,2,3)
f<-c(4,5,6)
print(v+f)

#power
v<-c(1,2,3)
f<-c(4,5,6)
print(v^f)

#quotient
v<-c(10,22,32)
f<-c(2,3,6)
print(v %/% f)

#quotient in decimal
v<-c(10,22,32)
f<-c(2,3,6)
print(v / f)

#relational operators
#it compare 2 vectors.

v<-c(10,22,32)
f<-c(2,30,6)
print(v>f)


#AND
v<-c(10,22,32)
f<-c(2,30,0)
print(v&f)

#OR
va<-c(1,0,1)
fg<-c(0,0,0)
print(va||fg)

#NOT
v<-c(0,22,32)
print(!v)

#sorting
#default ascending
v<-c(2,3,5,3,1,4,6,8,466,2,53)
s<-sort(v)
print(s)

#decreasing
v<-c(2,3,5,3,1,4,6,8,466,2,53)
s<-sort(v,decreasing=TRUE)
print(s)


#list
li=list("eyes","Hairs",2,3,4.7)
li



         

