#include<stdio.h>
int main(){
   /* arr [4];
    int arr2 []={1,2,3,4};
    for(int i=0 ; i<4 ; i++){
        scanf("%d",&arr);

    }
    for(int i=0 ;i<4 ;i++){
        printf("%d",arr);
    }*/

int a[4];
int i;
for(i =0; i<(sizeof(a)/sizeof(a[0]));i++){
    scanf("%d",&a[i]);
}
for(i=0;i<(sizeof(a)/sizeof(a[0]));i++){
   int  b=a[i]+b;

}
printf("%d",b);
    return 0;
}