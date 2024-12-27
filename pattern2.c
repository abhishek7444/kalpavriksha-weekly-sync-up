
/*

2. Print Hollow Inverted Traingle

*****************
 *             *
  *           *
   *         *
    *       *
     *     *
      *   *
       * *
        *

*/
#include<stdio.h>

void HollowInvertedTriangle(int n){
    int rows = n;
    int cols = 2*n -1;

    for(int row = 0; row < rows; row++){
        int space = row;
        while(space--){
            printf(" ");
        }
        for(int col =0; col < cols-(2*row); col++){
            if(row==0 || col ==0 || col == cols-(2*row)-1){
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);

    HollowInvertedTriangle(n);

    return 0;
}