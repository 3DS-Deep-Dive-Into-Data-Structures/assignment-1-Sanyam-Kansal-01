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
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  int n,x;
  cin>>n>>x;
  int arr[n];
  int ans=0;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i].first;
      v[i].second = i;
  }
  sort(v.begin(), v.end());
  
 for (int i = 0; i < n; i++) {
    int left=0;
    int right=n-1;
    
    while (left != right) {
      int sumleft = x - v[i].first;
      
      if (left != i && right != i &&
          v[left].first + v[right].first == sumleft) {
        cout << v[i].second+1 << " " << v[left].second+1 << " "
             << v[right].second +1 << endl;
        return 0;
      }
      if (v[left].first + v[right].first < sumleft) {
        left++;
      } else {
        right--;
      }
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
