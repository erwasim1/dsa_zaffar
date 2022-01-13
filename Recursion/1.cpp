#include<iostream>
using namespace std;

/*
int main(){
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    int ascii=int(ch);
    if(ascii>=65 && ascii<=95){
        cout<<ch<<" "<<" is capital"<<endl;

    }
    else if(ascii>=97 && ascii<=122){
        cout<<ch <<" "<<"is small"<<endl;
    }
    else if(ascii>=48 && ascii<=57){
        cout<<ch<<" "<<"is Number";

    }
    else{
        cout<<"Invalid Number";
    }
    return 0;
}
*/
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=2;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;
    return 0;
}