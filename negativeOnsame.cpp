void rearrange(int a[],int n)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        if(a[low] < 0)
        {
            low++;
        }
        else if(a[high] > 0){
            high --;
        }
        else{
            swap(a[low],a[high]);
        }
    }
}