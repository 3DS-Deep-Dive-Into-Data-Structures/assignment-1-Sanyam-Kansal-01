#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define vi vector<int>
#define pb(x) push_back(x)
#define vvi vector<vector<int>>
#define vii vector<pair<int , int>>
#define pii pair<int , int>
#define vc vector<char>
#define rep(i , a , b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define all(x) ((x).begin() , (x).end())
#define input(x) for(auto &i : x)cin >> i
#define si set<int>
#define msi multiset<int>
 
const int N = 1e3 + 2 , MOD = 1e9 + 7;
 
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
  int n;
  cin>>n;
  vector<int> prefix(n+1) ;
  for(int i=1;i<=n;i++){
  	int x;
  	cin>>x;
  	prefix[i] = prefix[i-1] + x;
  }
 
  int maxsum = prefix[1];
  int mini = prefix[0];
  for(int i=1;i<=n;i++){
  	maxsum = max(maxsum, prefix[i] - mini);
  	mini = min(mini, prefix[i]);
  }
  cout<<maxsum;
 
 
 
   return 0;
}