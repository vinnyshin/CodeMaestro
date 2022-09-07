#include "stack.h"

template<typename stack_value_type>
void stack<stack_value_type>::push(stack_value_type element) {
    m_data[++m_top] = element;
}

template<typename stack_value_type>
stack_value_type stack<stack_value_type>::pop() {
    if (m_top != -1) {
        return m_data[m_top--];
    }
    else {
        return -1;
    }
}

template<typename stack_value_type>
size_t stack<stack_value_type>::size() {
    return m_top + 1;
}

template<typename stack_value_type>
bool stack<stack_value_type>::empty() {
    if (m_top != -1) {
        return false;
    }
    else {
        return true;
    }
}

template<typename stack_value_type>
stack_value_type stack<stack_value_type>::top() {
    if (m_top != -1) {
        return m_data[m_top];
    }
    else {
        std::cout << "ERROR: top() stack empty" << std::endl;
        return -1;
    }
}

template class stack<char>;
