#Declare a thre lab/practica10.R ly using cO).
v1=c(4,5,6,7)
v2=c(9,3,4,1)
v3=c(10,11,12,14)
#Make a data_frame of these vectors.
group=data.frame(cbind (v1, v2, v3))
#Make a boxplot for the same.
boxplot(group, varwidth = TRUE, main="Boxplot")
#Make a stacked bar for the dataframe.
barplot(as.matrix (group),col=rainbow(length (group)))
png(file="barchart_stacked.png")
dev.off()
#Apply anova test in the stacked bar.
stacked=stack (group)
result=aov(values~ind, data=stacked)
print(result)




#1.
v1<-c(1,2,3,4)
v2<-c(5,6,7,14)
v3<-c(12,11,30,17)

#2.
df1<-data.frame(cbind(v1,v2,v3))
df1

#3.
boxplot(df1,varwidth=TRUE,main="Boxplot")
barplot(as.matrix(df1),col=rainbow(length(df1)))
png(file="stacked.png")
dev.off()

ano<-stack(df1)
result<-aov(values~ind,data = ano)
print(result)