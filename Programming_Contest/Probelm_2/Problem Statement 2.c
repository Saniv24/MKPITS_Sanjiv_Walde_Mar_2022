#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
	int i, j;
	printf("Enter the size of array:");
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    printf("%s",str);
    int arr[n];
    for(i=0;i<n;++i)arr[i]=0; 
    int count=0;
    int m =0; 
    for(i=0;i<n;i++)
    {
        count=1;
        if(str[i]=='*')continue;
        for(j=i+1;j<n;j++)
        {
            if(str[j]==str[i])
            {
                count++;
                str[j]='*';
            }
        }
        arr[m]=count;
        m++;        
    }
    
     for(i=0;i<n;i++)
    {
        if(arr[i])
		printf(" %d",arr[i]);
    }
      
    return 0;
}
