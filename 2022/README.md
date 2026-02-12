# 2022 - C Programming Fundamentals

This folder contains **7 foundational C programs** created in 2022, covering basic algorithms, control structures, user input/output, and problem-solving techniques.

---

## 📚 Program Descriptions

### **A22P001** - Digit Extraction & Display
- **Goal:** Extract and display individual digits from an integer
- **Input:** An integer less than 10000
- **Output:** Each digit on a separate line
- **Topics:** Input validation, looping, modular arithmetic
- **Compile & Run:**
```bash
make A22P001
./bin/2022/A22P001
```
**Example:**
```
Input: 1234
Output:
1
2
3
4
```

---

### **A22P002** - Menu-Driven Statistics Program
- **Goal:** Provide three different statistical operations via menu
- **Menu Options:**
  1. **Count positive/negative:** Input 5 numbers, count how many are positive/negative
  2. **Number analysis:** Input 3 numbers, convert negatives to positive, compute mean (2 decimals), count even/odd
  3. **Coin weight finder:** Input weights of 4 gold coins, find the lightest
- **Topics:** Conditionals, loops, floating-point calculations, menu systems
- **Compile & Run:**
```bash
make A22P002
./bin/2022/A22P002
```

---

### **A22P003** - Multi-Option Analysis Program
- **Goal:** Menu-driven decision system with multiple sub-programs
- **Features:** Choice-based logic, array operations, conditional execution
- **Topics:** Switch/case statements, loops, array handling
- **Compile & Run:**
```bash
make A22P003
./bin/2022/A22P003
```

---

### **A22P004** - String/Number Processing
- **Goal:** Process and manipulate numeric/string data with transformations
- **Features:** Data validation, transformations, formatted output
- **Topics:** Arrays, string operations, loops, conditionals
- **Compile & Run:**
```bash
make A22P004
./bin/2022/A22P004
```

---

### **A22P005** - Mathematical Calculations
- **Goal:** Perform mathematical operations and numeric analysis
- **Features:** Arithmetic operations, precision calculations, iterations
- **Topics:** Math functions, floating-point precision, loops
- **Compile & Run:**
```bash
make A22P005
./bin/2022/A22P005
```

---

### **A22P006** - Data Manipulation
- **Goal:** Manipulate variables and data with operators
- **Features:** Variable assignments, arithmetic/logical operations, conditions
- **Topics:** Operators, control structures, data types
- **Compile & Run:**
```bash
make A22P006
./bin/2022/A22P006
```

---

### **A22P007** - Program Logic & Control Flow
- **Goal:** Implement decision trees and complex logic flows
- **Features:** Multi-level conditionals, user interaction, data processing
- **Topics:** Nested conditionals, loops, input validation
- **Compile & Run:**
```bash
make A22P007
./bin/2022/A22P007
```

---

## 🛠️ Building & Execution

### Build Individual Program
```bash
make A22P001      # Compiles only A22P001.c
```

### Build All Programs
```bash
make              # Compiles all .c files in 2022/
```

### Clean Build Artifacts
```bash
make clean        # Removes binaries and dependency files
```

### Run a Program
```bash
../bin/2022/A22P001
```

---

## 📋 Compilation Details

**Compiler:** GCC (C11)  
**Flags:** `-Wall -Wextra -O2 -MMD -MP`
- `-Wall -Wextra`: Enable all common warnings
- `-O2`: Optimization level 2 for efficiency
- `-MMD -MP`: Automatic dependency generation

**Output Directory:** `../bin/2022/`

---

## 📊 Learning Outcomes

These programs cover:
- ✅ Basic input/output (scanf, printf)
- ✅ Control structures (if/else, loops)
- ✅ Variables and operators
- ✅ Simple algorithms
- ✅ User interaction
- ✅ Data processing
- ✅ Error handling basics

---

## 📝 Notes

- Some programs may generate compiler warnings for unused return values (scanf) — these are educational programs and not production-grade
- All programs are self-contained and independent (no external dependencies)
- Each program includes header comments with metadata (author, date, description)

---

**Year:** 2022 | **Status:** Complete | **License:** MIT
