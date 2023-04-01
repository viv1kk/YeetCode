int search(int* nums, int numsSize, int target){
    int s = 0, e = numsSize-1, mid = 0;
    int ans = -1;
    while(s <= e)
    {
        mid = s+((e-s)>>1);
        if (target==*(nums+mid)){
            ans=mid;
            break;
        }
        else if (target<*(nums+mid)){
            e=mid-1;
        }
        else if (target>*(nums+mid)){
            s=mid+1;
        }
        else{
            break;
        }
    }
    return ans;
}