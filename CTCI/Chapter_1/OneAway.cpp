// Incomplete: To be completed

bool oneEditAway(string s1, string s2)
{
    bool flag = true;
    int s1_len = s1.length(), s2_len = s2.length();
    
    if(s1_len > s2_len)
    {
        swap(s1,s2);
        swap(s1_len,s2_len);
    }

    int change[s1_len] = {0};

    for(int i=0;i<s1_len;i++)
    {
        if(s1[i]!=s2[i])
        {
            change[i]++;
            break;
        }
    }

    for(int i=s1_len-1,j=s2_len-1;i>=0;i--)
    {
        if(s1[i]!=s2[j])
        {
            if(change[i]!=1)
                flag = true;
            else
                flag = false;
        }
    }

    return flag;
}