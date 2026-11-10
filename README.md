*This project has been created as part of the 42 curriculum by himekkao.*

# libft

## Description

`libft` is the first 42 project: a reusable C library that reimplements
selected libc functions and provides additional string, conversion, output,
and linked-list utilities for later projects.

The goal is to understand how commonly used C library functions work by
implementing them from scratch, while creating a personal static library that
can be reused in future 42 projects. The library is divided into libc
functions, additional utility functions, and linked-list functions.

## Library details

The library is built as `libft.a`, with all public declarations in `libft.h`.
Every function uses the `ft_` prefix to avoid collisions with the original
libc functions. The implementation covers character tests and conversions,
memory operations, string operations, number conversion, file-descriptor
output, and singly linked-list manipulation.

The list is built on the following structure, defined in libft.h:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

## Requirements

This project follows the libft subject requirements:

- The source is written in C and follows the 42 Norm.
- Every `.c` file compiles with `-Wall -Wextra -Werror` using `cc`.
- No global variables are used.
- The static library is created with `ar` and generated at the repository root
  as `libft.a`.
- All submitted project files are kept at the repository root.
- The Makefile does not relink the library when no source file has changed.

## Instructions

Build the library from the repository root:

```sh
make
```

Available Makefile rules:

```sh
make all      # build libft.a
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # clean and rebuild
```

To use the library in another C program, include `libft.h` and link the static
archive:

```sh
cc -Wall -Wextra -Werror main.c libft.a -o app
```

Example:

```c
#include "libft.h"

int main(void)
{
    char *message;

    message = ft_strjoin("Hello, ", "libft!");
    if (!message)
        return (1);
    ft_putendl_fd(message, 1);
    free(message);
    return (0);
}
```

## Functions

### Part 1: libc functions

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,
`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`,
`ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`,
`ft_atoi`, `ft_calloc`, and `ft_strdup`.

These functions use the `ft_` prefix and reproduce the prototypes and
behaviour specified by their respective manual pages.

### Part 2: additional functions

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`,
`ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and
`ft_putnbr_fd`.

### Part 3: linked lists

This part provides `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`,
`ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`,
and `ft_lstmap`.

## Resources

- C manual pages, including `man malloc`, `man strlen`, and `man memmove`
- C standard library documentation for memory, string, character, and
  conversion functions

### AI usage

AI was used as a research tool to explore C concepts, understand function behaviour, clarify edge cases, and improve my understanding of the subject.