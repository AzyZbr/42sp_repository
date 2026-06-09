*This project has been created as part of the 42 curriculum by gproenca.*

# Libft

## Description

Libft is the first project of the 42 curriculum. Its objective is to recreate a selection of standard C library functions while developing a deeper understanding of memory management, pointers, strings, and data structures.

The project consists of building a custom C library that can be reused in future 42 projects. In addition to reproducing functions from the standard library, Libft also introduces additional utility functions and a linked list API.

### Goal

The main goals of this project are:

* Understand how common C library functions work internally.
* Practice memory allocation and management.
* Improve proficiency with pointers and data manipulation.
* Build a reusable personal library for future projects.
* Learn the fundamentals of linked lists.

### Overview

The library includes:

* Character classification functions.
* String manipulation functions.
* Memory manipulation functions.
* Conversion functions.
* Dynamic memory allocation helpers.
* File descriptor output functions.
* Singly linked list functions (Bonus Part).

## Instructions

### Requirements

* GCC or Clang compiler
* Make
* Unix/Linux environment

### Compilation

Compile the library using:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Available Rules

```bash
make        # Build libft.a
make bonus  # Build bonus linked-list functions
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild everything
```

### Using the Library

Include the header in your source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c libft.a
```

Or:

```bash
cc main.c -L. -lft
```

## Features

### Part 1 - Libc Functions

Examples:

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_strlen
* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strnstr
* ft_atoi
* ft_calloc
* ft_strdup

### Part 2 - Additional Functions

Examples:

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

### Part 3 - Linked Lists

Functions implemented:

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

## Project Structure

```text
.
├── Makefile
├── README.md
├── libft.h
├── src/
├── bonus/
└── libft.a
```

## Resources

### Documentation

* C Standard Library Documentation
* Linux Manual Pages (man)
* POSIX Documentation
* GCC Documentation

### References

* The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
* Beej's Guide to C Programming
* 42 Intranet Subject
* cppreference.com

### AI Usage

Artificial Intelligence tools were used as learning aids during the development of this project. Their usage included:

* Clarifying concepts related to pointers, memory management, and linked lists.
* Understanding the behavior of standard C library functions.
* Reviewing code explanations and debugging strategies.
* Assisting in the preparation of project documentation.

All code was manually written, tested, and validated by the author.

## Author

**gproenca**
