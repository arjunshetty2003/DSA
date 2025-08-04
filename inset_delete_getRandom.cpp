class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    unordered_map<int, int> hashMap;
    vector<int> arr;
    bool insert(int val) {
        auto it = hashMap.find(val);
        if (it != hashMap.end())
           return false;
        arr.push_back(val);
        hashMap[val] = arr.size()-1;
        return true;
    }
    
    bool remove(int val) {
        auto it = hashMap.find(val);
        if (it == hashMap.end())
           return false;
        
        int index = it->second;
        int lastElement = arr.back();
        
        arr[index] = lastElement;
        hashMap[lastElement] = index;

        arr.pop_back();
        hashMap.erase(val);
        return true;
    }
    
    int getRandom() {
        if (arr.empty())
           return -1;
        int idx = rand()%arr.size();
        return arr[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
