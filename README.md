# String Library

A **console-based String Library** written in C++.

This project is part of my **Learning Path**, done during **Course 10 (OOP Level 1)**  
from the **Programming Advices roadmap**.  
You can explore my full Learning Path repository here: [Learning Path Repository](https://github.com/itsamal0/learning-path)

It helps practice **OOP concepts** such as encapsulation, classes, and object design.

---

## Features

* Convert string to uppercase / lowercase
* Trim spaces (left, right, full)
* Reverse words in string
* Replace words (case-sensitive or insensitive)
* Remove punctuation
* Split and join strings with a delimiter

---

## Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/itsamal0/string_library.git
cd string_library
```

### 2. Build the project

```bash
g++ main.cpp -o string_library
```

### 3. Run the program

```bash
./string_library
```

---

## Example Output

```
===== MEMBER FUNCTIONS =====

Original: '  Hello, World! Welcome to C++ Programming.  '

Uppercase: '  HELLO, WORLD! WELCOME TO C++ PROGRAMMING.  '

Lowercase: '  hello, world! welcome to c++ programming.  '

Left trim: 'hello, world! welcome to c++ programming.  '

Right trim: 'hello, world! welcome to c++ programming.'

Full trim: 'hello, world! welcome to c++ programming.'

Reversed words: 'programming. c++ to welcome world! hello,'

Replace 'c++': 'programming. Python to welcome world! hello,'

No punctuation: 'programming Python to welcome world hello'

===== STATIC FUNCTIONS =====

Original: '   split,this,string,example   '

Split:
split
this
string
example

Joined: 'split | this | string | example'

Reversed: 'four three two One'

Replace static: 'I love programming in C++'

No punctuation static: 'Hello How are you'
```