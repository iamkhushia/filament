#include<stdio.h>
#include<string.h>
main()
{
	// Write a Program to count the frequency of each character in a given string.
	
    char s[100];
	int i,j,k,count=0,n;
	
	printf("enter any string =");
	gets(s);
	
	for(j=0;s[j]!=NULL;j++)
	{
		printf("%c",s[j]);
	}
	n=j;
	
	printf("frequncy conut charater in string = \n");
	
	for(i=0;i<n;i++)
	{
		count=1;
		if(s[i]!=NULL)
		{
			for(j=i+1;j<n;j++)
			{
				if(s[i]==s[j])
				{
					count++;
					s[j]='\0';
				}
			}
			printf("'%c' = %d\n",s[i],count);
		}
	}
}