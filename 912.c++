class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> Left(n1), Right(n2);

        for (int i = 0; i < n1; i++)
            Left[i] = nums[left + i];

        for (int j = 0; j < n2; j++)
            Right[j] = nums[mid + 1 + j];

        int i = 0, j = 0, k = left;

        while (i < n1 && j < n2) {
            if (Left[i] <= Right[j])
                nums[k++] = Left[i++];
            else
                nums[k++] = Right[j++];
        }

        while (i < n1)
            nums[k++] = Left[i++];

        while (j < n2)
            nums[k++] = Right[j++];
    }

    void mergesort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergesort(nums, left, mid);
            mergesort(nums, mid + 1, right);
            merge(nums, left, mid, right);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};
