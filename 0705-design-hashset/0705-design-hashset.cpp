class MyHashSet {
public:
    vector<int> v;
    int i=0;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(contains(key)){
            return;
        }
        v.push_back(key);
    }
    
    void remove(int key) {
        for(auto it= v.begin() ; it!=v.end() ; it++){
            if(*it == key){
               v.erase(it);
               return;
            }
        }
    }
    
    bool contains(int key) {
        for(int j =0; j< v.size() ;j++){
            if(v[j]==key){
                return true;
            }
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