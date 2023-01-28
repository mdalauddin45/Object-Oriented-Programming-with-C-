#include<stdio.h>
int main(){
    int arr[10], target;
    printf("Enter the 10 elements of the array in ascending or decending order ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element ");
    scanf("%d",&target);
    for(int i=0;i<10;i++){
        if(arr[i]==target){
            printf("Element found at index %d", i);
            break;
        }
        else if(i==9){
            printf("Element not found");
        }
    }
}