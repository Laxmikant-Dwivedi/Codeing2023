int oddcells(int m, int n, vector<int>& indices)
{
     vector<vector<int,int>> matrix(m,vector<int> (n,0));
     int cnt = 0;

     for(int i=0; i<indices.size(); i++)
     {
        for(int j=0; j<matrix.size(); j++)
            ++matrix[indices[i][0]] [j];
        for(int j=0; j<matrix.size(); j++)
            ++matrix[j] [indices[i][1]];
     }

     for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            if(matrix[i][j]%2)
            cnt++;
        }

     }
     return cnt;
}