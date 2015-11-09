#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
int z=0,p,l,i,j,k,h,ch,a[100],pos,pos1,num,l1,a2[100],a3[100];
char ch1;
printf("enter the length of array ");
scanf("%d",&l);
printf("enter the elements of array \n ");
for(i=0;i<l;i++)
{printf(" \n Enter the element at %d position ", i+1);
    scanf("%d",&a[i]);
}

do{
printf("----MENU----\n1.Insertion\n2.Deletion\n3.Traversal\n4.Merging\n5.Exit\nEnter your choice ");
scanf("%d",&ch);
switch(ch)
{case 1:
printf("enter the position ");
scanf("%d",&pos);
printf("enter the element ");
scanf("%d",&num);
if(pos<l)
{for(j=l-1;j>=(pos-1);j--)
{a[j+1]=a[j];
}
a[pos-1]=num;
l=l+1;    }
else
{exit(0);
}
for(k=0;k<l;k++)
{printf("%d\n",a[k]);
}
break;
case 2:
printf("enter the position ");
scanf("%d",&pos1);
if(pos1<l)
{for(k=(pos1-1);k<l;k++)
{a[k]=a[k+1];
}
l=l-1;}
else
{exit(0);
}
for(h=0;h<l;h++)
{printf("%d\n",a[h]);
}
break;
case 3:
for(p=0;p<l;p++)
{printf("%d\n",a[p]);
}
break;
case 4:
printf("Enter length of second array ");
scanf("%d",&l1);
printf("Enter elements ");
for(i=0;i<l1;i++)
{scanf("%d",&a2[i]);
}

for(i=0;i<(l+l1);i++)
    {a3[z]=a[l]+a[l1]
    z++;
    }
printf("Array after merging ");
for(i=0;i<z;i++)
{printf("%d",a3[i]);
}
break;
case 5:
exit(0);
default:
printf("wrong choice entered ");
}
printf("want to continue ?(Y/N) ");
scanf(" %c",&ch1);
}while(ch1=='y'||ch1=='Y');
getch();
}
