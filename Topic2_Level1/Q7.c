#include <stdio.h>
int main()
{
    int note50,note20,note10,note5,note2,note1,amount;
    scanf("%d",&amount);
    if(amount>=0){
        note50 = amount/50;
        amount -= note50*50;
        note20 = amount/20;
        amount -= note20*20;
        note10 = amount/10;
        amount -= note10*10;
        note5 = amount/5;
        amount -= note5*5;
        note2 = amount/2;
        amount -= note2*2;
        note1 = amount;
    }
    printf("50:%d\n",note50);
    printf("20:%d\n",note20);
    printf("10:%d\n",note10);
    printf("5:%d\n",note5);
    printf("2:%d\n",note2);
    printf("1:%d",note1);
	return 0;
}