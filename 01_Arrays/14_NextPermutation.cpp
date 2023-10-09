void nextPermutation(vector<int> &nums)
{

    int n = nums.size(), ind = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            ind = i;
            break;
        }
    }

    // Edge case to handle
    if (ind == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    // O/w we perform swapping
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] > nums[ind])
        {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    reverse(nums.begin() + ind + 1, nums.end());
}

/* Brute Force: is find all the permutations, and sort them, and compare all these is next permutation or not */