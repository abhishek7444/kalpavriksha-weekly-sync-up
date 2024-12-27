/*
5. Hourglass Pattern 


*********
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*********



*/

#include<stdio.h>

void printHourGlass(int n) {
    for (int i = 0; i < n; i++) {
        int spaces = i; 
        while (spaces--) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            if (j == 0 || j == 2 * (n - i) - 2 || i == 0) { 
                printf("*");
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }


    for (int i = 1; i < n; i++) {
        int spaces = n - i - 1; 
        while (spaces--) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i || i == n-1) { 
                printf("*");
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printHourGlass(n);
    return 0;
}
