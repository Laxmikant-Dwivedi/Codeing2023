void Maxproductsum(int arr[], int n)
{
    long long ans = 0;
    long long ma = ans;
    long long mi = ans;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
            swap(ma,mi);
        ma = max(long long(arr[i]), ma*arr[i]);
        mi = min(long long(arr[i]), mi*arr[i]);
        ans = max(ans,ma);
    }
    
    return ans;
}