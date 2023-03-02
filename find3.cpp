bool find3(int arr[], int n, int x)
{
    sort(arr,arr+n);

    for(int i=0; i<n; i++)
    {
        int l=i+1;
        int r= n-1;
        while(l<r)
        {
            if(arr[i]+arr[l]+arr[r] == x){
                return 1;
            }
            else if(arr[i]+arr[l]+arr[r] < x){
                l++;
            }
            else {
                r--;
            }
        }
        return 0;
    }
}