class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0;
        int numBoats=0;
        int r=people.size()-1;
        while(l<=r){
            if(people[r] + people[l] > limit){
                numBoats++;
                r--;
                continue;
            }
            else{
                numBoats++;
                l++;
                r--;
            }
        }
        return numBoats;
    }
};