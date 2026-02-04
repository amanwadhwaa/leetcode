class NumMatrix {
public:
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        mat = matrix;
        int sum;
        for(int i = 0 ; i<matrix.size() ; i++){
            sum=0;
            for(int j=0 ; j<matrix[i].size() ; j++){
                sum +=mat[i][j];
                mat[i][j]=sum;

            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int RegionSum = 0 ,RegionMinus=0; 
        for(int i =row1 ; i<=row2 ; i++){
            RegionSum += mat[i][col2];
            if(col1>0){
                RegionMinus+=mat[i][col1-1];
            }
        }
        return RegionSum-RegionMinus;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */