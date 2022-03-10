#include<stdio.h>            // 0 1 2 3 4 5
#include<stdlib.h>          //  0 1 2 4 5
int missnum(int* arr, int sz)
{
	int num = 0;
	for (int i = 0; i <=sz - 1; i++)
	{
		num = arr[i] ^ i ^ num;
	}
	return num^sz;
}
int main()
{
	int n = 5;
	int arr[] = { 0,1,2,4,5,3,6,8,9};
	int ret=missnum(arr, 9);
	printf("%d", ret);
	return 0;
}
