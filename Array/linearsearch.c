#include<stdio.h>
int main()
{
    int found=0;
    int n;
    int a[5]={1,2,3,4,5};
    printf("Enter the Element to Search:");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if(a[i]==n){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Element Found!");
    }
    else{
        printf("Element not found!");
    }
}