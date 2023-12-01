#include<stdio.h>
#include<string.h>
main()
{
	int i,j=0,len;
	char str[20];
	char str1[20];
	printf("\n\n Enter the string :");
	gets(str);
	 printf("\n %s",str);
	 	
	len=strlen(str);
	printf("\n\n %d \n\n",len);
	i=len-1;
	reverse:
	{
		str1[j]=str[i];
		printf("%c",str1[j]);
		j++;
		i--;
	}
	if(i<len && i>=0)
	{
		goto reverse;
	}
}
