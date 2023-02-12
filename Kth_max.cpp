class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> q;
        for(int i=0; i<=r; i++){
            q.push(arr[i]);      // pushing elements into heap(priority_queue)
            if(q.size() > k)     
            {
                q.pop();       // poping the top element on queue if size increases
            }
        }
        int ans = q.top();
        return ans;
    }
}





