
int mindiff(int arr[],int n,int k){
    int ans = arr[n-1]+arr[0];
    sort(arr,arr+n);
    
    int mi,mx;
    for(int i=1; i<n; i++)
    {
        mi = min(arr[0]+k,arr[i]-k);
        mx = max(arr[n-1]-k,arr[i-1]+k);

        int ans = min(ans,mx-mi);
    }
    return ans;
}