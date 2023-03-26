int isPalindrome(string S)
{
    int i=0;
    int j=S.length();
    while(i<=j)
    {
        if(S[i]!=S[j]){
            return 0;
        }
        else {
            i++;
            j--;
        }
        return 1;
    }
}