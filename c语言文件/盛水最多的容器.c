//盛水最多的容器
int maxArea(int* height, int heightSize){
    int left=0;
    int right=heightSize-1;
    int max=0;
    while(left<right){
        int cha=right-left;
        int gao=min(height[left],height[right])
    
        int area=cha*gao;

        if(area>max)
            max=area;
        if(gao==height[left])
            left++;
        else
            right--;
        
    }
    return max;

}
//先确定一个变量再确定另外一个变量
//双指针法
//先确定容器的宽，容器的宽从大到小依次缩小
//在宽确定的情况下，再找出高最大的情况
//不断循环记录最大值

