#ifndef STACK_H
#define STACK_H

constexpr int MAX_N = 10000;

class stack {
private:
    int m_data[MAX_N];
    int m_top;
    int m_capacity;

public:
    stack(int capacity) : m_capacity(capacity), m_top(-1) {};
    
    void push(int element);
    int pop();
    int size();
    int empty();
    int top();
};

#endif