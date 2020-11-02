#include<bits/stdc++.h>
//typedef long long int ll;
using namespace std;
using ll = long long int;
using ld = long double;
using Vc = vector <char>;
using Vs = vector <string>;
using Vll = vector <ll>;
using VVll = vector<vector<ll>>;
using Vld = vector <ld>;
using Vi = vector <int>;
using Sll = set <ll>;
using Sld = set <ld>;
using Ss = set <string>;
using Sc = set <char>;
using Si = set <int>;
using MiVi = map<int,Vi>;
using MllVll = map<ll,Vll>;
using UMllVll = unordered_map<ll,Vll>;
using Mllll = map<ll,ll>;
using UMllll = unordered_map<ll,ll>;
using Mii = map<int,int>;
using MllSll = map<ll,Sll>;
using UMllSll = unordered_map<ll,Sll>;
using Mlls = map<ll,string>;
using Pllll = pair<ll,ll>;
using Pii = pair<int,int>;
using SPllll = set<Pllll>;
 
#define nl cout<<endl
#define ns cout<<" "
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL)
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back
#define mp make_pair
 
template<class T>
T GCD(T a,T b)
{
 if (b == 0)
     return a;
 return GCD(b, a % b);
   
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
 
void Value() {}
template <class T1, class... T2>
void Value(T1& var1, T2&... var2) { cin>>var1; Value(var2...); }
 
void print() {}
template <class T1, class... T2>
constexpr void print(const T1& var1, const T2& ... var2) { cout<<var1;ns; print(var2...); }
 
 
template<class T1,class T2>
void printM(map<T1,T2> a){forAuto(i,a){cout<<i.first<<" -> ";cout<<i.second; nl;}}
 
template<class T>
vector<T> Vinput(T n){ vector<T> a;forRange(i,0,n){T x;cin>>x;a.append(x);}return a;}
 
bool cmp(const ll &a, const ll &b)
{ return a<b; }
 
 
#define CPN 200005
ll M=1000000007;
//const ll inf=1e18;
 
//----------------------------CODE----------------------------/
ll n;
Vll a;
ll dp[5005][5005][2];
 
ll Answer(ll l,ll r,ll first)
{
    if(l>r) return 0;
    if(dp[l][r][first]!=-1) return dp[l][r][first];
    
    ll ans;
    
    if(first) ans=max(a[l]+Answer(l+1,r,first^1),a[r]+Answer(l,r-1,first^1));
    else ans=min(Answer(l+1,r,first^1),Answer(l,r-1,first^1));
    
    return dp[l][r][first]=ans;
}
 
void code()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    a=Vinput(n);
    
    print(Answer(0,n-1,1));
    
}
    
 
 
 
 
 
 
 
 
 
 
//--------------------------------END-----------------------------//
int main()
{
    fast;
    ll t=1;
 
//    vsInput();
//    cin>>t;
//    clock_t tot = clock();
//    cin.ignore();
//    cout << fixed << setprecision(9);
 
 
    forRange(c,1,t+1)
    {
//        cout<<"Case #"<<c<<':';ns;
        code();
    }
    
    
//    nl;nl;print("Total Time:", (double)(clock()-tot)/CLOCKS_PER_SEC);nl;
    return 0;
}
 
//  CHECK BEFORE YOU SUBMIT !!!!
 
//  1) Integer overflow? Any maths computaion? MinMax ?
//  2) RTE? Pointer? Erase? Find?
//  3) Precision?
//  4) Use inf(1e18) not LONG_MAX
//  5) Dont't use both scanf and cin
//  6) Use UMll not Mll
 
