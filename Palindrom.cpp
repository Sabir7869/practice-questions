#include<bits/stdc++.h>
using namespace std;
bool checkPalindrom(int n){
 int temp=n;
    int reverse=0;
    while(temp>0)
    {
        int lastDigit=temp%10;
        reverse=reverse*10+lastDigit;
        temp/=10;
    }
    if(reverse==n)
    {
        return true;
    }
    else
    {
     return false;
    }
}
 int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
   if(checkPalindrom(number)){
    cout<<number<<" number is palindrom "<<endl;
   }
   else{
    cout<<number<<" Not a  palindrom"<<endl;
   }
return 0;
}