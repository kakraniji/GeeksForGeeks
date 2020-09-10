class Solution
{   
public:     
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        
        vector<int>v;
        
        int left=0,right=col-1,top=0,down=row-1;
        
        for(int i=left;i<=right;i++)
        v.push_back(matrix[top][i]);
        
        top++;
        
        for(int i=top;i<=down;i++)
        v.push_back(matrix[i][right]);
        
        right--;
        
        if(top<=down)
        {
            for(int i=right;i>=left;i--)
            v.push_back(matrix[down][i]);
            
            down--;
        }
        
        if(left<=right)
        {
            for(int i=down;i>=top;i--)
            v.push_back(matrix[i][left]);
            
            left++;
        }
        
        return v;
        
        
        
    }
};
