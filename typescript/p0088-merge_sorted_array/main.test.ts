import { test, expect } from "@jest/globals";
import { merge } from "./main";

test("CASE 1", () => {
    const nums1: number[] = [1,2,3,0,0,0];
    const m: number = 3;
    const nums2: number[] = [2,5,6];
    const n: number = 3;

    merge(nums1, m, nums2, n);
    const output: number[] = [1,2,2,3,5,6];
    expect(nums1).toEqual(output);
})

test("CASE 2", () => {
    const nums1: number[] = [1]; 
    const m: number = 1;
    const nums2: number[] = [];
    const n: number = 0;

    merge(nums1, m, nums2, n);
    const output: number[] = [1];
    expect(nums1).toEqual(output);
})

test("CASE 3", () => {
    const nums1: number[] = [0]; 
    const m: number = 0;
    const nums2: number[] = [1];
    const n: number = 1;

    merge(nums1, m, nums2, n);
    const output: number[] = [1];
    expect(nums1).toEqual(output);
})
