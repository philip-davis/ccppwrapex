#include "lib.h"
#include<iostream>

using namespace std;

AB *AB::m_inst = 0;

A::A() {
    m_inst = this;
}
        
void A::f() {
    cout << "A" << endl;
}

B::B() {
    m_inst = this;
}
        
void B::f() {
    cout << "B" << endl;
}
