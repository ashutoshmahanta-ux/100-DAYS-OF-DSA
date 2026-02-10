#include <stdlib.h>

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    // Allocate maximum possible size
    int* result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    
    int k = 0; // index for result array

    // Loop through nums1
    for (int i = 0; i < nums1Size; i++)
    {
        // Loop through nums2
        for (int j = 0; j < nums2Size; j++)
        {
            // If match found
            if (nums1[i] == nums2[j])
            {
                result[k++] = nums1[i]; // store common element
                nums2[j] = -1;          // mark as used
                break;                  // move to next element of nums1
            }
        }
    }

    *returnSize = k; // number of common elements
    return result;
}
