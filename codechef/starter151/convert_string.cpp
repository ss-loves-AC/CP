#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse2")

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

// #define int         long long
#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define mp          make_pair
#define all(a)      (a).begin(),(a).end()
#define FF           first
#define SS           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define rep(i,a,b)  for(int i=a;i<b;i++)
int hell=1000000007;
int mod=998244353;

// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve1(){
  return ;
}

 
int solve(){ 

int n;
cin >> n ;
string s;
cin >> s;
int zero = 0;
for(int i=0;i<s.size();i++){
	zero += (s[i] == '0');
}

int ans = 0;
for(int i=1;i<=n;i++){
	if(zero > i && n - zero > i)continue;
	if(i >= zero){
		if((i&1) == (zero&1)){
			++ans;
			continue;
		}
	}

	if(i >= n - zero){
		if((i&1) == ((n-zero)&1)){
			++ans;
			continue;
		}
	}
}

cout << ans << endl;
 

return 0;    
}



signed main()
{       

 #ifndef ONLINE_JUDGE
 // freopen("input.txt", "r" , stdin);
 // freopen("output.txt", "w", stdout);    
 // freopen("error.txt" , "w", stderr);                              
 #endif

ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0); 

solve1();

int t=1,k=1;                                     
cin>>t;

while(t--)
{
 
 // cout<<"Case #"<<k++<<": ";
 solve();
 // cout<<endl;
}
return 0;
}   