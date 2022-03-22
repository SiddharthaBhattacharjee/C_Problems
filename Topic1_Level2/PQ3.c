#include <stdio.h>
int main(){
    int billwt;
    float tax,tip,totaltax,totaltip,totalbill;
    scanf("%d",&billwt);
    tax = 0.18;
    tip = 0.05;
    totaltax = billwt*tax;
    totaltip = billwt*tip;
    totalbill = billwt+totaltax+totaltip;
    printf("The Tax is %.2f\n",totaltax);
    printf("The Tip is %.2f\n",totaltip);
    printf("Total Bill With Tax and Tip is %.2f",totalbill);
	return 0;}