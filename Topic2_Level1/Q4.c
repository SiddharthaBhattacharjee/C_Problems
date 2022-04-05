#include <stdio.h>
int main()
{
    int note500,note100,note50,note20,note10,note5,note2,note1;
    int amount;
    scanf("%d",&amount);
        if(amount>=0){
        note500 = amount/500;
        amount -= note500*500;
        note100 = amount/100;
        amount -= note100*100;
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
        printf("500:%d\n",note500);
        printf("100:%d\n",note100);
        printf("50:%d\n",note50);
        printf("20:%d\n",note20);
        printf("10:%d\n",note10);
        printf("5:%d\n",note5);
        printf("2:%d\n",note2);
        printf("1:%d",note1);
    }
    
	return 0;
}
