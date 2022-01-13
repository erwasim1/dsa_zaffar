//problem link->https://leetcode.com/problems/pascals-triangle/
//solution link--> https://www.youtube.com/watch?v=Q1lj9B33Euc
// question 118. Pascal's Triangle
/* Easy

4517

186

Add to List

Share
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

//ans 
     vector<vector<int>>ans;
        
      /*  for(int i=0;i<numRows;i++){
            vector<int>v(i+1,1);
            for(int j=1;j<i;j++ ){
                v[j]=ans[i-1][j]+ans[i-1][j-1];
                
                //v[1]=ans[1][1]+ans[1][0]
                //v[1]=1+1=2
                //i=3 1 1 1 1
                //v[1]=ans[2][1]+ans [2][0];
                //v[1]=2+1=3
                //v[2]=ans[2][2]+[2][1];
                //v[2]=1+2=3
                //1 3 3 1
                //next loop
            }
            ans.push_back(v);
        }
        return ans;
        */
           vector<vector<int>> generate(int numRows) {
         vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int>v(i+1,1);
            for(int j=1;j<i;j++){
                v[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(v);
        }
        return ans;
    }