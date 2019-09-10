string URLify(string text)
{
    string texturl="";
    
    for(int i=0;i<text.length();i++)
    {
        if(text[i]==' ')
            texturl.append("%20");
        else
            texturl.append(text[i]);
    }

    return texturl;
}