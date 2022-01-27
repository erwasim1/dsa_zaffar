50. Pow(x, n)
Medium

3765

4859

Add to List

Share
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25


/*
	Time Complexity  : O(N)
	Space Complexity : O(1)

	Where 'N' is the number given in the problem.
*/

int modularExponentiation(int x, int n, int m) {
	// Declare a variable to store our result and initialize it with 1.
	int answer = 1;

	// Iterating 'N' times.
	for (int i = 1; i <= n; i++) {
		// Multiply answer with 'X' and then do modulo with 'M'.
		answer = (1LL * answer * x) % m;
	}
	// Return the answer.
	return answer;
}


// optimized way

/*	Time Complexity  :  O(log n)
	Space Complexity : O(1)

    */

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long nn=n;
        
        if(nn<0)nn=-1*nn;
        
        while(nn>0){
            if(nn%2){
                ans=ans*x;
                nn=nn-1;
            }else{
                x=x*x;
                nn=nn/2;
            }
        }
        
        if(n<0) ans=(double) (1.0)/(double) (ans);
        return ans;
    }
};