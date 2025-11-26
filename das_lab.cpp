#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
if (a > b && a > c){
cout<<" greatest is "<<a;
}else if (b > a&& b > c)
cout<<"greatest is"<<b;
else{ 
cout<<" greatest is "<<c;
return (0);
}
}