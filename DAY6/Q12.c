void moveZeroes(int* nums, int numsSize) {
    int pos = 0;

    // Move all non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }

    // Fill remaining positions with zeros
    while (pos < numsSize) {
        nums[pos] = 0;
        pos++;
    }
}
