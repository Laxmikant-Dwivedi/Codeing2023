void alternate(int arr[], int n){
    queue<int> a,b;
    for(int i=0; i<n; i++){
        if(arr[i] >= 0)
            a.push(arr[i]);
        else
            b.push(arr[i]);
    }
    for(int i=0; i<n;){
        if(!a.empty())
            arr[i++] = a.front();
            a.pop();
            arr[i++] = b.front();
            b.pop();
    }
}