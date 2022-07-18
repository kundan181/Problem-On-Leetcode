class MyLinkedList {
    public:
    int val;
    MyLinkedList* next;
    MyLinkedList* head;
    MyLinkedList* tail;
    int size;
    
    MyLinkedList() {
        head = tail = NULL;
        size = 0;
    }
    
    MyLinkedList(int v) {
        val = v;
        next = NULL;
    }
    
    MyLinkedList(int v,MyLinkedList* nxt) {
        val = v;
        next = nxt;
    }
    
    int get(int ind) {
        if(size == 0) return -1;
        if(ind == 0) return head->val;
        if(ind == size-1) return tail->val;
        int i = 0;
        MyLinkedList* ptr = head;
        while(ptr != NULL && ind != i++)
            ptr = ptr->next;
        if(ptr == NULL) return -1;
        return ptr->val;
    }
    
    void addAtHead(int val) {
        if(head == NULL){
            head = new MyLinkedList(val);
            tail = head;
        }else{
            MyLinkedList* n = new MyLinkedList(val,head);
            head = n;
        }
        size++;
    }
    
    void addAtTail(int val) {
        if(tail == NULL){
            head = new MyLinkedList(val);
            tail = head;
        }else{
            tail->next = new MyLinkedList(val);
            tail = tail->next;
        }
        size++;
    }
    
    void addAtIndex(int ind, int val) {
        if(ind == 0){ addAtHead(val); return;}
        if(ind == size){ addAtTail(val); return;}
        if(ind > size) return;
        int i = 0;
        MyLinkedList* ptr = head;
        while(ind-1 != i++)
            ptr = ptr->next;
        ptr->next = new MyLinkedList(val,ptr->next);
        size++;
    }
    
    void deleteAtIndex(int ind) {
        if(ind > size-1) return;
        if(ind == 0){ 
            MyLinkedList* t = head->next;
            delete(head);
            head = t;
        }else{
           MyLinkedList* ptr = head;
            int i=0;
            while(ind-1 != i++)
                ptr = ptr->next;
            MyLinkedList* t = ptr->next;
            if(t == tail) tail = ptr;
            ptr->next = ptr->next->next;
            delete t;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */