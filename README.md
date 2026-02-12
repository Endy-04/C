# 🎯 C Programming Portfolio

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
![Language: C](https://img.shields.io/badge/Language-C-00599C?logo=c)
![Status: Active](https://img.shields.io/badge/Status-Active-brightgreen)

A curated collection of **C programming projects, algorithms, and academic exercises** spanning multiple years of learning and professional development. This repository showcases algorithmic thinking, data structure implementation, and software engineering best practices in C.

---

## 📋 Overview

- **Language:** C (ANSI C / C11)
- **Focus Areas:** Algorithms, educational projects, problem-solving
- **Build System:** GNU Make
- **License:** MIT

### Repository Structure
```
C/
├── 2022/           # Year 2022: foundational algorithms & exercises
├── 2023/           # Year 2023: advanced projects (coming soon)
├── Makefile        # Per-year build automation
├── README.md       # This file
└── LICENSE         # MIT License
```

---

## 🚀 Quick Start

### Prerequisites
- GCC compiler (`gcc`)
- GNU Make (`make`)

### Build All Projects (Example: 2022)
```bash
cd 2022
make
```

### Build Specific Project
```bash
cd 2022
make A22P001     # Compiles A22P001.c → ../bin/2022/A22P001
```

### Run Compiled Executable
```bash
./bin/2022/A22P001
```

### Clean Build Artifacts
```bash
cd 2022
make clean       # Removes binaries in ../bin/2022/
```

---

## 📁 Projects by Year

### 2022 - Fundamentals
| Project | Description | Topics |
|---------|-------------|--------|
| **A22P001** | Digit extraction & display | Input validation, loops, conditionals |

*See [`2022/README.md`](2022/README.md) for detailed project descriptions.*

---

## 💻 Development Workflow

### Adding New Projects
```bash
# 1. Create your .c file in the year folder
echo '#include <stdio.h>\nint main() { printf("Hello\\n"); return 0; }' > 2022/A22P002.c

# 2. Compile
cd 2022
make A22P002

# 3. Test
./bin/2022/A22P002

# 4. Commit & push
git add 2022/A22P002.c
git commit -m "Add A22P002: [description]"
git push origin main
```

### Branch Protection
- `main` branch is protected: requires PR review before merge
- All changes should go through feature branches and pull requests

---

## 🛠️ Technologies & Tools

- **Compiler:** GCC (C11 standard)
- **Build Tool:** GNU Makefile
- **SCM:** Git
- **Version Control Platform:** GitHub

### Compilation Flags (Makefile)
```makefile
-Wall -Wextra      # Enable compiler warnings
-O2                # Optimization level 2
-MMD -MP           # Automatic dependency generation
```

---

## 📊 Portfolio Highlights

- **Multiple projects** across 2022+ academic/professional journey
- **Clean commit history** with descriptive messages
- **Makefile automation** for consistent, reproducible builds
- **Well-documented source code** and README files
- **MIT Licensed** — open and transparent

---

## 📜 License

This repository is licensed under the **MIT License**.  
See [LICENSE](LICENSE) file for details.

---

## 🔗 Connect

Feel free to explore, fork, or reach out:
- **GitHub:** [@Endy-04](https://github.com/Endy-04)
- **LinkedIn:** [Your LinkedIn Profile](https://linkedin.com/in/yourprofile) *(update with your URL)*

---

**Last Updated:** February 2026 | *Always learning, always coding* 💡
