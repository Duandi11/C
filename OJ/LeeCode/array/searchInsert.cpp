#include<stdio.h>
#include"windows.h"
/*
int searchInsert(int *a,int numsSize,int target){
    int index = 0;
    for(int i=0; i< numsSize; i++)
        if(a[i] < target)
            index++;
        else{
            return index;
        }
    return index+1;
}
*/
int searchInsert(int *a,int numsSize,int target){
    //这次选择用折半查找，而不是顺序解决
   int low=0,mid=numsSize/2,high=numsSize-1;
    while(low<high){
        if(target > a[mid])
            low = mid+1;
        else if(target <a[mid])
            high = mid-1;
        else 
            return mid;
        mid = (low+high)/2;
    }
    if(a[low]<target)
        return low+1;
    else return low;
}
//给定排序数组如果找到 return index if not return where should be sorted
int main(){
    int a[4]={1,3,5,6};
    int index =searchInsert(a,4,2);
    printf("%d",index);
    system("pause");
    return 0;
}