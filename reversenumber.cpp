#include<bits/stdc++.h>
using namespace std;
long int reverse(int n){
    long rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(INT_MAX < rev || INT_MIN  > rev){
        return 0;
    }
    return rev;
}
 int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is: "<<reverse(n);
return 0;
}