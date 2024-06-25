//简单选择排序
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void selectsort(int a[],int n){
for(int i=1;i<n-1;i++){
    int min=i;
    for(int j=i;j<n-1;j++){
      if(a[j]>a[min])
      min=j;
    }
      swap(a[i],a[min]);
}
}
