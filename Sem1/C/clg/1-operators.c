#include <stdio.h>
 void main()
 {
  int a, b ,bit=0;
  printf("Enter a number \n ");
  scanf("%d",&a);
  printf("Enter a number \n ");
  scanf("%d",&b);

  bit=a&b;
  printf("And %d \n",bit);
  printf("OR %d \n",a|b);
  printf("NOT %d \n",!a);



}
