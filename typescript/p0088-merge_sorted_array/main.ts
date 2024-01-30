/**
 Do not return anything, modify nums1 in-place instead.
 */
export function merge(nums1: number[], m: number, nums2: number[], n: number): void {
    
    let i: number = m - 1;
    let j: number = n - 1;
    let k: number = nums1.length - 1;

    if (n !== 0 ) {
        while (j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    };

};
