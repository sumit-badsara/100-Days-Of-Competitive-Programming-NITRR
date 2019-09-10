bool checkPermutation(string s1, string s2)
{
    bool flag = true;

    if(s1.length()!=s2.length())
        return false;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    if(s1!=s2)
        flag = false;

    return flag;
}