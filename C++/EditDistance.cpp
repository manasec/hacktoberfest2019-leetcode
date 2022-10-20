class Solution 
{
    public:
    int minDistance(string word1, string word2) 
    {
        //replace | delete
        //insert  |
        int N=word1.size(),M=word2.size();
        //This is a dp problem. Maintain a matrix where characters of the word you want to convert to are on the top and the word which is being converted is on the left. 
        //Now whenever you are getting the cell value from diagonal and the value of the diagonal cell is same it means that the character was same in both strings.
        //If it was different then this means you replaced the character with correct one. 
        //If the value you took was from the left cell that means you added that character from the column. 
        vector<vector<int> > dp(N+1,vector<int> (M+1,0));
        for (int i=0;i<=N;i++)
        {
            dp[i][0]=i;
        }
        for (int i=0;i<=M;i++)
        {
            dp[0][i]=i;
        }
        for (int i=1;i<=N;i++)
        {
            for (int j=1;j<=M;j++)
            {
                if (word1[i-1]==word2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                }
            }
        }
        // for (int i=0;i<=N;i++)
        // {
        //     for (int j=0;j<=M;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[N][M];
    }
};