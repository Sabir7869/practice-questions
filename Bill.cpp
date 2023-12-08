#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int pencil,pen,eraser;
    cout<<"Enter the value of pencil,pen,eraser: ";
    cin>>pencil>>pen>>eraser;
    int total=pen+pencil+eraser;
    int gst=total*0.18;
    cout<<"Final bill is: "<<total+gst;
return 0;

}