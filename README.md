# 42Libft

<div align="center">

![Banner](./42cover.png)

[![42Intra](/42badge.svg)](https://profile.intra.42.fr/users/cvalim-d)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

</div>

## Project Description

The libft project is a foundational project at 42 School where students create their own C library, implementing commonly used standard C functions from scratch.

## Index

  <details>
  <summary>Memory Management Functions</summary>
    <ul>
    <li><a href="#ft_atoi">ft_atoi</a></li>
    <li><a href="#ft_bzero">ft_bzero</a></li>
    <li><a href="#ft_calloc">ft_calloc</a></li>
    <li><a href="#ft_memchr">ft_memchr</a></li>
    <li><a href="#ft_memcmp">ft_memcmp</a></li>
    <li><a href="#ft_memcpy">ft_memcpy</a></li>
    <li><a href="#ft_memmove">ft_memmove</a></li>
    <li><a href="#ft_memset">ft_memset</a></li>
  </ul>
  </details>
  <details>
  <summary>String Manipulation Functions</summary>
  <ul>
    <li><a href="#ft_strdup">ft_strdup</a></li>
    <li><a href="#ft_strchr">ft_strchr</a></li>
    <li><a href="#ft_strjoin">ft_strjoin</a></li>
    <li><a href="#ft_strlcat">ft_strlcat</a></li>
    <li><a href="#ft_strlcpy">ft_strlcpy</a></li>
    <li><a href="#ft_strlen">ft_strlen</a></li>
    <li><a href="#ft_strmapi">ft_strmapi</a></li>
    <li><a href="#ft_strnstr">ft_strnstr</a></li>
    <li><a href="#ft_strncmp">ft_strncmp</a></li>
    <li><a href="#ft_strrchr">ft_strrchr</a></li>
    <li><a href="#ft_strtrim">ft_strtrim</a></li>
    <li><a href="#ft_substr">ft_substr</a></li>
  </ul>
  </details>
  <details>
  <summary>Character Checking and Conversion Functions</summary>
  <ul>
    <li><a href="#ft_isalnum">ft_isalnum</a></li>
    <li><a href="#ft_isalpha">ft_isalpha</a></li>
    <li><a href="#ft_isascii">ft_isascii</a></li>
    <li><a href="#ft_isdigit">ft_isdigit</a></li>
    <li><a href="#ft_isprint">ft_isprint</a></li>
    <li><a href="#ft_tolower">ft_tolower</a></li>
    <li><a href="#ft_toupper">ft_toupper</a></li>
    <li><a href="#ft_itoa">ft_itoa</a></li>
    <li><a href="#ft_striteri">ft_striteri</a></li>
  </ul>
  </details>
  <details>
  <summary>File Descriptor Functions (Bonus)</summary>
  <ul>
    <li><a href="#ft_putchar_fd">ft_putchar_fd</a></li>
    <li><a href="#ft_putendl_fd">ft_putendl_fd</a></li>
    <li><a href="#ft_putnbr_fd">ft_putnbr_fd</a></li>
    <li><a href="#ft_putstr_fd">ft_putstr_fd</a></li>
  </ul>
  </details>
  <details>
  <summary>Linked List Functions (Bonus)</summary>
  <ul>
    <li><a href="#ft_lstnew">ft_lstnew</a></li>
    <li><a href="#ft_lstadd_front">ft_lstadd_front</a></li>
    <li><a href="#ft_lstsize">ft_lstsize</a></li>
    <li><a href="#ft_lstlast">ft_lstlast</a></li>
    <li><a href="#ft_lstadd_back">ft_lstadd_back</a></li>
    <li><a href="#ft_lstdelone">ft_lstdelone</a></li>
    <li><a href="#ft_lstclear">ft_lstclear</a></li>
    <li><a href="#ft_lstiter">ft_lstiter</a></li>
    <li><a href="#ft_lstmap">ft_lstmap</a></li>
  </ul>
  </details>

## Functions

### Memory Management Functions
***

<details>
<summary><strong id="ft_atoi">ft_atoi</strong></summary>

#### `int ft_atoi(char *str);`
|           Description           |             Param. #1              |     Return Value      |
| :-----------------------------: | :--------------------------------: | :-------------------: |
| Converts a string to an integer | `str` - The string to be converted | The converted integer |

</details>

<br>

<details>
<summary><strong id="ft_bzero">ft_bzero</strong></summary>

#### `void ft_bzero(void *s, size_t n);`
|               Description               |            Param. #1             |              Param. #2               | Return Value |
| :-------------------------------------: | :------------------------------: | :----------------------------------: | :----------: |
| Sets all bytes of a memory area to zero | `s` - Pointer to the memory area | `n` - Number of bytes to set to zero |     None     |

</details>

<br>

<details>
<summary><strong id="ft_calloc">ft_calloc</strong></summary>

#### `void *ft_calloc(size_t nmemb, size_t size);`
|                       Description                        |          Param. #1           |           Param. #2           |          Return Value           |
| :------------------------------------------------------: | :--------------------------: | :---------------------------: | :-----------------------------: |
| Allocates memory for an array and initializes it to zero | `nmemb` - Number of elements | `size` - Size of each element | Pointer to the allocated memory |

</details>

<br>

<details>
<summary><strong id="ft_memchr">ft_memchr</strong></summary>

#### `void *ft_memchr(const void *s, int c, size_t n);`
|         Description          |            Param. #1             |           Param. #2           |           Param. #3           |                   Return Value                    |
| :--------------------------: | :------------------------------: | :---------------------------: | :---------------------------: | :-----------------------------------------------: |
| Scans memory for a character | `s` - Pointer to the memory area | `c` - Character to search for | `n` - Number of bytes to scan | Pointer to the matching byte or NULL if not found |

</details>

<br>

<details>
<summary><strong id="ft_memcmp">ft_memcmp</strong></summary>

#### `int ft_memcmp(const void *s1, const void *s2, size_t n);`
|        Description        |                Param. #1                |                Param. #2                 |            Param. #3             |                                  Return Value                                   |
| :-----------------------: | :-------------------------------------: | :--------------------------------------: | :------------------------------: | :-----------------------------------------------------------------------------: |
| Compares two memory areas | `s1` - Pointer to the first memory area | `s2` - Pointer to the second memory area | `n` - Number of bytes to compare | < 0 if s1 is less than s2, > 0 if s1 is greater than s2, 0 if s1 is equal to s2 |

</details>

<br>

<details>
<summary><strong id="ft_memcpy">ft_memcpy</strong></summary>

#### `void *ft_memcpy(void *dest, const void *src, size_t n);`
|    Description     |                    Param. #1                    |                 Param. #2                 |           Param. #3           |              Return Value              |
| :----------------: | :---------------------------------------------: | :---------------------------------------: | :---------------------------: | :------------------------------------: |
| Copies memory area | `dest` - Pointer to the destination memory area | `src` - Pointer to the source memory area | `n` - Number of bytes to copy | Pointer to the destination memory area |

</details>

<br>

<details>
<summary><strong id="ft_memmove">ft_memmove</strong></summary>

#### `void *ft_memmove(void *dest, const void *src, size_t n);`
|             Description              |                    Param. #1                    |                 Param. #2                 |           Param. #3           |              Return Value              |
| :----------------------------------: | :---------------------------------------------: | :---------------------------------------: | :---------------------------: | :------------------------------------: |
| Copies memory area, handling overlap | `dest` - Pointer to the destination memory area | `src` - Pointer to the source memory area | `n` - Number of bytes to copy | Pointer to the destination memory area |

</details>

<br>

<details>
<summary><strong id="ft_memset">ft_memset</strong></summary>

#### `void *ft_memset(void *s, int c, size_t len);`
|            Description            |            Param. #1             |        Param. #2        |           Param. #3            |        Return Value        |
| :-------------------------------: | :------------------------------: | :---------------------: | :----------------------------: | :------------------------: |
| Fills memory with a constant byte | `s` - Pointer to the memory area | `c` - Byte value to set | `len` - Number of bytes to set | Pointer to the memory area |

</details>

<br>

### String Manipulation Functions
***

<details>
<summary><strong id="ft_strdup">ft_strdup</strong></summary>

#### `char *ft_strdup(char *src);`
|     Description     |              Param. #1              |           Return Value           |
| :-----------------: | :---------------------------------: | :------------------------------: |
| Duplicates a string | `src` - The string to be duplicated | Pointer to the duplicated string |

</details>

<br>

<details>
<summary><strong id="ft_strchr">ft_strchr</strong></summary>

#### `char *ft_strchr(const char *s, int c);`
|                       Description                       |           Param. #1           |           Param. #2           |                             Return Value                              |
| :-----------------------------------------------------: | :---------------------------: | :---------------------------: | :-------------------------------------------------------------------: |
| Locates the first occurrence of a character in a string | `s` - The string to search in | `c` - The character to locate | Pointer to the first occurrence of the character or NULL if not found |

</details>

<br>

<details>
<summary><strong id="ft_strjoin">ft_strjoin</strong></summary>

#### `char *ft_strjoin(char const *s1, char const *s2);`
|                Description                 |        Param. #1        |        Param. #2         |       Return Value        |
| :----------------------------------------: | :---------------------: | :----------------------: | :-----------------------: |
| Concatenates two strings into a new string | `s1` - The first string | `s2` - The second string | Pointer to the new string |

</details>

<br>

<details>
<summary><strong id="ft_strlcat">ft_strlcat</strong></summary>

#### `unsigned int ft_strlcat(char *dest, const char *src, size_t size);`
|                        Description                        |            Param. #1            |         Param. #2         |                     Param. #3                     |                  Return Value                   |
| :-------------------------------------------------------: | :-----------------------------: | :-----------------------: | :-----------------------------------------------: | :---------------------------------------------: |
| Concatenates a string with another, with size limitations | `dest` - The destination string | `src` - The source string | `size` - The total size of the destination buffer | Total length of the string they tried to create |

</details>

<br>

<details>
<summary><strong id="ft_strlcpy">ft_strlcpy</strong></summary>

#### `unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);`
|                    Description                    |            Param. #1            |         Param. #2         |                     Param. #3                     |                  Return Value                   |
| :-----------------------------------------------: | :-----------------------------: | :-----------------------: | :-----------------------------------------------: | :---------------------------------------------: |
| Copies a string to another, with size limitations | `dest` - The destination string | `src` - The source string | `size` - The total size of the destination buffer | Total length of the string they tried to create |

</details>

<br>

<details>
<summary><strong id="ft_strlen">ft_strlen</strong></summary>

#### `int ft_strlen(const char *s);`
|          Description           |          Param. #1          |     Return Value     |
| :----------------------------: | :-------------------------: | :------------------: |
| Returns the length of a string | `s` - The string to measure | Length of the string |

</details>

<br>

<details>
<summary><strong id="ft_strmapi">ft_strmapi</strong></summary>

#### `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
|                               Description                               |          Param. #1          |                   Param. #2                   |       Return Value        |
| :---------------------------------------------------------------------: | :-------------------------: | :-------------------------------------------: | :-----------------------: |
| Applies a function to each character of a string to create a new string | `s` - The string to iterate | `f` - The function to apply to each character | Pointer to the new string |

</details>

<br>

<details>
<summary><strong id="ft_strnstr">ft_strnstr</strong></summary>

#### `char *ft_strnstr(const char *big, const char *little, size_t len);`
|                       Description                        |            Param. #1            |               Param. #2                |                     Param. #3                      |                             Return Value                              |
| :------------------------------------------------------: | :-----------------------------: | :------------------------------------: | :------------------------------------------------: | :-------------------------------------------------------------------: |
| Locates a substring in a string, within a certain length | `big` - The string to search in | `little` - The substring to search for | `len` - The maximum number of characters to search | Pointer to the first occurrence of the substring or NULL if not found |

</details>

<br>

<details>
<summary><strong id="ft_strncmp">ft_strncmp</strong></summary>

#### `int ft_strncmp(char *s1, char *s2, size_t n);`
|                 Description                 |        Param. #1        |        Param. #2         |                     Param. #3                     |                                  Return Value                                   |
| :-----------------------------------------: | :---------------------: | :----------------------: | :-----------------------------------------------: | :-----------------------------------------------------------------------------: |
| Compares two strings up to a certain length | `s1` - The first string | `s2` - The second string | `n` - The maximum number of characters to compare | < 0 if s1 is less than s2, > 0 if s1 is greater than s2, 0 if s1 is equal to s2 |

</details>

<br>

<details>
<summary><strong id="ft_strrchr">ft_strrchr</strong></summary>

#### `char *ft_strrchr(const char *s, int c);`
|                      Description                       |           Param. #1           |           Param. #2           |                             Return Value                             |
| :----------------------------------------------------: | :---------------------------: | :---------------------------: | :------------------------------------------------------------------: |
| Locates the last occurrence of a character in a string | `s` - The string to search in | `c` - The character to locate | Pointer to the last occurrence of the character or NULL if not found |

</details>

<br>

<details>
<summary><strong id="ft_strtrim">ft_strtrim</strong></summary>

#### `char *ft_strtrim(char const *s1, char const *set);`
|                       Description                       |         Param. #1         |               Param. #2               |         Return Value          |
| :-----------------------------------------------------: | :-----------------------: | :-----------------------------------: | :---------------------------: |
| Trims characters from the beginning and end of a string | `s1` - The string to trim | `set` - The set of characters to trim | Pointer to the trimmed string |

</details>

<br>

<details>
<summary><strong id="ft_substr">ft_substr</strong></summary>

#### `char *ft_substr(char const *s, unsigned int start, size_t len);`
|            Description             |         Param. #1         |          Param. #2           |              Param. #3              |       Return Value       |
| :--------------------------------: | :-----------------------: | :--------------------------: | :---------------------------------: | :----------------------: |
| Extracts a substring from a string | `s` - The original string | `start` - The starting index | `len` - The length of the substring | Pointer to the substring |

</details>

<br>

### Character Checking and Conversion Functions
***

<details>
<summary><strong id="ft_isalnum">ft_isalnum</strong></summary>

#### `int ft_isalnum(int c);`
|              Description              |          Param. #1           |                         Return Value                          |
| :-----------------------------------: | :--------------------------: | :-----------------------------------------------------------: |
| Checks if a character is alphanumeric | `c` - The character to check | 0 if the character tests false, 1 if the character tests true |

</details>

<br>

<details>
<summary><strong id="ft_isalpha">ft_isalpha</strong></summary>

#### `int ft_isalpha(int c);`
|             Description             |          Param. #1           |                         Return Value                          |
| :---------------------------------: | :--------------------------: | :-----------------------------------------------------------: |
| Checks if a character is alphabetic | `c` - The character to check | 0 if the character tests false, 1 if the character tests true |

</details>

<br>

<details>
<summary><strong id="ft_isascii">ft_isascii</strong></summary>

#### `int ft_isascii(int c);`
|                 Description                 |          Param. #1           |                         Return Value                          |
| :-----------------------------------------: | :--------------------------: | :-----------------------------------------------------------: |
| Checks if a character is an ASCII character | `c` - The character to check | 0 if the character tests false, 1 if the character tests true |

</details>

<br>

<details>
<summary><strong id="ft_isdigit">ft_isdigit</strong></summary>

#### `int ft_isdigit(int c);`
|           Description            |          Param. #1           |                         Return Value                          |
| :------------------------------: | :--------------------------: | :-----------------------------------------------------------: |
| Checks if a character is a digit | `c` - The character to check | 0 if the character tests false, 1 if the character tests true |

</details>

<br>

<details>
<summary><strong id="ft_isprint">ft_isprint</strong></summary>

#### `int ft_isprint(int c);`
|            Description             |          Param. #1           |                         Return Value                          |
| :--------------------------------: | :--------------------------: | :-----------------------------------------------------------: |
| Checks if a character is printable | `c` - The character to check | 0 if the character tests false, 1 if the character tests true |

</details>

<br>

<details>
<summary><strong id="ft_tolower">ft_tolower</strong></summary>

#### `int ft_tolower(int c);`
|                 Description                  |           Param. #1            |      Return Value       |
| :------------------------------------------: | :----------------------------: | :---------------------: |
| Converts an uppercase character to lowercase | `c` - The character to convert | The converted character |

</details>

<br>

<details>
<summary><strong id="ft_toupper">ft_toupper</strong></summary>

#### `int ft_toupper(int c);`
|                 Description                 |           Param. #1            |      Return Value       |
| :-----------------------------------------: | :----------------------------: | :---------------------: |
| Converts a lowercase character to uppercase | `c` - The character to convert | The converted character |

</details>

<br>

<details>
<summary><strong id="ft_itoa">ft_itoa</strong></summary>

#### `char *ft_itoa(int n);`
|           Description           |          Param. #1           |                  Return Value                  |
| :-----------------------------: | :--------------------------: | :--------------------------------------------: |
| Converts an integer to a string | `n` - The integer to convert | Pointer to the string representing the integer |

</details>

<br>

<details>
<summary><strong id="ft_striteri">ft_striteri</strong></summary>

#### `void ft_striteri(char *s, void (*f)(unsigned int, char *));`
|                   Description                    |          Param. #1          |                   Param. #2                   | Return Value |
| :----------------------------------------------: | :-------------------------: | :-------------------------------------------: | :----------: |
| Applies a function to each character of a string | `s` - The string to iterate | `f` - The function to apply to each character |     None     |

</details>

<br>

### File Descriptor Functions (Bonus)
***

<details>
<summary><strong id="ft_putchar_fd">ft_putchar_fd</strong></summary>

#### `void ft_putchar_fd(char c, int fd);`
|               Description                |           Param. #1           |         Param. #2          | Return Value |
| :--------------------------------------: | :---------------------------: | :------------------------: | :----------: |
| Outputs a character to a file descriptor | `c` - The character to output | `fd` - The file descriptor |     None     |

</details>

<br>

<details>
<summary><strong id="ft_putendl_fd">ft_putendl_fd</strong></summary>

#### `void ft_putendl_fd(char *s, int fd);`
|                         Description                          |         Param. #1          |         Param. #2          | Return Value |
| :----------------------------------------------------------: | :------------------------: | :------------------------: | :----------: |
| Outputs a string to a file descriptor, followed by a newline | `s` - The string to output | `fd` - The file descriptor |     None     |

</details>

<br>

<details>
<summary><strong id="ft_putnbr_fd">ft_putnbr_fd</strong></summary>

#### `void ft_putnbr_fd(int n, int fd);`
|               Description               |          Param. #1          |         Param. #2          | Return Value |
| :-------------------------------------: | :-------------------------: | :------------------------: | :----------: |
| Outputs an integer to a file descriptor | `n` - The integer to output | `fd` - The file descriptor |     None     |

</details>

<br>

<details>
<summary><strong id="ft_putstr_fd">ft_putstr_fd</strong></summary>

#### `void ft_putstr_fd(char *s, int fd);`
|              Description              |         Param. #1          |         Param. #2          | Return Value |
| :-----------------------------------: | :------------------------: | :------------------------: | :----------: |
| Outputs a string to a file descriptor | `s` - The string to output | `fd` - The file descriptor |     None     |

</details>

<br>

### Linked List Functions (Bonus)
***

<details>
<summary><strong id="ft_lstnew">ft_lstnew</strong></summary>

#### `t_list *ft_lstnew(void *content);`
|            Description            |                      Param. #1                      |        Return Value        |
| :-------------------------------: | :-------------------------------------------------: | :------------------------: |
| Creates a new linked list element | `content` - The content to store in the new element | Pointer to the new element |

</details>

<br>

<details>
<summary>ft_lstadd_front</summary>

#### `void ft_lstadd_front(t_list **lst, t_list *new);`
|                    Description                    |                    Param. #1                     |           Param. #2            | Return Value |
| :-----------------------------------------------: | :----------------------------------------------: | :----------------------------: | :----------: |
| Adds an element at the beginning of a linked list | `lst` - Pointer to the first element of the list | `new` - The new element to add |     None     |

</details>

<br>

<details>
<summary>ft_lstsize</summary>

#### `int ft_lstsize(t_list *lst);`
|                   Description                   |               Param. #1               |          Return Value          |
| :---------------------------------------------: | :-----------------------------------: | :----------------------------: |
| Returns the number of elements in a linked list | `lst` - The list to count elements in | Number of elements in the list |

</details>

<br>

<details>
<summary>ft_lstlast</summary>

#### `t_list *ft_lstlast(t_list *lst);`
|                Description                |                   Param. #1                   |        Return Value         |
| :---------------------------------------: | :-------------------------------------------: | :-------------------------: |
| Returns the last element of a linked list | `lst` - The list to get the last element from | Pointer to the last element |

</details>

<br>

<details>
<summary>ft_lstadd_back</summary>

#### `void ft_lstadd_back(t_list **lst, t_list *new);`
|                 Description                 |                    Param. #1                     |           Param. #2            | Return Value |
| :-----------------------------------------: | :----------------------------------------------: | :----------------------------: | :----------: |
| Adds an element at the end of a linked list | `lst` - Pointer to the first element of the list | `new` - The new element to add |     None     |

</details>

<br>

<details>
<summary>ft_lstdelone</summary>

#### `void ft_lstdelone(t_list *lst, void (*del)(void *));`
|              Description              |           Param. #1           |                         Param. #2                         | Return Value |
| :-----------------------------------: | :---------------------------: | :-------------------------------------------------------: | :----------: |
| Deletes an element from a linked list | `lst` - The element to delete | `del` - The function to delete the content of the element |     None     |

</details>

<br>

<details>
<summary>ft_lstclear</summary>

#### `void ft_lstclear(t_list **lst, void (*del)(void *));`
|                   Description                   |                    Param. #1                     |                         Param. #2                          | Return Value |
| :---------------------------------------------: | :----------------------------------------------: | :--------------------------------------------------------: | :----------: |
| Deletes and frees all elements of a linked list | `lst` - Pointer to the first element of the list | `del` - The function to delete the content of the elements |     None     |

</details>

<br>

<details>
<summary>ft_lstiter</summary>

#### `void ft_lstiter(t_list *lst, void (*f)(void *));`
|                            Description                             |          Param. #1          |                  Param. #2                  | Return Value |
| :----------------------------------------------------------------: | :-------------------------: | :-----------------------------------------: | :----------: |
| Iterates over a linked list and applies a function to each element | `lst` - The list to iterate | `f` - The function to apply to each element |     None     |

</details>

<br>

<details>
<summary>ft_lstmap</summary>

#### `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
|                                     Description                                      |         Param. #1         |                  Param. #2                  |                         Param. #3                          |      Return Value       |
| :----------------------------------------------------------------------------------: | :-----------------------: | :-----------------------------------------: | :--------------------------------------------------------: | :---------------------: |
| Creates a new linked list by applying a function to each element of an existing list | `lst` - The original list | `f` - The function to apply to each element | `del` - The function to delete the content of the elements | Pointer to the new list |

</details>