# Removing Left Recursion

## Original Grammar
E → E + T | T
T → T * F | F
F → (E) | id

## Left-Recursion-Free Grammar

E  → T E'
E' → + T E' | ε

T  → F T'
T' → * F T' | ε

F  → (E) | id

## Purpose
Removing left recursion is necessary for top-down parsers
such as Recursive Descent Parsers.
