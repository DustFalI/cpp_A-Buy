//深搜解法
#include <bits/stdc++.h>
using namespace std;
int n, m, arr[105] = {0}, ans = 0;
void dfs(int step, int sum)
{
	if(sum == m)//一定要注意判定方案，只有完全画完才算一种方案
	{
		ans++;
		return;
	}
	if(sum >= m || step >= n) return;//钱数超限，step超限都不算一种方案
	step++;
	dfs(step, sum+arr[step]);//选
	dfs(step, sum);//不选
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
//	dp[0][0] = 1;//因为钱数为0，也算一种方案，即钱不够买任何菜也算一种方案
//	for(int i = 1; i <= n; i++)
//	{
//		int tmp = arr[i];
//		for(int j = 0; j <= m; j++)//注意细节，这里从0开始，因为钱数0也算一种情况
//		{
//			if(j >= tmp)
//			{
//				dp[i][j] = dp[i-1][j] + dp[i-1][j - tmp];//这里与常规背包问题不同
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
