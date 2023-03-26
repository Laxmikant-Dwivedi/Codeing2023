void reverseString(vector<char>& s)
{
    int i=0; 
    int j = s.length()-1;
    while(i<=j)
    {
        swap(s[i++],s[j--]);
    }
}