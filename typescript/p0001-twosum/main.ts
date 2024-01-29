// https://leetcode.com/problems/two-sum/description/

export function twoSum(nums: number[], target: number): number[] {

    for (let i = 0; i < nums.length; i++) {
        const num: number = nums[i];

        const diff = target - num;

        if (nums.includes(diff, i+1)) {
            return [i, nums.indexOf(diff, i+1)];
        }
        
    }

    return [];
};

