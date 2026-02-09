#include <stdio.h>
int main()
{
    int i,n,arr[10],element,pos;
    printf("***********Inserting An Element***********\n");
    
    printf("Enter No. of Elements :") ;
    scanf("%d",&n);
       

    printf("Enter elements > ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter Element To Insert :");
    scanf("%d", &element);

    printf("Enter Position to Insert :");
    scanf("%d", &pos);
    
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
     arr[pos-1]=element;
     n++;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}