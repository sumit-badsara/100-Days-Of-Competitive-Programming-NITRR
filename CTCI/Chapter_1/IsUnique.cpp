/*
    If can't use additional Data structure, we can sort and check if 
    there are any consecutive same characters in the sorted string.
    Otherwise, we can simply store it in map and check for any repetition.
 */

bool isUnique(string str)
{
    map <char> count;
    bool flag = true;

    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
        if(count[str[i]]>1)
        {
            flag = false;
            break;
        }
    }    

    return flag;
}