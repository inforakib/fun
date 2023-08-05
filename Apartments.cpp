// start the name of ALLAH
// EDIT FUN FUN CODE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const  ll mod=1e9+7;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
ll t=1;

//cin>>t;

while(t--)
{
ll n,m,k;
cin>>n>>m>>k;
ll ar[n];
for(ll i=0;i<n;i++)
{
cin>>ar[i];
}
ll br[n];
for(ll i=0;i<m;i++)
{
cin>>br[i];
}
sort(ar,ar+n);
sort(br,br+m);
//for(auto d:ar)
//{
//    cout<<d<<" ";
//}
//cout<<endl;
//for(auto d:br)
//{
//    cout<<d<<" ";
//}
//cout<<endl;
ll i,j;
ll cnt=0;
for(i=0,j=0;i<n,j<m;)
{
    if((br[j]<=(ar[i]+k))&&br[j]>=(ar[i]-k)&&i<n&&j<m)
    {
        cnt++;
        i++;
        j++;
    }
    else if(br[j]>(ar[i]+k))
    {
        i++;
    }
    else j++;
}
cout<<cnt<<endl;

}


}
