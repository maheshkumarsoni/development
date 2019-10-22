#include<stdio.h>
void main(){
    int number,numberSquare;
    printf("\nEnter Number for finding Square :\t");
    scanf("%d",&number);
    numberSquare = number * number;
    printf("\nSquare of %d is :\t%d\n",number,numberSquare);
}