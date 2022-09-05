#include "stack.h"

void stack::push(int element) {
    m_data[++m_top] = element;
}

int stack::pop() {
    if (m_top != -1) {
        return m_data[m_top--];    
    } else {
        return -1;
    }    
}

int stack::size() {
    return m_top + 1;
}

int stack::empty() {
    if (m_top != -1) {
        return 0;    
    } else {
        return 1;
    }
}

int stack::top() {
    if (m_top != -1) {
        return m_data[m_top];
    } else {
        return -1;
    }
}
