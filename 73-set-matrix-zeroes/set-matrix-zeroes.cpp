class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> index;

        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    index.push_back({i,j});
                }
            }
        }

        for(int i = 0; i < index.size(); i++){
            int row = index[i].first;
            int col = index[i].second;

            for(int j = 0; j < m; j++){
                matrix[row][j] = 0;
            }

            for(int k = 0; k < n; k++){
                matrix[k][col] = 0;
            }
        }
    }
};
