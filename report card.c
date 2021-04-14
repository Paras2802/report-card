#include<stdio.h>
int main()
{
	printf("For knowing the grade,pls enter marks:");
	int marks;
	scanf("%d", & marks);
	if (marks>=85 && marks<=100)
	{
		printf("Student got grade A");
	}
	else if (marks>=70 && marks<=84)
	{
		printf("Student got grade B");
	}
	else if (marks>=55 && marks<=69)
	{
		printf("Student got grade C");
	}
	else if (marks>=40 && marks<=54)
	{
		printf("Student got grade D");
	}
	else 
	{ 
	 printf("Student got grade F");
	 }
	 return 0;
	
	
	
}
