# Libft

*This project has been created as part of the 42 curriculum by rsantos.*

---

## 📖 Description

Libft is a custom C library that reimplements a set of standard C library functions, along with additional utility functions and basic data structures.

The main objective of this project is to develop a deep understanding of core programming concepts such as memory management, pointer manipulation, and string processing. By recreating these functions from scratch, the project reinforces how fundamental operations work internally.

The library is divided into three main parts:

* **Libc Functions**: Reimplementation of standard functions like `ft_strlen`, `ft_memcpy`, and `ft_atoi`.
* **Additional Functions**: Advanced utilities such as `ft_split`, `ft_strjoin`, and `ft_substr`.
* **Linked List Functions**: Implementation of a basic linked list structure and operations like `ft_lstadd_back` and `ft_lstclear`.

All functions are compiled into a static library (`libft.a`) that can be reused in future C projects.

---

## ⚙️ Compilation

To compile the library, use:

```bash
make
```

This will generate:

```bash
libft.a
```

### Available Makefile rules:

```bash
make        # Compile the library
make all    # Same as make
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile everything
```

---

## 📦 How to Use

### 1. Include the header

```c
#include "libft.h"
```

---

### 2. Compile with your program

```bash
gcc main.c -L. -lft
```

Or manually:

```bash
gcc main.c libft.a
```
---

## 🧠 Key Concepts Learned

* Memory allocation (`malloc`, `free`)
* Pointer manipulation
* String handling
* Reimplementation of standard library functions
* Data structures (linked lists)
* Writing reusable and modular code

---

## 📚 Resources

* Manual pages (`man strlen`, `man malloc`, etc.)
* 42 Intranet documentation
* C Programming Language (K&R)

### AI Usage

AI tools were used as a support tool to clarify concepts, understand problem-solving approaches, and review implementations. All code and logic were written and understood independently as part of the learning process.

---

## 🚀 Notes

* All functions follow the 42 Norm.
* No memory leaks are allowed.
* The library is designed to be reused in future projects.
* Code is written in C and compiled with flags:

```bash
-Wall -Wextra -Werror
```

---

## 👨‍💻 Author

* rsantos
