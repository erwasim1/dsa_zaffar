//APPROACH 1

/*
    Time Complexity: O(N^2)
    Space Complexity: O(1)

    Where N is the size of the array.
*/

int maximumProfit(vector<int> &prices){

    // Variable to store the maximum profit.
    int maxProfit = 0;
    int n = prices.size();
    
    // Iterating over the array for the buying price.
    for(int i = 0;i < n - 1 ; i++){

        /*
            Variables to store current buying price and 
            maximum profit for if we buy stock at this minute.
        */
        int buy = prices[i], curMaxProfit = 0;

        /*
            Iterating over the next minutes for selling price,
            and storing the maximum profit we can get in curMaxProfit.
        */
        for(int j = i + 1; j < n; j++){
            curMaxProfit = max(curMaxProfit, (prices[j] - buy) );
        }

        /*
            Taking the maximum of all the curMaxProfit and 
            storing it in the maxProfit variable.
        */
        maxProfit = max(maxProfit, curMaxProfit);
    }

    return maxProfit;
}

//approach 2
/*
    Time Complexity: O(N)
    Space Complexity: O(1)

    Where N is the size of the array.
*/

int maximumProfit(vector<int> &prices){

    // Variables to store the buying price and maximum profit
    int buy = prices[0],maxProfit = 0;
    int n = prices.size();

    // Iterating over the array
    for(int i = 1; i < n; i++){

        /*
            If current price is less than buying price
            we will update buying price as the current price.
        */
        if(prices[i] < buy){
            buy = prices[i];
        }

        /*
            Else if selling at this price is more profitable,
            then we will update out maximum profit.
        */
        else if( (prices[i] - buy) > maxProfit){
            maxProfit = prices[i] - buy;
        }
    }
    return maxProfit;
}