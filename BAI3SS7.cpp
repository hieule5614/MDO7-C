#include<stdio.h>

int main(){
    float saving_deposit , dividend ,rate , total_Money;
    int saving_months;
	printf("nhap vao so tien gui tiet kiem : \n");
	scanf("%f",&saving_deposit);
	printf("nhap vao lai suat : \n");
	scanf("%f",&rate);
	printf("nhap vao so thang : \n");
	scanf("%d",&saving_months);
	rate = rate / 100.0;
	dividend = saving_deposit * rate * (saving_months/12.0);
	total_Money = saving_deposit+dividend;
	printf("Tien lai la : %.2f\n",dividend);
	printf("Tong tien tiet kiem la : %.2f\n",total_Money); 
}
