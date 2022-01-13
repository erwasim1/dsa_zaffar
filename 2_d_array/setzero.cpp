Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int rows=matrix.size();
        int cols=matrix[0].size();

        bool firstzero=false;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    if(i==0) firstzero=true;

         else matrix[i][0]=0;

            matrix[j][0]=0;

                }
            }
        }

        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=0;j--){
                if(i==0 && firstzero)matrix[i][j]=0;
   else if(i !=0 &&(matrix[0][i]==0 ||matrix[j][0]==0)){
                    matrix[i][j]=0;
                }
            }
        }




    }