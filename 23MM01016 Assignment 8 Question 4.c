#include<stdio.h>
void printduplicate(int arr[],int n) {
    int *ptr=arr,i=0,num;
    while(i <= n)
    {
        int check = 0;
        int d = *(ptr+i);
        for(int j = 0;j <= n; j++)
        {
            if(d == *(ptr+j))
                check++;
        }
        if(check > 1)
            num=d;
        i++;   
    }
    printf("%d is repeated 2 times",num);
    
}
int main() {
    int nums[100],n;
    
    printf("Enter size of array:- \n");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++)
    {
        printf("Enter element %d of the array:- \n", i + 1);
        scanf("%d",&nums[i]);
    }
       
    
    printduplicate(nums,n);
    return 0;
}