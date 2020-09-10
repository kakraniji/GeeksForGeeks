class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        
        vector<int>v;
        
        int top=0,left=0,right=col-1,down=row-1;
        while(top<=down && left<=right)
        {
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
                for(int i=down ;i>=top;i--)
                v.push_back(matrix[i][left]);
                
                left++;
            }
        }
        return v;
    }
};
