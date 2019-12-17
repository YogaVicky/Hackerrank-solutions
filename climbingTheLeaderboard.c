#include<stdio.h>
int main()
{
	int n,i,m,j=0,k=0,l,h,mid;
	scanf("%d",&n);
	int arr[n];
	int ar[n];
	scanf("%d",&ar[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(ar[j]!=arr[i])
		{
			j++;
			ar[j]=arr[i];
		}

	}
	scanf("%d",&m);
	int a[m],r[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);

	}
     while(k<m)
    {
         l=0;
         h=j;
         while(l<=h)
         {
            mid=(l+h)/2;
         if(ar[mid]==a[k])
         {
             r[k]=mid + 1;
             break;    
         }
       if(ar[mid]>a[k])
         {
             l=mid+1;
         }
         else
         {
             h=mid-1;
         }
       
         }
         if(ar[mid]!=a[k])
         {r[k]=h+2;}
           
          
          
          k++;
    }
    for(i=0;i<m;i++)
    {
    	printf("%d\n",r[i]);
    }
	
}

