#include<stdio.h>
void main(){
    int n1,n2,n3;
    printf("\nEnter NumberOne & NumberTwo & NumberThree :\t");
    scanf("%d%d%d",&n1,&n2,&n3);
    int maximum(){
        if(n1 > n2){
            if(n1 > n3){
                printf("%d is Maximum.\n",n1);
            }
            else{
                printf("%d is Maximum.\n",n3);
            }
        }
        else if (n2 > n1){
            if(n2 > n3){
            printf("%d is Maximum.\n",n2);
            }
        }
        // else{
        //     printf("%d",n3);
        // }
    }
    maximum();
}