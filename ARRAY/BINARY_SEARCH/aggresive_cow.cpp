//Que link -> https://bit.ly/3dkuQ2B 




bool ispossible(vector<int> &stalls, int k,int mid){
    int lastpos=stalls[0];
    int cowcount=1;
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastpos >= mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos=stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
        
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}


