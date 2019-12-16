//选择排序，第一趟将第一个元素和后面的元素逐个进行比，有更大的则与第一个交换，然后继续和和后面的比较...... 
//最后必定从若干个数字中找到最大的放在第一个元素的位置
#include<stdio.h>
#define N 5
int main(void)
{
	int a[5];
	int i,j,t;
	printf("input %d numbers:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<N-1;i++)//控制趟数，N个数，N-1趟
	{
		for(j=i+1;j<N;j++)
		{
			if(a[j]>a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("sorted dates is:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

