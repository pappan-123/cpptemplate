#include<bits/stdc++.h>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define rev_rep(i,a,b) for(long long int i=a;i>b;i--)
#define mod 1000000007
#define bpc(x) __builtin_popcount(x) // used to count no of 1 in binary representation
#define bpcll(x) __builtin_popcountll(x) 
#define ctz(x) __builtin_ctz(x)  // used to count trailing zeros
#define ull unsigned long long int
using namespace std;
typedef long long ll;

//gcd(a,b) = gcd(a,a%b) 
//if a number 'x' is powewr of two, then (x)&(x-1)==0;
// for vector and array, lower bound is - 
// auto it = lower_bound(a.begin(),a.end(),element);
// for set - lower_bound will be -> s.lower_bound(element);

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
int decimalToBinary(int N)
{
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }
 
    return B_Number;
}
int main()    
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    



    return 0;
}
