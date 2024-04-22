#include <stdio.h>

void sort_and_merge_arrays(int* arr1, int n1, int* arr2, int n2, int* arr3) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        arr3[k++] = arr1[i++];
    }

    while (j < n2) {
        arr3[k++] = arr2[j++];
    }
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {

   int merged_array_size = nums1Size + nums2Size;
   int merged_array[merged_array_size];

   sort_and_merge_arrays(nums1, nums1Size, nums2, nums2Size, merged_array);

   if ((merged_array_size - 1) % 2 == 0) {
       return merged_array[(int)((merged_array_size - 1) / 2)];
   } else {
       return (merged_array[(int)(merged_array_size / 2)] + merged_array[(int)(merged_array_size / 2) - 1]) / 2.0;
   }
}

int main() {
    // test1
    {
        printf("TEST1\n");
        int nums1[] = {1, 3};
        int nums2[] = {2};
        int nums1Size = 2;
        int nums2Size = 1;
        // size = 3
        // { 1, 2, 3 }
        //   0  1  2
        //      ^
        double median = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
        printf("expected = %f\n", 2.0);
        printf("found = %f\n", median);
    }
    // test2
    // {
        printf("TEST2\n");
        int nums1[] = {1, 2};
        int nums2[] = {3, 4};
        int nums1Size = 2;
        int nums2Size = 2;
        // size = 4
        // { 1, 2, 3, 4 }
        //   0  1  2  3
        //      ^  ^
        double median = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
        printf("expected = %f\n", 2.5);
        printf("found = %f\n", median);
    // }
    return 0;
}
