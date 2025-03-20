// Copyright (c) 2025 Ethan Sifferman.
// All rights reserved. Distribution Prohibited.

#pragma once

#include <array>
#include <stdexcept>

template <typename T>
class Stack {
 public:
  static constexpr size_t max_size = 5;

 private:
  std::array<T, max_size> stack_data;
  std::size_t top;

 public:
  Stack() : top(0) {}

  void push(const T& value) {
    if(isFull()){
      throw std::overflow_error("Stack overflow");
    }
    stack_data[top++] = value;
  }

  void pop() {
    if(StackIsEmpty()){
      throw std::underflow_error("Stack underflow");
    }
    top--;
  }

  T peek() const {
    if(StackIsEmpty()){
      throw std::underflow_error("Stack underflow");
    }
    return stack_data[top - 1];
  }

  bool StackIsEmpty() const {
    return top == 0;
  }

  bool isFull() const {
    return top >= max_size;
  }

  std::size_t size() const { return top; }
};
