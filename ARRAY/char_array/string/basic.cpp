#include<iostream>
#include<algorithm>
using namespace std;

char tolowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool palindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(tolowerCase(name[s]) != tolowerCase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[],int len){
    int s=0;
    int e=len-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getcount(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}


int main(){
    char name[10];
    cout<<"Enter ur Name"<<endl;
    cin>>name;
   // cout<<name;
    int leng=getcount(name);

    cout<<"Length of the string is "<<getcount(name);
    cout<<endl;
    reverse(name,leng);
    cout<<"Reverse of string is"<<name;
    cout<<endl;
    cout<<"PALINDROME OR NOT "<<palindrome(name,leng);

    
}
