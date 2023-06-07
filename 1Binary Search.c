#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[50],N,i,key,d;
 printf("\n Enter the length of array = ");
 scanf("%d",&N);
 printf("\n Enter the sorted elements\n");
 for(i=0;i<N;i++)
  scanf("%d",&a[i]);
 printf("Enter the element u want to search- ");
 scanf("%d",&key);
 d=binary_search(a,0,N-1,key);//pass array,1st element,last element,key value
 if(d!=-1)
  printf("\n Element found at index %d",d+1);
 else
  printf("Element not found");
}
int binary_search(int a[],int low,int high,int key)
{
 int mid;
 if(low>high)
  return -1;
 mid=(low+high)/2;
 if(key==a[mid])
  return mid;
 else if(key<a[mid])
  binary_search(a,low,mid-1,key);
 else
  binary_search(a,mid+1,high,key);  
}

