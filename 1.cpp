#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the first number : \n";
    cin>>x;
    int y,m;
    cout<<"Enter the second number and its modulus : ";
    cin>>y>>m;
    int z;
    z=(x*y)%m;
    cout<<z;

}