/* //APPROACH 1

	Time complexity: O(N * log(N)) 
	Space complexity: O(1)
	
	Where N is the length of the array.

*/

#include<algorithm>

int findDuplicate(vector<int> &arr, int n)
{
    
    // Sort the elements of the array.
    sort(arr.begin(), arr.end());

    // Traverse through the array to check if two consecutive elements are equal.
    for(int i = 0; i < n - 1; i++)
    {

        // Duplicate element found.
        if(arr[i] == arr[i+1]) 
        {

            // Return the duplicate element.
            return arr[i];
        }
    }
    return -1;
}


//approach 2
/*

	Time complexity: O(N * log(N)) 
	Space complexity: O(1)
	
	Where N is the length of the array.

*/

int findDuplicate(vector<int> &arr, int n)
{

    // Initialise low and high pointers.
    int low = 1, high = n;

    // Find mid.
    while(low < high)
    {

        // Initialise mid element.
        int mid = low + (high - low) / 2;

        // Initialise count variable to count number of elements less than mid.
        int count = 0;

        // Count the number of elements smaller / equal to mid element.
        for(int i = 0; i < n; i++)
        {
            if(arr[i] <= mid)
            {
                count++;
            }
        }

        // Duplicate element is on left side of mid hence high = mid.
        if(count > mid)
        {
            high = mid;
        }

        // Duplicate element is on the right side of mid hence low = mid + 1.
        else
        { 
           low = mid + 1;
        }
    }

    return low;
}

//APROACH 3
/*

	Time complexity: O(N) 
	Space complexity: O(N)
	
	Where N is the length of the array.

*/

int findDuplicate(vector<int> &arr, int n)
{

    // Create an unordered set to store each element.
    unordered_set<int> uset;

    // For each value of array perform.
    for (int i : arr) 
    {

        // Check if current element is already present.
        if (uset.find(i) != uset.end()) 
        {

            // If present return this repeated element.
            return i;
        }
        else
        {

            // If element not found, insert it into the set.
            uset.insert(i);
        }
    }

    return -1;
}
