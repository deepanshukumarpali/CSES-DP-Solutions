#include<bits/stdc++.h>
//typedef long long int ll;
using namespace std;
using ll = long long;
using ld = long double;
using Vc = vector <char>;
using Vs = vector <string>;
using Vll = vector <ll>;
using Vi = vector <int>;
using Sll = set <ll>;
using Ss = set <string>;
using Sc = set <char>;
using Si = set <int>;
using MiVi = map<int,Vi>;
using MllVll = map<ll,Vll>;
using Mllll = map<ll,ll>;
using Mii = map<int,int>;
using MllSll = map<ll,Sll>;
using Mlls = map<ll,string>;
using Pllll = pair<ll,ll>;
using Pii = pair<int,int>;
 
 
#define nl cout<<endl
#define ns cout<<" "
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL)
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(int i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back
 
 
template<class T>
T gcd(T a,T b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
      
}
ll bigmod(ll a, ll b, ll c)
{
    if(b==0) return 1;
    
    if(b%2==0)
    {
        ll x=bigmod(a,b/2,c);
        return (x*x)%c;
    }
    else return (a%c * bigmod(a,b-1,c))%c;
}
 
void vsInput()
{
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
}
template<class T1,class T2>
T2 sum(T1 a,T2 ans){ans=0;forAuto(i,a)ans+=i;return ans;}
 
template<class T>
void printC(T a){forAuto(i,a)cout<<i<<" ";cout<<endl;}
 
template<class T1,class T2>
void printP(pair<T1,T2> i){cout<<"{"<<i.first<<",";cout<<i.second<<"} ";}
 
template<class T1,class T2>
void printG(map<T1,T2> a){forAuto(i,a){cout<<i.first<<" -> ";printC(i.second);}}
 
template<class T1,class T2>
void printWG(map<T1,T2> a){forAuto(i,a){cout<<i.first<<" -> ";forAuto(j,i.second)printP(j);nl;}}
 
void value() {}
template <class T1, class... T2>
void value(T1& var1, T2&... var2) { cin>>var1; value(var2...); }
 
void print() {}
template <class T1, class... T2>
constexpr void print(const T1& var1, const T2& ... var2) { cout<<var1;ns; print(var2...); }
 
 
template<class T1,class T2>
void printM(map<T1,T2> a){forAuto(i,a){cout<<i.first<<" -> ";cout<<i.second; nl;}}
 
Vll Vinput(ll n){Vll a;forRange(i,0,n){ll x;cin>>x;a.append(x);}return a;}
 
bool cmp(const ll &a, const ll &b)
{ return a<b; }
 
 
#define CPN 700007
#define M 1000000007
//const int inf=1e18+5;
 
 
//----------------------------CODE----------------------------//
 
 
 
 
 
void code()
{
    ll r,c;
    cin>>r>>c;
    
    ll dp[r+1][c+1];
    forRange(i,1,r+1)
    forRange(j,1,c+1)
    {
        dp[i][j]=INT_MAX;
    }
    
    
    
    forRange(i,1,r+1)
    forRange(j,1,c+1)
    {
        if(i==j)
            dp[i][j]=0;
        else
        {
            
            forRange(k,1,i/2+1)
            dp[i][j]=min(dp[i-k][j]+1+dp[k][j],dp[i][j]);
            
            forRange(k,1,j/2+1)
            dp[i][j]=min(dp[i][j-k]+1+dp[i][k],dp[i][j]);
            
        }
        
        //print(i,j,dp[i][j]);nl;
    }
    
    print(dp[r][c]);
}
 
 
 
 
 
 
 
 
 
 
//--------------------------------END-----------------------------//
int main()
{
    //vsInput();
    
    fast;
    ll t=1;
    
    //cout << fixed << setprecision(10);
    
    //cin>>t;
    
    while(t)
    {
        t--;
        code();
    }
 
    return 0;
}
