#include<iostream>
using namespace std;

void nhiphan(int n){
if(n==0){
return;
}
nhiphan(n/2);
cout<<n%2;
}

int main(){
int n;
cout<<"Nhap n: ";
cin>>n;
cout<<"So nhi phan la: ";
nhiphan(n);
cout<<endl;
return 0;
}
