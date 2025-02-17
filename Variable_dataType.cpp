// preprocessor directive
#include<iostream>
using namespace std;

//starting point of execution
int main (){
    cout<<"Mohammad Fahad Khan"<<endl;
    cout<<"Mohammad Fahad Khan\n using backslash n\n";

    int Age;
    cout<<"Enter the age ";
    cin>>Age;
    cout<<"your age is "<<Age<<endl;

    // primitive data types and their sizes are givern below:
   int age=25;
   cout<<sizeof(age)<<endl;

   char grade='A';
   cout<<grade<<'\n';
   cout<<sizeof(grade)<<endl;

   float PI=3.14f;
   cout<<PI <<" "<<sizeof(PI)<<endl;

   bool isSafe=true;
   //true=1, false=-0
   cout<<isSafe<<" "<<sizeof(isSafe)<<endl;

   double price=100.99;
   cout<<price<<" "<<sizeof(price)<<endl;

    return 0;
}
