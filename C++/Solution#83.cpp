// 26. Remove Duplicates from Sorted Array

/*
    Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

    Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

    Example 1:

    Given nums = [1,1,2],

    Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

    It doesn't matter what you leave beyond the returned length.
    Example 2:

    Given nums = [0,0,1,1,1,2,2,3,3,4],

    Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.

    It doesn't matter what values are set beyond the returned length.
    Clarification:

    Confused why the returned value is an integer but your answer is an array?

    Note that the input array is passed in by reference, which means modification to the input array will be known to the caller as well.

    Internally you can think of this:

    // nums is passed in by reference. (i.e., without making a copy)
    int len = removeDuplicates(nums);

    // any modification to nums in your function would be known by the caller.
    // using the length returned by your function, it prints the first len elements.
    for (int i = 0; i < len; i++) {
        print(nums[i]);
    }
 */

// Function that removes duplicate elements and returns the new size the array.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() == 0)
            return 0;

        // The last seen element, is used to check if it is equals to nums[i]
        int last_element = nums[0];

        // The new size of the vector
        int new_size = 1;

        // The index where we'll write elements, ignoring the duplicates
        int write_index = 1;

        // Go from the second element till the end
        for (int i = 1; i < nums.size(); ++i) {
            // Check if the element isn't a duplicate, comparing to the last one
            if (nums[i] != last_element) {

                // Update the last seen element
                last_element = nums[i];

                // Write the element and increase write_index by 1
                nums[write_index++] = nums[i];

                new_size++; // Update new_size
            }
        }

        // Note that new_size is the same as write_index, but the code sudently
        // becomes harder to explain when you remove write_index and just uses
        // new_size, so just let the compiler ignore it.

        return new_size;
    }
};
