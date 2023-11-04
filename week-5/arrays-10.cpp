#include <stdio.h>

int main() 
{
    int i,j,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
	 {
        for (j = i + 1; j < n; j++) 
		{
      if (a[i] == a[j]) 
            printf("duplicate element:%d\n",a[i]);
        }
     }

    return 0;
}

