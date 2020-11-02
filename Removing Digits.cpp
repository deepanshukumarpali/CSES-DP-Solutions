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
template<class T1>
ll sum(T1 a){ll ans=0;forAuto(i,a)ans+=i;return ans;}
 
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
const int inf=1e18+5;
 
 
//----------------------------CODE----------------------------//
 
 
void code()
{
    ll n;
    value(n);
    
    ll dp[n+1];
    memset(dp,CPN, sizeof(dp));
    dp[0]=0;
    
    forRange(i,1,n+1)
    {
        ll k=i;
        while(k>0)
        {
            dp[i]=min(dp[i],dp[i-k%10]+1);
            k/=10;
        }
    }
    
    print(dp[n]);
    
    
}
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//--------------------------------END-----------------------------//
int main()
{
    fast;
    ll t=1;
    //vsInput();
    
    
    cout << fixed << setprecision(10);
   //cin>>t;
    
    
    while(t) {
        t--;
        code();
    }
 
    return 0;
}
