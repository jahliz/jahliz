#include<stdio.h>
int main(){
	int amount, discount;

	
	printf("please enter the amount purchased: ");
	scanf("%d" , &amount);
	if (amount >  5000){
	discount = 0.1 * amount;
printf("the discount is %d \n", discount);
}
else if (amount >= 1000 && amount <= 5000){
	discount = 0.05 * amount;
	printf("the discount is %d \n", discount);
}
else{
	printf("no discount");
}
	
	return 0;
}