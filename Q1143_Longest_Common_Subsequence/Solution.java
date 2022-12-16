// ===========================2022_12_16===============================
//
// dp functions:
// dp[i][j] = dp[i-1][j-1]+1, if text1[i-1] == text2[j-1];
// dp[i][j] = max(dp[i-1][j], dp[i][j-1]), if text1[i-1] != text2[j-1];
//
// ====================================================================
class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        int M = text1.length();
        int N = text2.length();
        int[][]dp = new int[M+1][N+1];
        for(int i=1; i<=M; ++i){
            for(int j=1; j<=N; ++j){
                if(text1.charAt(i-1)==text2.charAt(j-1)){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[M][N];
    }
}

//TC: O(MN)
//SC: O(MN)