/*
4. Hollow Diamond
   *
  * *
 *   *
*     *
 *   *
  * *
   *

*/

#include<stdio.h>

void printHollowDiamond(int n){
    for(int i =0;i<n;i++){
        int spaces = n-i-1;
        while (spaces--)
        {
            printf(" ");
        }
        
        for(int j = 0;j<2*i+1;j++){
            if(j==0  || j == 2*i){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
       for (int i = 1; i < n; i++) { // Start from the second row
        int spaces = i; // Leading spaces
        while (spaces--) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            if (j == 0 || j == 2 * (n - i) - 2) { // Print stars at boundaries
                printf("*");
            } else {
                printf(" "); // Print spaces inside
            }
        }
        printf("\n");
    }

}

int main(){
    int n;
    scanf("%d",&n);
    printHollowDiamond(n);
    return 0;
}