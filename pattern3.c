/*

3.  FULL Diamond Pattern

   *
  ***
 *****
*******
*******
 *****
  ***
   *

*/
#include<stdio.h>
void printFullDiamond(int n){
    for(int i =0;i<n;i++){
        int spaces = n-i-1;
        while (spaces--)
        {
            printf(" ");
        }
        
        for(int j = 0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int k =0;k<n;k++){
        int spaces = k;
        while(spaces--){
            printf(" ");
        }
        for(int l = 0; l < 2*(n-k)-1;l++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n ;
    scanf("%d",&n);
    printFullDiamond(n);
}