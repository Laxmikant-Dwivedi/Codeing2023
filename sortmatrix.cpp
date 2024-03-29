vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat)
{
    vector<int> ans;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ans.push_back(mat[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = ans[k++];
        }
    }
    return mat;
}