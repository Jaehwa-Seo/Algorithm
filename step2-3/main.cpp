// #2839
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int count=n/5;
	while(true)
	{
		if((n-(count*5))%3==0)
		{
			count+=(n-(count*5))/3;
			break;
		}
		else if(count==0)
		{
			count=-1;
			break;
		}
		count--;
	} 
	
	printf("%d",count);
	
	return 0;
}
*/

// #2741
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
		printf("%d\n",i+1);
	
	return 0;
}
*/

// #2741
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=n;i>0;i--)
		printf("%d\n",i);
	
	return 0;
}
*/

// #2739
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<10;i++)
		printf("%d * %d = %d\n",n,i,n*i);
		
	return 0;
}
*/

// #2438
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
*/

// #2439
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			printf(" ");
		}
		for(int k=0;k<=i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
*/

// #2440
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

// #2441
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<i;k++)
			printf(" ");
		for(int j=n;j>i;j--)
			printf("*");
	
		printf("\n");
	}
	return 0;
}
*/

// #1924
/*
#include <stdio.h>

int main()
{
	int m,d;
	int count=0;
	scanf("%d %d",&m,&d);
	
	if(m!=1)
	{
		for(int i=1;i<m;i++)
		{
			if(i==4 || i==6 || i==9 || i==11)
				count+=30;
			else if(i==2)
				count+=28;
			else
				count+=31;
		}	
	}
	count+=d;
	count%=7;
	
	switch(count)
	{
		case 1:
			printf("MON\n");
			break;
		case 2:
			printf("TUE\n");
			break;
		case 3:
			printf("WED\n");
			break;
		case 4:
			printf("THU\n");
			break;
		case 5:
			printf("FRI\n");
			break;
		case 6:
			printf("SAT\n");
			break;
		case 0:
			printf("SUN\n");
			break;
	}
	return 0;
}
*/

// #8393
/*
#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		sum+=(i+1);
	}
	printf("%d",sum);
}
*/

// #11720
/*
#include <stdio.h>

int main()
{
	int n;
	char a[101];
	scanf("%d",&n);
	scanf("%s",a);
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		sum+=(int)a[i]-48;	
	}
	
	printf("%d",sum);
	return 0;
}
*/

// #11721
/*
#include <stdio.h>
#include <string.h>

int main()
{
 	char a[101];
 	scanf("%s",a);
 	int i=0;
 	
 	while(i<strlen(a))
 	{
 		printf("%c",a[i]);
 		if((i+1)%10==0 && i!=0)
 		{
 			printf("\n");
		}
		i++;
	}
	
	return 0;
}
*/

// #15552
/*
#include <stdio.h>

int main()
{
	int n;
	int a,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}
*/
