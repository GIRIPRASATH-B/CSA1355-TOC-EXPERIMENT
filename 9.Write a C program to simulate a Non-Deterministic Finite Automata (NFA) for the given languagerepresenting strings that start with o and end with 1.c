#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,n;
	
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	if (str[0]=='0'&&str[n-1]=='1')
	    printf("VALID STRING");
	else
	    printf("NOT A VALIUD STRING");
	    
	    
	
}