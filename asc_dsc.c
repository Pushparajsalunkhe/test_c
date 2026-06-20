#include<stdio.h>
#include<string.h>
void main()
{
	char var[]="welcome"; 
	char temp;
	int i,j;
	
	
	for (i=0;i<7;i++)
	{
	 	for (j=i+1;j<7;j++)
	 	{
	 		if(var[i]>var[j])
	 		{
	 			temp=var[i];
	 			var[i]=var[j];
	 			var[j]=temp;
			 }
		 }
	}
	
	printf("%s",var);
	
	for (i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(var[i]<var[j])
			{
				temp=var[i];
				var[i]=var[j];
				var[j]=temp;
			}
		}
	}
	
	printf("\n%s",var);
	
}
