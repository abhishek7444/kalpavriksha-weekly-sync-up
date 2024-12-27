/*
1. ButterFly Pattern

1        1
12      21
123    321
1234  4321
1234554321
1234  4321
123    321
12      21
1        1

*/
#include<stdio.h>

void printPattern(int n){

    for(int row = 0;row<n;row++){
        for(int col = 0 ; col <= row; col++ ){
            printf("%d",col+1);
        }
        
        int spaces = 2*(n-1)-2*row;
        while(spaces--){
            printf(" ");
        }
        int counter = row+1;
        for(int k = 0; k <=row; k++){
            printf("%d",counter);
            counter--;
        }

        printf("\n");
    }

    for(int row = n-1 ; row >=0;row--){
        for(int col = 0 ; col < row ; col++){
            printf("%d",col+1);
        }
        int spaces = 2*(n-row);
        while(spaces--){
            printf(" ");
        }
        int m = row;
        for(int k = 0;k<row;k++){
            printf("%d",m);
            m--;
        }
        printf("\n");
    }




}
int main(){
    int n ;
    scanf("%d",&n);
    printf("\n");

    printPattern(n);
}



