    //插入排序
    #include<stdio.h>
    #define N 5
    int a[N];//有序数组
    int main ( ) 
	{
    	int i, k, x;
    	printf("Please input %d numbers:\n",N);   
    	for (i=0; i<N; i++)
		{
    		scanf ("%d", &x);
    		for ( k=i; k>0; k-- ) /* 从后向前比较 */
			{	       
    			if ( a[k-1] > x )    //x前面的数比它大
    				a[k]=a[k-1];         /* 将大数向后移动*/
    			else      break; /* 找到插入的位置，退出 */
    		}
    		a[k] = x;  /* 完成插入操作 */
    	}
    
    	for (i=0; i<N; i++)
    		printf("%d ", a[i]);
    	return 0;
    }