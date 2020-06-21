class Bucket {
    public:
        Bucket();
        Bucket(int);
        bool find(int);
        void insert(int);
        bool remove(int);
        void print();

        bool isFull();

        int * arr;
        int localDepth;
        int size;
        int count;
        
    private:
        
};