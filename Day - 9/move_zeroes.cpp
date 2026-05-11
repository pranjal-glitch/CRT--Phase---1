class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // Pointer for non-zero placement
        int j = 0;

        // Traverse array
        for(int i = 0; i < nums.size(); i++) {

            // If non-zero element found
            if(nums[i] != 0) {

                // Swap with j pointer
                swap(nums[i], nums[j]);

                // Move j forward
                j++;
            }
        }
    }
};
