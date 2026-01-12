# Syntax-Directed Translation Schemes (SDTS)

## Definition
A Syntax-Directed Translation Scheme (SDTS) is a compiler technique where
semantic actions are attached to grammar productions to perform translation
during parsing.

## Key Concepts
- Uses Context-Free Grammar (CFG)
- Associates attributes with grammar symbols
- Executes semantic rules during parsing

## Attributes
- Synthesized Attributes: Computed from child nodes
- Inherited Attributes: Computed from parent or siblings

## Example
Grammar:
E → E + T
Semantic Rule:
E.val = E1.val + T.val

## Types
1. S-Attributed Definitions
2. L-Attributed Definitions

## Applications
- Expression evaluation
- Type checking
- Intermediate code generation
