#include<iostream>
using namespace std;
int main (){
// typecasting- 1. type conversion -done implicitly by the compiler -small data type ->big data type
char grade='A';
cout<<grade<<endl;
int value=grade;
cout<<value<<endl;

// 2. typecasting-explicitly done by programmer , big data type->small data type
double price=100.99;
cout<<price<<" "<<sizeof(price)<<endl;
int newprice=int(price);
cout<<newprice<<" "<<sizeof(newprice)<<endl;

    return 0;
}