#include<iostream>
using namespace std;
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"@";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/* 111
   222
   333

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/* 1234
   1234
   1234
   1234
   
  int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }

  }

  */
 /*
 4321
 4321
 4321
 4321
 
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

int main(){
    int i=1;
    int n;
    int count=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

*/

/*
      *
      **
      ***
      ****

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
*/
/* 1
   2 3
   4 5 6

   
  int main(){
      int n;
      cin>>n;
      int row=1;
      int count=1;
      while(row<=n){
          int col=1;
          while(col<=row){
              cout<<count<<" ";
              count=count+1;
              col=col+1;
          }
          cout<<endl;
          row=row+1;

      }
  }
  */
 /*
  1 
  2 3
  3 4 5
  5 6 7 8
  
 int main(){
     int n;
     cin>>n;
     int row=1;
     
     while(row<=n){
         int col=1;
        int value=1;
        while(col<=row){
            cout<<value<<" ";
            value=value+1;
            col=col+1;
            
        }
        cout<<endl;
        row=row+1;

     }
 }
 */
/* 1
   2 1
   3 2 1
   4 3 2 1
   
  int main(){
      int n;
      cin>>n;
      int row=1;
      while(row<=n){
          int col=1;
          while(col<=row){
              cout<<row-col+1<<" ";
              col=col+1;

          }
          cout<<endl;
          row=row+1;

      }
  }
  */
 /* A A A A
    B B B B
    C C C C
    D D D D
    
   int main(){
       int n;
       cin>>n;
       int i=1;
       while(i<=n){
           int j=1;
           while(j<=n){
               char ch='A'+i-1;
               cout<<ch<<" ";
               j=j+1;
           }
           cout<<endl;
           i=i+1;
       }
   }
   */
  /* A B C
     A B C
     A B C

   int main(){
       int n;
       cin>>n;
       int i=1;
       while(i<=n){
           int j=1;
           while(j<=n){
               char ch='A'+j-1;
               cout<<ch<<" ";
               j=j+1;
           }
           cout<<endl;
           i=i+1;
       }
   }
   */
  /*
   A B C D 
E F G H
I J K L
M N O P

  int main(){
      int n;
      cin>>n;
      int i=1;
        char val='A';
      while(i<=n){
          int j=1;
        
          while(j<=n){
              cout<<val<<" ";
             
              val=val+1;
               j=j+1;
              
          }
          cout<<endl;
          i=i+1;
      }
  }
  */
 /* 
 A B C 
 B C D
 C D E
  int main(){
      int n;
      cin>>n;
      int i=1;
       
      while(i<=n){
          int j=1;
          char val='A'+i+j-2;
          while(j<=n){
              cout<<val<<" ";
              
              val=val+1;
               j=j+1;
              
          }
          cout<<endl;
          i=i+1;
      }
  }
  */
  /*
  A
  B C
  c D E
  D E F G
  
  int main(){
      int n;
      cin>>n;
      int i=1;
       
      while(i<=n){
          int j=1;
          char val='A'+i+j-2;
          while(j<=i){
              cout<<val<<" ";
              
              val=val+1;
               j=j+1;
              
          }
          cout<<endl;
          i=i+1;
      }
  }
  */
   /* 3
    A 
    B B
    C C C
  int main(){
      int n;
      cin>>n;
      int i=1;
       
      while(i<=n){
          int j=1;
         
          while(j<=i){
               char val='A'+i-1;
              cout<<val<<" ";
              
              val=val+1;
               j=j+1;
              
          }
          cout<<endl;
          i=i+1;
      }
  }
*/
/*
 D 
 C D
 B C D 
 A B C D
 
int main(){
      int n;
      cin>>n;
      int i=1;
       
      while(i<=n){
          int j=1;
          char val='A'+n-i;
          while(j<=i){
              
              cout<<val<<" ";
              
              val=val+1;
               j=j+1;
              
          }
          cout<<endl;
          i=i+1;
      }
  }
*/ 
/*
     *
    **
   ***
  ****
  
 int main(){
     int n;
     cin>>n;
     int row=1;
     
     while(row<=n){
         int space=n-row;
     while(space){
         cout<<" ";
         space=space-1;

     }
     int col=1;
     while(col<=row){
         cout<<"*";
         col=col+1;
     }
     cout<<endl;
     row=row+1;
 }
 }
 */
/*
   3
***
**
*

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        
        int star=n-row+1;
        while(star){
            cout<<"*";
            star=star-1;

        }
        cout<<endl;
        row=row+1;
    }
}

*/
/*  4
****
 ***
  **
   *
int main(){
     int n;
     cin>>n;
     int row=1;
     
     while(row<=n){
         int space=row-1;
     while(space){
         cout<<" ";
         space=space-1;

     }
     
     int star=n-row+1;
     while(star){
         cout<<"*";
         star=star-1;
     }
     cout<<endl;
     row=row+1;
 }
}
*/

/* 4
1111
 222
  33
   4

int main(){
     int n;
     cin>>n;
     int row=1;
     
     while(row<=n){
         int space=row-1;
     while(space){
         cout<<" ";
         space=space-1;

     }
     
     int star=n-row+1;
     while(star){
         cout<<row;
         star=star-1;
     }
     cout<<endl;
     row=row+1;
 }
}
*/
/* 4
   1
  22
 333
4444
*/
/*
 4
   1
  22
 333
4444
 int main(){
     int n;
     cin>>n;
     int row=1;
     
     while(row<=n){
         int space=n-row;
     while(space){
         cout<<" ";
         space=space-1;

     }
     int col=1;
     while(col<=row){
         cout<<row;
         col=col+1;
     }
     cout<<endl;
     row=row+1;
 }
 }
 */
  /*
     4
   1
  23
 456
78910 

 int main(){
     int n;
     cin>>n;
     int row=1;
     int count=1;
     
     while(row<=n){
         int space=n-row;
     while(space){
         cout<<" ";
         space=space-1;

     }
     int col=1;
     while(col<=row){
         cout<<count;
         count=count+1;
         col=col+1;
     }
     cout<<endl;
     row=row+1;
 }
 }
 */

int main(){
     int n;
     cin>>n;
     int row=1;
     int count;
     
     while(row<=n){
         int space=row-1;
     while(space){
         cout<<" ";
         space=space-1;

     }
     int col=1;
     while(col<=row){
         cout<<col;
         col=col+1;
     }
     
     
     cout<<endl;
     row=row+1;
 }
}
