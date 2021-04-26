/*Sorting*/
#include<stdio.h>
#include<stdlib.h>
void insertion(int a[], int n)
{
int i,j,temp;
for(i=1;i<n;i++)
 {
 temp=a[i];
 j=i-1;
 while((temp<a[j])&&(j>=0))
{
 a[j+1]=a[j];
 j=j-1;
 }
 	a[j+1]=temp;
 }
}
void display(int a[],int n)
{
int i;
printf("\n\t\t\tSorted List\n");
for(i=0;i<n;++i)
printf("\t%d",a[i]);
}
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}


void selection(int *a,int l)
{
int index,i,j;
for(i=0;i<l;i++)
{
        index=i;
        for(j=i;j<l;j++)
        {
            if((a[j]<a[index]))
                index=j;
        }
        swap(&a[i],&a[index]);
    	}       
}


void bubble(int *array,int length)
{
int i,j;
for(i=0;i<length;i++)
{
for(j=0;j<i;j++)
{
if(array[i]>array[j])
{
int temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
}

void main()
{
int a[100],n,i,ch;
printf("\nEnter The Number Of Elements\t: ");
scanf("%d",&n);
printf("\nEnter Elements\n");
for(i=0;i< n;++i)
scanf("%d",&a[i]);
while(1)
{
printf("\n1.Insertion sort\n2.Selection sort\n3.Bubble sort\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("<-----Insertion SORT----->\n");
insertion(a,n);
display(a,n);
break;
case 2:
printf("<-----Selection SORT----->\n");
selection(a,n);
display(a,n);
break;
case 3:
bubble(a,n);
printf("<-----Bubble SORT----->\n");
printf("\n\t\t\tSorted List\n");
for (i=n-1;i>=0;i--)
printf("\t%d",a[i]);
break;
case 4:
exit(0);
default:
printf("Enter A Valid Choice!");
}
}
}
