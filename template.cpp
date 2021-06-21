#include<bits/stdc++.h>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define rev_rep(i,a,b) for(long long int i=a;i>b;i--)
#define mod 1000000007
using namespace std;
typedef long long ll;

//gcd(a,b) = gcd(a,a%b) 
//if a number 'x' is powewr of two, then (x)&(x-1)==0;

int kadens_algorithm(vector<int> arr){
  
    int n = arr.size();
    int current=0,global=0;
    for(int i=0;i<n;i++){
        current=current+arr[i];
        if(current>global)
        global=current;
        if(current<0)
        current=0;
    }
    return global;
}

int even_odd_check(int n)
{
    //odd - return 1
    //even - return 0

    if(n&1)
    return 1;
    else
    return 0;
}
void printBinary(int n)
{
    rev_rep(i,10,-1)
    {
        cout<<((n>>i) & i);
    }
    cout<<"\n";
}
int main()    
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    



    return 0;
}
