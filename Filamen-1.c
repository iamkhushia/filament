#include<stdio.h>
main()
{
	//Write a Program to check whether a string is a palindrome or not without using string function
	
	char name[100],temp[100];
	
	printf("Enter String = ");
	scanf("%s",name);
	
	strcpy(temp,name);
	
	printf("Reverse string = %s\n",strrev(temp));
	
	if(strcmp(name,temp)==0)
	{
		printf("string is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}
}