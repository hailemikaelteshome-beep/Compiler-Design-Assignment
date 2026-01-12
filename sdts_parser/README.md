# Syntax-Directed-Translation-Scheme-SDTS-


This repository demonstrates **Syntax-Directed Translation Schemes (SDTS)** in C++ by evaluating **arithmetic expressions**.

## Features
- Tokenizes numbers, `+`, `-`, `*`, and parentheses
- Parses expressions using **left-recursion-free grammar**
- Computes the **value of expressions** using SDTS semantic rules

## Grammar Used

E → T E'
E' → + T E' | - T E' | ε
T → F T'
T' → * F T' | ε
F → (E) | number

bash
Copy code

## How to Run

1. Clone the repo:

```bash
git clone <your-repo-url>
cd SyntaxDirectedTranslation
Compile:

bash
Copy code
g++ src/main.cpp -o sdts
Run:

bash
Copy code
./sdts
Enter expressions like:

scss
Copy code
3 + 4 * (2 + 1) - 5
Output:

makefile
Copy code
Result: 10
