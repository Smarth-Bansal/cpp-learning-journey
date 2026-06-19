# Low-Level C++ Learning Journey

Repository dedicated to mastering C++, memory optimization, and low-latency systems engineering, transitioning from a strong foundation in Python.

## 🛠️ Repository Organization

- `learncpp-exercises/`: Conceptual code, deep dives into syntax, and chapter milestones from LearnCPP.com.
- `competitive-programming/`: Algorithmic solutions from CSES and Codeforces optimized for execution speed.

## 📈 Milestone Checklist

- [x] **Setup & Toolchain:** Configured GCC with strict warnings (`-Wall -Wextra -Werror`).
- [x] **Chapter 4 (Fundamental Data Types):** Mastered explicit type casting (`static_cast`) and deterministic width limits (`std::int32_t`).
- [ ] **Pointers & References:** Stack vs. Heap allocation models.
- [ ] **Standard Template Library (STL):** Complexity analysis of underlying data structures.
- [ ] **Target:** Achieve a 1200+ rating on Codeforces.

## 💻 Compilation Workflow

To ensure high-performance standards, all standalone exercises are compiled using strict warning profiles via the terminal:

```bash
g++ -Wall -Wextra -Werror -O2 <filename>.cpp -o <output_name>