//ѡ�����򣬵�һ�˽���һ��Ԫ�غͺ����Ԫ��������бȣ��и���������һ��������Ȼ������ͺͺ���ıȽ�...... 
//���ض������ɸ��������ҵ����ķ��ڵ�һ��Ԫ�ص�λ��
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
	for(i=0;i<N-1;i++)//����������N������N-1��
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

