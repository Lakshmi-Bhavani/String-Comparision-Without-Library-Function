#include<stdio.h>
main()
{
	char s1[100];
	char s2[100];
	int i,j,flag=0;
	printf("Enter the string1");
	gets(s1);
	printf("Enter the string2");
	gets(s2);
	for(i=0,j=0;s1[i]!='\0'&&s2[i]!='\0';i++,j++)
	{
    if(s1[i]!=s2[j])
{
	  flag++;
    break;
//}
}}
if(flag==0)
{
	printf("Two strings are equal");
	
}
else
{
	printf(" Two strings are not equal");
}

    
}
