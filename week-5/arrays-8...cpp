#include <stdio.h>

int main() 
{
    int i,j,n,x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++)
	{
        scanf("%d", &a[i]);
    }
    
    printf("array after deleting deplicate elements :\n");
    
    for (i=0;i<n;i++)
	 {
         x=1;
        
        for(j=0;j<i;j++)
		 {
            if (a[i] == a[j]) 
			{
                x=0;
                break;
            }
        }
        
        if (x==1)
		{
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}

