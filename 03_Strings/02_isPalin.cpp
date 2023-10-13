
int isPalindrome(string S)
{
    // Your code goes here

    int start = 0, end = S.size() - 1;

    while (start <= end)
    {
        if (S[start++] != S[end--])
            return false;
    }

    return true;
}