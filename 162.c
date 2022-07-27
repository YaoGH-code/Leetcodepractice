/*
Author: Yao Xu
Ex:     *
       *  *
     _      _
使用二分法的思维, 将问题分为两部分, 如果mid的左侧是大于mid的那么极限值依旧在左侧, 将right设为mid-1
当然这只是一个思路
*/

int findPeakElement(int* nums, int numsSize){
    int left=0;
    int right=numsSize-1;
    int mid;
    
    while(left<=right){
        if (right>=left && left==numsSize-1 ){
            return left;
        }
        mid = left + (right-left)/2;
        if (nums[mid]<nums[mid+1])
            left=mid+1;
        else
            right=mid-1;
    }
    return left;
}