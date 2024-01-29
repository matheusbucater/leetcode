import { test, expect } from  "@jest/globals";
import { twoSum } from './main';

// case 1
const nums1 = [2,7,11,15];
const target1 = 9
const output1 = [0,1];

// case 2
const nums2 = [3,2,4];
const target2 = 6;
const output2 = [1,2];

// case 3
const nums3 = [3,3];
const target3 = 6;
const output3 = [0,1];

// tests
test(`CASE 1 - nums=${nums1} target=${target1}`, () => {
    expect(twoSum(nums1, target1)).toEqual(output1);
});

test(`CASE 2 - nums=${nums2} target=${target2}`, () => {
    expect(twoSum(nums2, target2)).toEqual(output2);
});

test(`CASE 3 - nums=${nums3} target=${target3}`, () => {
    expect(twoSum(nums3, target3)).toEqual(output3);
});

