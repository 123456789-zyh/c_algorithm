//ц╟ещеепР
#include<stdio.h>
#define N 5
int main(void)
{
	int i,j,t,a[N];
	printf("input %d numbers:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
	return 0;
}
