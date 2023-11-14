#include<stdio.h>
int main(){
	int a=100;
	printf("day so tu 1-100 : ") ;
	for(int i =1;i<=a;i++){
		if (i%3==0&&i%5!=0){
			printf("Fizz\t");
		}else if (i%3!=0&&i%5==0){
			printf("Buzz\t");
		}else if (i%3==0&&i%5==0){
			printf("FizzBuzz\t");
		}else
			printf("%d\t",i);
		}
	}


