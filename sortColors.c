#include<stdio.h>


void sortColors(int colors[],int n){
    int left = 0;
    int mid = 0;
    int right = n-1;

    while(mid<=right){

        if(colors[mid]==0){
            int temp = colors[mid];
            colors[mid] = colors[left];
            colors[left] = temp;

            mid++,left++;
        }

        else if(colors[mid]==1){
            mid++;
        }
        else{
            int temp = colors[mid];
            colors[mid] = colors[right];
            colors[right] = temp;

            right--;
        }

    }


    for(int i =0;i<n;i++){
        printf("%d ", colors[i]);
    }
    printf("\n");

}
int main(){
    int colors[1000];
    int n ;
    scanf("%d",&n);
    for(int i =0 ; i<n;i++){
        scanf("%d",&colors[i]);
    }
    sortColors(colors,n);
    return 0;
}