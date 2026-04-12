# Vec — A Custom C++ Vector Implementation

A custom C++ dynamic array container implemented from scratch using manual memory management, TDD, and a clean STL‑style API.  
This project demonstrates strong understanding of C++ fundamentals, including constructors, destructors, copy semantics, resizing strategies, and safe resource handling.

---

## 🚀 Features

- Fully custom dynamic array (`Vec`)
- Manual memory management using `new[]` / `delete[]`
- Rule of Three implemented correctly
- Automatic resizing (growth strategy)
- Bounds‑checked access (`at()`)
- Fast unchecked access (`operator[]`)
- Push, pop, clear, resize, empty, size, capacity
- Comprehensive TDD test suite
- Clean, readable code structure

---

## 📁 Project Structure
/Vector
    Vec.h
    Vec.cpp
    Vec_TDD.cpp

- **Vec.h** — class declaration and public API  
- **Vec.cpp** — implementation  
- **Vec_TDD.cpp** — test suite (TDD)

---

## 🧪 Test‑Driven Development

This project was built using a TDD workflow:

1. Write a failing test  
2. Implement the minimal code to pass  
3. Refactor  
4. Repeat  

The test suite covers:

- construction  
- copying  
- resizing  
- pushing/popping  
- memory correctness  
- edge cases  

---

## 🧠 What This Project Demonstrates

- Understanding of dynamic memory  
- Safe resource management  
- Clean API design  
- Separation of interface and implementation  
- Test‑driven development  
- Debugging and incremental development  
- Real C++ engineering workflow  

---

## 📌 Future Improvements

- Convert Vec into a template class (`Vec<T>`)
- Add move constructor and move assignment (Rule of Five)
- Add iterators for range‑based loops
- Add const‑correctness everywhere
- Add header‑only version
- Add benchmarks and performance notes

