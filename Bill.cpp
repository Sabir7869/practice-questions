#include<bits/stdc++.h>
using namespace std;
 int main()
{
    float pencil,pen,eraser;
    cout<<"Enter the value of pencil,pen,eraser: ";
    cin>>pencil>>pen>>eraser;
    float total=pen+pencil+eraser;
    float gst=total*0.18;
    cout<<"Final bill is: "<<total+gst;
return 0;

}