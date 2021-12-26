Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 //Ruby Sieve of Eratosthenes 
 //
     int countPrimes(int n) {
        
        int cnt=0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        
        for(int i=2;i<n;i++){
            if(prime[i]){
                cnt++;
                for(int j=i*2;j<n;j=j+i){
                    prime[j]=0;
                }
            }
        }
        return cnt;
    }

    //checking prime
    bool isprime(int n){
        if(n<=1)
        return false;
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }