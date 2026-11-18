# Simple Lexical Analyzer

## Project Overview

This project implements a simple lexical analyzer using the C programming language. It demonstrates the first phase of a compiler, where source code is scanned and divided into meaningful units called tokens.

The program reads a line of source code and identifies different types of tokens.

## Objectives

- To understand the working of lexical analysis.
- To identify and classify different tokens.
- To understand the role of a lexical analyzer in compiler design.
- To implement a basic scanner using C programming.

## Technologies Used

- C Programming Language
- GCC Compiler
- Code::Blocks IDE
- Command Prompt / Terminal

## Token Types

The program identifies the following tokens:

1. **Keyword** – int, float, if, else, while, return
2. **Identifier** – Variable names such as x, y, a1
3. **Number** – Numeric values
4. **Operator** – +, -, *, /, =, <, >
5. **Separator** – ;, comma, parentheses and braces

## Sample Input

```c
int x = 10 + y;
```

## Sample Output

```text
int -> Keyword
x -> Identifier
= -> Operator
1 -> Number
0 -> Number
+ -> Operator
y -> Identifier
; -> Separator
```

## How to Run

1. Download or clone this repository.
2. Open the `lexical_analyzer.c` file in Code::Blocks or another C editor.
3. Compile the program using a C compiler.
4. Run the program.
5. Enter a line of source code to see the token classification.

## Project Files

- `lexical_analyzer.c` – Main source code of the project.
- `README.md` – Project description and instructions.

## Conclusion

This project demonstrates how a lexical analyzer scans source code and classifies tokens into different categories. It helps in understanding the role of lexical analysis as the first phase of a compiler.

## Course Details

- **Course:** Basics of Compiler Design
- **Project:** Simple Lexical Analyzer
- **University:** GD Goenka University
- **Academic Session:** 2026–27
- **Semester:** 5
- **Section:** A2
