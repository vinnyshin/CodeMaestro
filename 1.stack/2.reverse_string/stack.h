#include <iostream>

#ifndef STACK_H
#define STACK_H

constexpr size_t MAX_N = 20;

template <typename stack_value_type>
class stack {
private:
    stack_value_type m_data[MAX_N];
    int m_top;
    size_t m_capacity;

public:
    stack(size_t capacity) : m_capacity(capacity), m_top(-1) {};
    
    void push(stack_value_type element);
    stack_value_type pop();
    stack_value_type top();
    size_t size();
    bool empty();
};

#endif