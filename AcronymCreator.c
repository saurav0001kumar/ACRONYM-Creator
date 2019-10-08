#include <stdio.h>
void main()
{
	int i ,j,len=0 ;
	char name[1000];
	char shortname[1000] ;
	printf("# This is a simple C program to convert the phrases/full forms/sentences into abbreviated form.\n\n\n-> Enter a phrase to be shortened : ");
	gets(name);
	for(i=0; name[i]!='\0'; i++)
	
	
	for(j=0; j<i; j++)
	{
		if(j==0)
		{
		shortname[0]=name[0] ;
		shortname[1]='.' ;
		len=2;
	    }
		
		if(name[j]==' ')
		{
		shortname[len]=name[j+1];
		shortname[++len]='.';
		len++;
	    }	
	
	}
	shortname[len]='\0';
	printf("\n-> The Acronym for your input is  %s",shortname);
	getchar();
}
