    //��������
    #include<stdio.h>
    #define N 5
    int a[N];//��������
    int main ( ) 
	{
    	int i, k, x;
    	printf("Please input %d numbers:\n",N);   
    	for (i=0; i<N; i++)
		{
    		scanf ("%d", &x);
    		for ( k=i; k>0; k-- ) /* �Ӻ���ǰ�Ƚ� */
			{	       
    			if ( a[k-1] > x )    //xǰ�����������
    				a[k]=a[k-1];         /* ����������ƶ�*/
    			else      break; /* �ҵ������λ�ã��˳� */
    		}
    		a[k] = x;  /* ��ɲ������ */
    	}
    
    	for (i=0; i<N; i++)
    		printf("%d ", a[i]);
    	return 0;
    }