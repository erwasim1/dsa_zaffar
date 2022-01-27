#include<iostream>
using namespace std;

bool checkpalindrome(string &str,int i,int j){
    if(i>j)return true;;

    if(str[i]!=str[j])return false;
    else{
        return checkpalindrome(str,i+1,j-1);
    }
}

int main(){
    string name="abba";
    cout<<endl;

    bool ispalindrome = checkpalindrome(name, 0 ,name.length()-1 );

    if(ispalindrome){
        cout<<"this is a palindrome";
    }
    else{
        cout<<"This is not a palindrome";
    }
}