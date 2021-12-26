#include<iostream>
#include<queue>
using namespace std;
int main(){


    //max heap
    priority_queue<int>maxi;

    //min heap
    priority_queue<int ,vector<int> ,greater<int> >mini;

    maxi.push(1);
        maxi.push(0);
            maxi.push(4);
                maxi.push(6);

    int n=maxi.size();

                for(int i=0;i<n;i++){
                    cout<<maxi.top()<<endl;
                    maxi.pop();
                }
   
//min heap
 mini.push(7);
        mini.push(0);
            mini.push(9);
                mini.push(6);

    int m=mini.size();

                for(int i=0;i<m;i++){
                    cout<<mini.top()<<endl;
                    mini.pop();
                }



}