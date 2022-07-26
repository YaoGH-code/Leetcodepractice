/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int left =0;
    int right = numsSize-1;
    int *inary = (int*) malloc(sizeof(int)*2);
    *inary = -1;
    *(inary+1) = -1;
    if (numsSize==0)
        return inary;
    int *return_array = (int*) malloc(sizeof(int)*2);
    
    while(left <= right){
        int mid = left+(right-left)/2;
        if (nums[mid]>target)
            right = mid -1;
        else if (nums[mid]<target)
            left = mid + 1;
        else if (nums[mid]==target)
            right = mid -1;   
    }
    if (left >= numsSize || nums[left] != target)  // 此处的例子为防止left指针溢出 例如当target大于最大值时, left会不断加一,
                                                   // 同理, 当target小于最小值时, right会不断减一, 这样会导致指针的溢出.
                                                   // 导致此问题的根本原因是 while loop结束条件为right在left左侧.
                                                   // 但是当while loop结束时我们不能确定是否是溢出状态 也有可能是left已经在最左侧的正确位置上,
                                                   // 也有可能right已经溢出left在index=0处,(此种情况无所谓)
                                                   // 但是 就是不能 left>=numsize 因为此种情况表示没找到.
        return inary;
    *return_array = left;
    
    left =0;
    right = numsSize-1;
    while(left <= right){
        int mid = left+(right-left)/2;
        if (nums[mid]>target)
            right = mid -1;
        else if (nums[mid]<target)
            left = mid + 1;
        else if (nums[mid]==target)
            left = mid +1;   
    }
    if (right <0  || nums[right] != target)
        return inary;
    *(return_array+1) = right;
    
    return return_array;
}