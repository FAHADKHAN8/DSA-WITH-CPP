#include<iostream>
using namespace std;
int main (){
// arithmetic operators
int a,b;
cout<<"enter a "<<endl;
cin>>a;
cout<<"enter b "<<endl;
cin>>b;

cout<<"sum= "<<(a+b)<<endl;
cout<<"difference= "<<(a-b)<<endl;
cout<<"prouct= "<<(a*b)<<endl;
cout<<"division= "<<(a/double(b))<<endl;
cout<<"modulo= "<<(a%b)<<endl;

// relational operator-return 0,1
cout<<(3<5)<<endl;
cout<<(3>5)<<endl;

// logical operaror
cout<<!(3<5)<<endl;
cout<<((3<5) || (3>5))<<endl;
cout<<((3<5) && (3>1))<<endl;

// unary oprators-increment , decrement 
int c =10;


int d=c++;// pehle kaam , then update hoga a 

cout<<c<<endl;
cout<<d<<endl;

int e= 10;
int f=++e; // pehle update hoga, then kaam hoga

cout<<e<<endl;
cout<<f<<endl;


    return 0;
}