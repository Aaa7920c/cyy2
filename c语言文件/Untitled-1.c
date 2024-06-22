//插入排序
#include <stdio.h>
void(int* a,int num){
    int i,j,temp;
    for(i=1;i<num;i++){
        temp=a[i];
        for(j=i;j>0&&temp<a[j-1];j--)
            a[j]=a[j-1];
        a[j]=temp;
    }
    
}