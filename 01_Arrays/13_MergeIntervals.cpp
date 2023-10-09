vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    // Sort the intervals
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    int n = intervals.size();

    for (int row = 0; row < n; row++)
    {

        // Push the new interval
        if (ans.empty() || ans.back()[1] < intervals[row][0])
            ans.push_back(intervals[row]);

        // Else merging the intervals
        else
            ans.back()[1] = max(ans.back()[1], intervals[row][1]);
    }

    return ans;
}

// Brute Force is
/*
A simple approach is to start from the first interval and compare it with all other intervals for overlapping, if it overlaps with any other interval, then remove the other interval from the list and merge the other into the first interval
*/