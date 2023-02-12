class Solution
{
    public:
    void sort012(int a[], int n)
    {
       int i=0;
       int j=n-1;
       int mid = 0;
       while(mid<=j)
       {
           if(a[mid] == 0)            // for zero element
           {
               swap(a[mid],a[i]);
               mid++;
               i++;
           }
           else if(a[mid] == 1){     // for one element
               mid++;
           }
           else
           {
               swap(a[mid],a[j]);    // for 2 element
               j--;
           }
       }
    }
}
