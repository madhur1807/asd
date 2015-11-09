#include <stdio.h>
#include <conio.h>
void main()
{
  /* hghgfhghfh**/
  int c,i,j,first,temp,last,middle,n,search,a[100],ch;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    for (c = 0; c < n; c++)
    {
        printf("Enter number at %d position\n", c+1);
        scanf("%d",&a[c]);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<(n-1)-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array  ");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter value to find\n");
    scanf("%d",&search);
    first=0;
    last=n-1;
    while (first <= last)
    {
        middle=(first+last) /2;
        if (a[middle]<search)
        first = middle + 1;
        else if (search==a[middle])
        {
            printf("number found at location %d.\n", middle+1);
            break;
        }
        else
            last = middle - 1;
     }
     if (first>last)
        printf("Not found! %d is not present in the list.\n", search);
    getch();
}
