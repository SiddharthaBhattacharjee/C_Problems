#include <stdio.h>
int main()
{
    int alvqntoffood,messcnt,dividedqnt,remfood;
    scanf("%d %d",&alvqntoffood,&messcnt);
    dividedqnt = alvqntoffood/messcnt;
    remfood = alvqntoffood%messcnt;
    printf("%d %d",dividedqnt,remfood);
	return 0;
}