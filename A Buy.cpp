//深搜解法 
#include <bits/stdc++.h>
using namespace std;
int n, m, arr[105] = {0}, ans = 0;
void dfs(int step, int sum)
{
	if(sum == m)
	{
		ans++;
		return;
	}
	if(sum >= m || step >= n) return;
	step++;
	dfs(step, sum+arr[step]);
	dfs(step, sum);
}
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	dfs(0, 0);
	cout << ans;
	return 0;
}
//动规解法
// #include <bits/stdc++.h>
//using namespace std;
//int n, m, arr[105] = {0}, dp[105][10005] = {0};
//int main()
//{
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	dp[0][0] = 1;
//	for(int i = 1; i <= n; i++)
//	{
//		int tmp = arr[i];
//		for(int j = 0; j <= m; j++)
//		{
//			if(j >= tmp)
//			{
//				dp[i][j] = dp[i-1][j] + dp[i-1][j - tmp];
//			}
//			else
//			{
//				dp[i][j] = dp[i-1][j];
//			}
//		}
//	}
//	cout << dp[n][m];
//	return 0;
//}
