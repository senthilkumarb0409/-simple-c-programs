
// REVERSE A STRING-PREDEFINED FUNCTION
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],Revstr[100];
	int i,j,len;
	printf("\n  Enter the  string to be reversed:");
	gets(str);
	j=0;
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		Revstr[j++]=str[i];
	}
	Revstr[i]='\0';
	printf("\n String after reversing= %s",Revstr);
	getch();
}
