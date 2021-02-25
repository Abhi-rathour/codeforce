#include<stdio.c>
int main()
{
	int t,i,j;
	scanf("%d",&t);
	int n,count;
	while(t--)
	{
		scanf("%d",&n);
		int a[n][10];
		int res[10];
		for(i=0;i<n;i++)
	     for(j=0;j<10;j++)
				scanf("%d",&a[i][j]);
		
        for(i=0;i<10;i++)
        	res[i]=a[0][i]^a[1][i];
        for(i=2;i<10;i++)
        	for(j=0;j<10;j++)
        		res[j]=res[j]^a[i][j];
        count=0;
        for(i=0;i<10;i++)
        	if(res[i]==1)
              count++;
       printf("%d\n",count);

	}
}
