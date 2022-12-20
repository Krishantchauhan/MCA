#include <stdio.h>
int main() {
  printf("Krishant Chauhan MCA A 29\n");
    char str[100];
    printf("Enter the String: ");
    scanf("%s", &str);
    int i=0,freq[26]={0};
    while(str[i]!='\0')
    {
    		freq[str[i] - 'a']++;

		i++;
	}
	for(int j=0;j<26;j++)
	{
		if(freq[j]!=0)
		printf("Frequency of %c - %d\n",j+'a',freq[j]);
	}
    return 0;
}
