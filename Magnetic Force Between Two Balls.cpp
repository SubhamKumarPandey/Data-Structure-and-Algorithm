class Solution {
public:
    bool ispossible(vector<int>& position, int m, int mid){
        int l1=1;
        int l2=position[0];
        for(int i=0;i<position.size();i++){
            if(position[i]-l2>=mid){
                l1++;
                if(l1==m){
                    return true;
                }
                l2=position[i];
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int s=0;
        int maxi=-1;
        for(int i=0;i<position.size();i++){
            maxi=max(maxi,position[i]);
        }
        int e=maxi;
        int ans=0;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(ispossible(position,m,mid)){
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
};
