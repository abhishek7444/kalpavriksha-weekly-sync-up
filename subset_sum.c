#include <stdio.h>
void Sort(int* arr,int size)
{
    for(int i =0;i<size-1;i++)
    {
        for(int j = 0;j<size-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void findSubsets(int* arr, int size, int index, int* subSet, int subSetLen,int sum)
{
    if(sum==0){
        for(int i=0;i<subSetLen;i++){
            printf("%d ",subSet[i]);
        }
        printf("\n");
    }
    for(int i=index;i<size;i++){
        if(index!=i && arr[i]==arr[i-1])continue;
        subSet[subSetLen]=arr[i];
        findSubsets(arr,size,i+1,subSet,subSetLen+1,sum-arr[i]);
    }
}

int main()
{
    printf("Enter the size : ");
    int size;
    scanf("%d",&size);
    
    printf("Enter the target Sum: ");
    int sum;
    scanf("%d",&sum);
    
    int len = 0;
    getchar();
    int arr[100000];
    
    while(size--)
    {
        scanf("%d",&arr[len++]);
    }
    size = len;
    int index =0;
    int subSet[10000];
    int   subSetLen = 0;
    
    Sort(arr,size);
    
    findSubsets(arr,size, index,subSet,subSetLen,sum);
    

    return 0;
}

