class MyHashMap {
private:
    int SIZE = 100;
    vector<list<pair<int, int>>> buckets;
    
    // Hash function
    int hash(int key) {
        return key % SIZE;
    }
    
public:
    MyHashMap() {
        buckets.resize(SIZE);
    }
    
    void put(int key, int value) {
        int index = hash(key);
        
        // Check if key already exists
        for (auto& it : buckets[index]) {
            if (it.first == key) {
                it.second = value;
                return;
            }
        }
        
        // If key not found, insert a new pair
        buckets[index].push_back({key, value});
    }
    
    int get(int key) {
        int index = hash(key);
        
        // Search for the key in the bucket
        for (const auto& it : buckets[index]) {
            if (it.first == key) {
                return it.second;
            }
        }
        
        return -1; // Key not found
    }
    
    void remove(int key) {
        int index = hash(key);
        
        // Search for the key and remove it
        for (auto it = buckets[index].begin(); it != buckets[index].end(); ++it) {
            if (it->first == key) {
                buckets[index].erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
