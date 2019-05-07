// #11718, #11719
/*
#include <stdio.h>
 
int main() {
    char input[101];
    while (fgets(input, 101, stdin))
        printf("%s", input);
    return 0;
}*/

// #10998
/*
#include <stdio.h>

int main(){
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d",A*B);
	
	return 0;
}
*/

// #1008
/*
#include <stdio.h>

int main()
{
	double A,B;
	scanf("%lf %lf",&A,&B);
	printf("%.9lf",A/B);
	return 0;
}
*/

// #10869
/*
#include <stdio.h>

int main()
{
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d\n%d\n%d\n%d\n%d",A+B,A-B,A*B,A/B,A%B);
	
	return 0;
}
*/


// #10430
/*
#include <stdio.h>

int main()
{
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	printf("%d\n%d\n%d\n%d", (A+B)%C,(A%C + B%C)%C,(A*B)%C,(A%C*B%C)%C);
	
	return 0;
}
*/

// #2558
/*
#include <stdio.h>

int main()
{
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d",A+B);
	
	return 0;
}
*/
// #1003
/*
#include<stdio.h>
#include<math.h>

int main() {

	int t, i, x1, y1, r1, x2, y2, r2;

	scanf("%d", &t);

	for (; t > 0; t--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		double i = sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));


		if (x1 == x2&&y1 == y2) {
			if (r1 == r2)
				printf("-1\n");
			else
				printf("0\n");
		}

		else {
			if ((r1 + r2) > i&&abs(r1 - r2) < i)
				printf("2\n");
			else if ((r1 + r2) == i||abs(r1-r2)==i)
				printf("1\n");
			else
				printf("0\n");
		}
	}

	return 0;
}
*/

// #1004

#include <stdio.h>
 
int dp[41];
 
int fibonacci(int n){
    if(n <= 0){
        dp[0] = 0;
        return 0;
    }else if(n ==1){
        dp[1] = 1;
        return 1;
    }
    if(dp[n] != 0){
        // 계산된 값
        return dp[n];
    } else {
        return dp[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}
 
int main(void){
    int test;
    scanf("%d", &test);
    
    while(test-- > 0){
        int x;
        scanf("%d", &x);
        if(x == 0){
            printf("%d %d\n", 1, 0);
        }else if(x == 1){
            printf("%d %d\n", 0, 1);
        }else{
            fibonacci(x);
            printf("%d %d\n", dp[x-1], dp[x]);
        }
    }
    
    return 0;
}

