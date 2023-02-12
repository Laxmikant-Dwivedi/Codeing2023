class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> s(a,a+n);  // property of set is that it does not contains
                                       // any duplicate elements
        
        for(int i=0; i<m; i++){
            s.insert(b[i]);      // if element of b is inserted then same element will not be inserted
        }
        return s.size();
        
    }
};