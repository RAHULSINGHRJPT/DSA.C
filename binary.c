#include<stdio.h>
#include<stdlib.h>
int binary(int arr[],int x,int low,int high)
	{
		if(high>=low)
		{
			int mid=(high+low)/2;
		
		if(arr[mid]==x)
		{
			return mid;
		}
		if(arr[mid]>x)
		{
			return binary(arr,x,low,mid-1);
		}
		if(arr[mid]<x)
		{
			return binary(arr,x,mid+1,high);
		}
		else
		return -1;
		}
	}
	int main(void)
	{
		int arr[]={3,4,5,6,7,8,9};
		int n=sizeof(arr)/sizeof(arr[0]);
		int x=4;
		int result = binary(arr,x,0,n-1);
		if(result==-1)
		{
			printf("not found\n");
			}
			else
			{
			printf("element to be found is at index= %d",result);
			}
			
		}