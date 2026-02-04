int removeElement(int* nums, int numsSize, int val) {
    int k = 0;   // counts elements not equal to val

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  // store valid element
            k++;
        }
    }

    return k;   // number of remaining elements
}
