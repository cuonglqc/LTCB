#include<stdio.h>
//a.
void nhapmang(int a[],int &n)
{
	printf("nhap n ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
}
//b:ngoai main&g:trong main
void inphantu(int a[],int n)
{	
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
//c&i
void chanle(int a[],int n)
{
	int i;
	int tch=0;
	int tl=0;
	printf("\nso chan la ");
	for(i=0;i<n;i++)
	{
	
		if(a[i]% 2 == 0)
		{
			printf("%d",a[i]);
			tch=a[i]+tch;
		}
	}
	printf("\nso le la ");
	for(i=0;i<n;i++)
	{
	
		if(a[i]% 2 != 0)
		{
			printf(" %d",a[i]);
			tl=a[i]+tl;
		}
	}
	
printf("\ntong chan %d",tch);
printf("\ntong le %d",tl);
}
//d&j
void min(int a[],int n)
{
   int min=a[0];
   int vitri=0;
   int min2=a[1];
   int vitrimin2=1;
   for(int i=1;i<n;i++)//do dat min=a[0] roi nen khong can i=0
     {
   	   if(a[i]<min)
   	   {
   	   	min=a[i];
   	    vitri=i;
   	   }
   	   if((a[i]<min2))
		  {
		  	min2=a[i];
			vitrimin2=i;
		  }
     }
	printf("\nso be nhat la %d",min);
	printf("\nvi tri so be nhat %d",vitri);
	printf("\nso be thu hai la %d",min2);
	printf("\nvi tri so be thu hai %d",vitrimin2);
}
//e.
void songuyento(int n)
{
	if(n<=1)
{
  	printf("%d khong phai so nguyen to",n);
  	return;	
}

	for (int i = 2; i <n; i++) 
  {
    if (n % i == 0) 
	{
      // neu chia het cho 2 thi khong phai so nguyen to
      printf("\n%d khong phai so nguyen to", n);
      
    }
  }
  //printf("\n%d la so nguyen to", n);
}
//h.
void insocovitrichan(int a[],int n)
{
	printf("\nvi tri cua cac so chan ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",i);
		}
	}
	
}
int main()
{
	int a[100],n;
	nhapmang(a,n);
	inphantu(a,n);
	chanle(a,n);
	min(a,n);
	printf("\nn=%d",n);
	songuyento(n);
	insocovitrichan(a,n);
	

}

