int search(int* nums, int numsSize, int target){
    int s = 0, e = numsSize-1, mid = 0;
    
    while(s <= e)
    {
        mid = s+((e-s)>>1);
        if(nums[mid] > target) e = mid-1;
        else if(nums[mid] < target) s = mid+1;
        else return mid;
    }
    return -1;
}