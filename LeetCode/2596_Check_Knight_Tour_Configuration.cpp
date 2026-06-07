class Solution {
public:

    bool helper(vector<vector<int>>& grid,int expval,int n,int row,int col){
        if(row<0 || col <0 || row >n-1 || col >n-1 || grid[row][col] != expval){
            return false;
        }
        if(expval == n*n -1){
            return true;
        }

        int ans1 = helper(grid,expval+1,n,row-2,col+1);
        int ans2 = helper(grid,expval+1,n,row-1,col+2);
        int ans3 = helper(grid,expval+1,n,row+1,col+2);
        int ans4 = helper(grid,expval+1,n,row+2,col+1);
        int ans5 = helper(grid,expval+1,n,row+2,col-1);
        int ans6 = helper(grid,expval+1,n,row+1,col-2);
        int ans7 = helper(grid,expval+1,n,row-1,col-2);
        int ans8 = helper(grid,expval+1,n,row-2,col-1);
        
        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 ||ans7 || ans8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return helper(grid,0,grid.size(),0,0);
    }
};
