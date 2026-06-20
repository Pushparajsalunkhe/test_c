 #include<stdio.h>
  int main()
  {
  	int num[5]={10,20,30,40,50};
  	
  	int i,j;
  	
  	for (i=0;i<5;i++)
  	{
  		if(i%2==0)
  		{   
  		    num[i]=num[i]+num[j];
  		    
  		    printf("%d ",num[i]);
  			
		  }
		else
  		  {   
  		    num[i]=num[i]+num[i];
  			printf("%d ",num[i]);
		  }

    }
    
    
    
}
