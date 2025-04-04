class MyHashSet {
public:
    int arr[100001];
    MyHashSet() {
    }
    
    void add(int key) {
        int indx = key% 100001;
        arr[indx]=key;

    }    
    void remove(int key) {
        int indx = key% 100001;
        arr[indx] = -1;
        
    }
    
    bool contains(int key) {
        int indx = key% 100001;
        if(arr[indx]==key){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
