// Problem Link - Find the transpose of a matrix
void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for (int i=0;i<n;i++){
            for (int j=0;j<i;j++){
                int val1 = matrix[i][j];
                int val2 = matrix[j][i];
                matrix[i][j] = val2;
                matrix[j][i] = val1;
            }
        }
    }
