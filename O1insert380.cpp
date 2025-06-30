class RandomizedSet {
private:
    unordered_map<int, int>hash;
    vector<int>arr;
public:
    RandomizedSet() {

    }

    bool insert(int val) {
        auto i = hash.find(val);
        if (i != hash.end()) return false;
        arr.push_back(val);
        hash[val] = arr.size() - 1;
        return true;
    }

    bool remove(int val) {
        auto i = hash.find(val);
        if (i == hash.end())return false;
        int curPos = hash[val];
        int lastPos = arr.size() - 1;
        arr[curPos] = arr[lastPos];
        arr.pop_back();
        hash[arr[curPos]] = curPos;
        hash.erase(val);
        return true;
    }

    int getRandom() {
        int s = arr.size();
        int randpos = rand() % s;
        return arr[randpos];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */