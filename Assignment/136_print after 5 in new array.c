#include<stdio.h>
int main()
{
    int a[20], b[20], i,j;
    
    printf("Enter values : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("New Array is : \n");
    for (i=0;i<5;i++)
    {
       if(a[i]==5)
    	{
    	    for(j=i+1;j<5;j++)
    	    {
    	        printf("%d \n",a[j]);
    	    }
    	    break;
    	}
    }
}
