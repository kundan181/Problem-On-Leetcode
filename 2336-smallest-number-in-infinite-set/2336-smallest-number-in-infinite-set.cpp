class SmallestInfiniteSet {
public:
    set<int> S;
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1005; i++) {
            S.insert(i);
        }
    }
    
    int popSmallest() {
        int at = *S.begin();
        S.erase(at);
        return at;
    }
    
    void addBack(int num) {
        S.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */