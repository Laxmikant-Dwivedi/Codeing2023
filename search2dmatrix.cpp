bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();

    if(n==0 || m==0)
        return false;
    
    int start = 0;
    int end = n*m-1;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        int ind = matrix[mid/n][mid%n];
        if(target==ind)
            return true;
        else if(target<=ind)
            end = mid-1;
        else
            start = mid+1;
    }
    return false;

}