//#9498
/*
#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90)
		printf("A");
	else if(a>=80)
		printf("B");
	else if(a>=70)
		printf("C");
	else if(a>=60)
		printf("D");
	else
		printf("F");
	return 0;
}
*/

//#10817
/*
#include <stdio.h>

int main() {

	int arr[3], i, j, tmp;
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	for(i=0; i<3; i++)
		for(j=0; j<2; j++)
			if(arr[j] >= arr[j+1]) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
	printf("%d\n", arr[1]);

	return 0;
}
*/

//#10871
/*
#include <stdio.h>

int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int tmp;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		if(x>tmp)
			printf("%d ",tmp);
	}
	return 0;
}
*/

//#1546
/*
#include <stdio.h>

int main()
{
	int n;
	int a[1001];
	scanf("%d",&n);
	int max=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
			max=a[i];
	}
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=((double)a[i]/max*100);
	}
	
	printf("%f",sum/n);
	
	return 0;
}
*/

//#4344
/*
#include <stdio.h>

int main()
{
	int c;
	int a[1000];
	scanf("%d",&c);
	int count,n;
	int sum;
	double avr;
	for(int i=0;i<c;i++)
	{
		count=0;
		avr=0.0;
		sum=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			sum+=a[j];
		}
		avr=(double)sum/n;
		for(int j=0;j<n;j++)
		{
			if(a[j]>avr)
				count++;
		}
		printf("%.3lf%%\n",(double)count/n*100);
	}
	
	return 0;
}
*/

//#1110
/*
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=n;
	int count=0;
	while(true)
	{
		int sum=0;
		if(i<10)
			i=i*10+i;
		else
			i=(((i%10)+(i/10))%10)+(i%10)*10;
		count++;
		if(i==n)
			break;
	}
	printf("%d",count);
	
	return 0;
}
*/

//#4673
/*
#include <iostream>
using namespace std;
#define SIZE 10000
int main() {
    int d, temp;
    bool a[SIZE+1]={};
    for(int i=1;i<=SIZE;i++) {
    	temp=i;
    	d=i;
        while(temp){
    	    d += temp%10;
    	    temp /= 10;
    	}
    	if(d<=SIZE) a[d]=true;
    }
    for(int i=1;i<=SIZE;i++) {
    	if( !a[i] ) printf("%d\n", i);
    }
}
*/

//#1065

#include <stdio.h>

int main()
{
	
}
