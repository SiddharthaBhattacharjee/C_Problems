#include <stdio.h>
#include <string.h>
int main()
{
    int t,men,women,collision=0;
    scanf("%d",&t);
    while(t>0){
        scanf("%d %d",&men,&women);
        char a[men][women];
        for(int i=0;i<men;i++){
            char temp[women];
            scanf("%s",&temp);
            for(int j=0;j<women;j++){
                a[i][j] = temp[j];
            }
        }
        for(int i=0;i<women;i++){
            int count = 0;
            for(int j=0;j<men;j++){
                if(a[j][i]=='1'){
                    count++;
                }
            }
            if(count>1){
                collision+=count;
            }
        }
        printf("%d",collision);
        t--;
    }
	return 0;
}