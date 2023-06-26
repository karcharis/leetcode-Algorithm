int search(int* nums, int numsSize, int target){
    // assuming : * nums != NULL
    //            * 1 <= nums.size() <= 10^4
    //            * -10^4 < nums[i], target < 10^4
    //            * any intiger occurs at most once in nums
    //            * nums is at ascedding order

    int start = 0;
    int end = numsSize - 1;
    int current = (end - start)/2;

    while (1) {
        if (nums[current] == target) {
            break;
        }
        else if (start >= end) {
            return -1;
        }
        else if (nums[current] < target) {
            start = current + 1;
        }
        else { // nums[current] > target 
            end = current- 1;
        }
        current = start + (end - start)/2; // is there an overflow issue?
    }
    return current;
}

