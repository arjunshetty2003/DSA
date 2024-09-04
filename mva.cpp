//Hashmap 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        for (int i=0; i<nums.size(); i++) {
            if (freq.find(nums[i]) == freq.end()) {
                freq[nums[i]] = 1;
            }
            else {
                freq[nums[i]]++;
            }
        }
        auto it = freq.begin();
        while ( it != freq.end()) {
            if (it->second > nums.size()/2) {
                return it->first;
            }
            it++;
        }
        return -1;
    }
};
//Optimised Solution
//Moore's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i = 1;
        int ref = nums[0];
        int count = 1;
        for (i; i<nums.size(); i++) {
            if (count > 0) {
                if (nums[i] == ref) {
                    count++;
                }
                else {
                    count--;
                }
            }
            else {
                ref = nums[i];
                count = 1;
            }
        }
        return ref;
    }
};
