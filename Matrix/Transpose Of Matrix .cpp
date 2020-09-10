class Solution
{   
public:     
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        vector<vector<int>>result;
        
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                v.push_back(matrix[j][i]);
                
            }
            result.push_back(v);
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[i][j]=result[i][j];
            }
        }
       
    }
};
