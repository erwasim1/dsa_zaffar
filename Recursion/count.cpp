#include<iostream>
using namespace std;

void print(int n){
    if(n==0)return;
  print(n-1);//head recursion
    cout<<n<<endl;
   // print(n-1);//tail recursion
}

int main()
{
    int n;
    cin>>n;
    print(n);
}