#include <stdio.h>

int main(){
    //code to calculate the probability of getting 6 in a dice roll
    int n, i, j, k, l, m, count = 0;
    float prob = 0.0;
    printf("Enter the number of dice rolls: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 6; j++){
            for(k = 1; k <= 6; k++){
                for(l = 1; l <= 6; l++){
                    for(m = 1; m <= 6; m++){
                        if(j == 6 && k == 6 && l == 6 && m == 6){
                            count++;
                        }
                    }
                }
            }
        }
    }
    prob = (float)count/n;
    printf("The probability of getting 6 in a dice roll is %f\n", prob);
    
    return 0;
}