*This project has been created as part of the 42 curriculum by mibarros.*

# Libft

## Description

Libft is a 42 School project that aims to create a personal C library by recreating functions from the standard C library and developing additional functionalities.

This library brings together functions learned throughout the Piscine and the beginning of the Common Core, allowing us to better understand the C programming language, improve our programming skills, and reuse the functions developed in future projects.

By creating this library, we can organize and reuse previously implemented functions, avoiding code repetition and making future development more practical and efficient.

## Instructions

### Compilation

To compile the library, navigate to the root directory of the project and run:

- `make` — Compiles the source files and creates the libft.a library.
- `make clean` — Removes the object files (.o).
- `make fclean` — Removes the object files and the libft.a library.
- `make re` — Performs a complete recompilation of the library.

## Library Contents

### Part 1 — Libc Functions

**Character Checks**

- `ft_isalpha` — Checks if a character is a letter.
- `ft_isdigit` — Checks if a character is a digit.
- `ft_isalnum` — Checks if a character is alphanumeric.
- `ft_isascii` — Checks if a character belongs to the ASCII character set.
- `ft_isprint` — Checks if a character is printable.

**Memory Functions**

- `ft_memset` — Fills a memory area with a specific byte.
- `ft_bzero` — Sets a memory area to zero.
- `ft_memcpy` — Copies bytes from one memory area to another.
- `ft_memmove` — Copies memory while handling overlapping areas.
- `ft_memchr` — Searches for a byte in a memory area.
- `ft_memcmp` — Compares two memory areas.

**String Functions**

- `ft_strlen` — Calculates the length of a string.
- `ft_strlcpy` — Copies a string with size limitation.
- `ft_strlcat` — Concatenates strings with size limitation.
- `ft_strchr` — Finds the first occurrence of a character in a string.
- `ft_strrchr` — Finds the last occurrence of a character in a string.
- `ft_strncmp` — Compares two strings up to a given number of characters.
- `ft_strnstr` — Finds a substring within a string, within a given length.

**Character Conversion**

- `ft_toupper` — Converts a lowercase letter to uppercase.
- `ft_tolower` — Converts an uppercase letter to lowercase.

**Conversion Functions**

- `ft_atoi` — Converts a string into an integer.

**Memory Allocation**

- `ft_calloc` — Allocates memory for an array.
- `ft_strdup` — Duplicates a string.

### Part 2 — Additional Functions

**String Manipulation**

- `ft_substr` — Extracts a substring from a string.
- `ft_strjoin` — Joins two strings into a new string.
- `ft_strtrim` — Removes specified characters from the beginning and end of a string.
- `ft_split` — Splits a string into an array of strings using a delimiter.
- `ft_strmapi` — Applies a function to each character and creates a new string.
- `ft_striteri` — Applies a function to each character, modifying the original string.

**Conversion Functions**

- `ft_itoa` — Converts an integer into a string.

**Output Functions**

- `ft_putchar_fd` — Writes a character to a file descriptor.
- `ft_putstr_fd` — Writes a string to a file descriptor.
- `ft_putendl_fd` — Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` — Writes an integer to a file descriptor.

### Part 3 — Bonus: Linked Lists

**Node Creation**

- `ft_lstnew` — Creates a new list node.

**Adding Nodes**

- `ft_lstadd_front` — Adds a node to the beginning of a list.
- `ft_lstadd_back` — Adds a node to the end of a list.

**List Navigation**

- `ft_lstsize` — Counts the number of nodes in a list.
- `ft_lstlast` — Returns the last node of a list.

**Memory Management**

- `ft_lstdelone` — Deletes and frees a single node.
- `ft_lstclear` — Deletes and frees an entire list.

**List Operations**

- `ft_lstiter` — Applies a function to the content of each node.
- `ft_lstmap` — Creates a new list by applying a function to each node's content.

## Resources

During the development of this project, I used different resources to support my learning and understanding of C programming.

- **42 School peers:** I asked classmates for help, shared ideas, and discussed different approaches to solving problems.
- **Online research:** I used online documentation, tutorials, and other resources to understand functions and C programming concepts.
- **Manual pages (`man`):** I consulted manual pages to understand how standard C functions work and how they should behave.
- **AI assistance:** I used ChatGPT as a learning support tool to clarify doubts, understand some functions, and interpret errors. The goal was to receive explanations and step-by-step guidance so I could implement the functions independently, rather than receiving complete solutions or ready-made code.