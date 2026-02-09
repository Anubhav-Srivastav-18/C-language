#include <stdio.h>
int main()
{
    int i,n,arr[10],element,pos;
    printf("***********Deleting An Element***********\n");
    
    printf("Enter No. of Elements :") ;
    scanf("%d",&n);
       

    printf("Enter elements > ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

   

    printf("Enter Position to delete :");
    scanf("%d", &pos);
    
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}