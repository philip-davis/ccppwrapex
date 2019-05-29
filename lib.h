using namespace std;

class AB {
    public:
        static AB *instance();
        virtual void f() = 0;
    protected:
        static AB *m_inst;
};

class A : public AB {
    public:
        A();
        virtual void f();
};

class B : public AB {
    public:
        B();
        virtual void f();
};

