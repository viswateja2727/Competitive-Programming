// Comparing two strings s1 and s2

int str_compare(string s1, string s2)
{
    int n = s1.length(), m = s2.length();
    if (n != m)
        return 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}
