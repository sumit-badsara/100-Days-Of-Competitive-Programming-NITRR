bool isPalindromePermutation(string str)
{
    char freq[27];

    bool even = false,flag = true;
    int singleChar = 0, n = str.length();
    
    if(n%2==0)
        even = true;
    
    for(int i=0;i<n;i++)
        freq[str[i]-'a']++;

    for(int i=0;i<26;i++)
    {
        if(freq[i] == 1)
        {
            if(even)
            {
                flag = false;
                break;
            }
            else
            {
                singleChar++;
                if(singleChar)
                {
                    flag = false;
                    break;
                }
            }
        }
    }

    return flag;
}