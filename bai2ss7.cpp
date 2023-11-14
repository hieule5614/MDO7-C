#include<stdio.h>
#include<math.h>

int main(){
    for(int num = 100 ; num<=999 ; num++){
    int a = num/100;
	int b = (num / 10 ) % 10;
	int c = num %10 ;
    int sum = a*a*a+b*b*b+c*c*c;
	if(sum == num  )	
		printf ("cac so Armstrong la : %d ", num);
	}
	}

