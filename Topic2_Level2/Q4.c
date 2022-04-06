#include <stdio.h>
int main()
{
    int month,numofdays;
    float roomrent,renttopay;
    scanf("%d%f%d",&month,&roomrent,&numofdays);
    if(month==4 || month == 5){
        roomrent = roomrent+roomrent*0.2;
        renttopay = roomrent*numofdays;
    }
    else{
        renttopay = roomrent*numofdays;
    }
    printf("Rs.%.2f",renttopay);
	return 0;
}