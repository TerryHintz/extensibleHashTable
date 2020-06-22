class Bucket {
    public:
        Bucket();
        Bucket(int);
        bool find(int);
        void insert(int);
        bool remove(int);
        void print();

        bool isFull();
        // bool isEmpty();
        bool isSame();

        ~Bucket();

        int * arr;
        int localDepth;
        int size;
        int count;
        
    private:
        
};