#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int found=0;
	printf("Insert n: ");
	scanf("%d",&n);
	int i=1;
	int temp;
	if(sqrt(n)==(int) sqrt(n)){//if n=p^2
		printf("it's power of natural number\n");
		int p,q;
		p=(int) sqrt(n);
		q=(int) sqrt(n);
		printf("p=%d q=%d\n",p,q);
		return 0;
	}
	do{
		temp=n+i*i;
		printf("%d+%d^2=%d ",n,i,temp);
		if(sqrt(temp)==(int) sqrt(temp)){//if n=p*q
			found=i;
			printf("it's power of natural number\n");
			break;
		}else{
			printf("\n");
		}
		i++;
	}while(i<n);
	if(found!=0){
		int p,q;
		p=(int) sqrt(temp)-found;
		q=(int) sqrt(temp)+found;
		printf("p=%d q=%d\n",p,q);
	}else{
		printf("prime number or more than two prime factor\n");
	}
	return 0;
}
