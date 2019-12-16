#include<stdio.h>

void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}


void heapify(int tree[],int n,int i)
{
	if(i>=n)
	{
		return;
	}
	int c1=2*i+1;
	int c2=2*i+2;
	int max=i;
	if(c1<n && tree[c1]>tree[max])
	{
		max=c1;
	}
	if(c2<n && tree[c2]>tree[max])
	{
		max=c2;
	}
	
	if(max!=i)
	{
		swap(tree,max,i);
		heapify(tree,n,max);
	}
}
void build_heap(int tree[],int n)
{
	int last_node=n-1;//最后一个节点
    int parent=(last_node-1)/2;
    int i;
	for(i=parent;i>=0;i--)
	{
	 heapify(tree,n,i);
	}
}

void heap_sort(int tree[],int n)//堆排序，最大值放最后一个，砍掉最后一位
{
	build_heap(tree,n);//建立堆
	int i;
	for(i=n-1;i>=0;i--)
	{
		swap(tree,i,0);//第一个与最后一个交换
		heapify(tree,i,0);//i代表当前堆的节点数
	}
}


int main(void)
{
	int tree[]={2,5,3,1,10,4};
	int n=6;
	//222build_heap(tree,n);
	//111,heapify(tree,n,0);
    heap_sort(tree,n);//333
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d \n",tree[i]);
	}
return 0;
}
