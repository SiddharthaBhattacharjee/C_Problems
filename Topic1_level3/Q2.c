#include <stdio.h>
int main()
{
    int price,loaves,regularprice;
    float discountrate,discount,finalprice;
    scanf("%d",&loaves);
    price=185;
    regularprice = price*loaves;
    discountrate=0.6;
    discount=(float)regularprice*discountrate;
    finalprice = (float)regularprice-discount;
    printf("Regular Price=%d\nAmount Discounted=%.2f\nAmount to be paid=%.2f",regularprice,discount,finalprice);
	return 0;
}