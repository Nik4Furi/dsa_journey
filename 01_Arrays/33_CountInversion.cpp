long long cnt = 0;
void merge(long long arr[], int l, int m, int r)
{
    vector<long long> left(arr + l, arr + m + 1);
    vector<long long> right(arr + m + 1, arr + r + 1);
    int i = 0, j = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] <= right[j])
            arr[l++] = left[i++];
        else
        {
            arr[l] = right[j];
            cnt += j + m + 1 - l;
            // COUNT HERE
            l++;
            j++;
        }
    }
    while (i < left.size())
        arr[l++] = left[i++];
    while (j < right.size())
        arr[l++] = right[j++];
}

void mergesort(long long arr[], int l, int r)
{
    if (l >= r)
        return;
    int m = l - (l - r) / 2;
    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);
    merge(arr, l, m, r);
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    mergesort(arr, 0, N - 1);
    return cnt;
}