class Solution
{   
public:
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        int row=matrix.size();
        int col=matrix[0].size();
        
        vector<int>v;
        
        for(int i=0;i<row;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<col;j++)
                v.push_back(matrix[i][j]);
            }
            else
            {
                for(int j=col-1;j>=0;j--)
                v.push_back(matrix[i][j]);
                
            }
        }
        return v;
    }
};
