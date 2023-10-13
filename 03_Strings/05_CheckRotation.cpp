bool checkString(string &s1, string &s2, int indexFound,int Size)
{
    for (int i = 0; i < Size; i++)
    {
        // check whether the character is equal or not
        if (s1[i] != s2[(indexFound + i) % Size])
            return false;
        // %Size keeps (indexFound+i) in bounds, since it
        // ensures it's value is always less than Size
    }

    return true;
}
//to solve this have many approaches naive and optimal , i have idea about 2, and can see more