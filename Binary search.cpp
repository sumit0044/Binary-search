#include<stdio.h>
#include<stdlib.h>

void binary_search(int*,int);

int main()
{
	int a[20],i,n,x;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	printf("Enter the elements in ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	binary_search(a,n);
}

void binary_search(int a[],int n)
{
	int min=0,mid,max=n-1,f=0,item,p=0;
	printf("Enter the element to search:");
	scanf("%d",&item);
	while(max>=min)
	{
		mid=(max+min)/2;
		if(a[mid]==item)
		{
			f=1;p=mid; break;
		}
		else if(a[mid]<item)
		{
			min=mid+1;
		}
		else
		{
			max=mid-1;
		}
	}
	if(f==1)
	{
		printf("%d Element found: Position = %d",item,mid+1);
	}
	else
	printf("Element not found:");
}
