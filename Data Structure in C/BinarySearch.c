
#include<stdio.h>
int main()
{
    int arr[10], start,end,mid,target;
    printf("Enter the 10 elements of the array in ascending or decending order ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element ");
    scanf("%d",&target);
    start=0;
    end = 9;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==target){
            printf("Element found at index %d", mid);
            break;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if(start>end){
        printf("Element not found");
    }
    return 0;
}
