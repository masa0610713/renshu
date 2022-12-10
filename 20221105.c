#include <stdio.h>
int main()
{
        int i;
        long int a[5] = {0,1,2,3,4};
        int j;
        int k;
        for(i=0;i<10;i++)
        {
                printf("a[%d] = x%x %d\n",i,a[i],a[i]);
        }
        for(j=0;j<10;j++)
        {
                a[j] = j;
		printf("a[%d] = x%x %d\n",j,a[j],a[j]);
        }
        for(k=0;k<10;k++)
        {
                printf("a[%d] = x%x %d\n",k,a[k],a[k]);
        }
        return 0;
}

