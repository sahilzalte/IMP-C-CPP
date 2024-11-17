/* Explain the various rules for operator overloading.*/
--->Only existing operators can be overloaded.
You cannot create new operators.
Some operators, like ::, sizeof, and . cannot be overloaded.
Overloaded operators must have at least one user-defined type (class or struct).
The meaning of operators cannot be changed completely (e.g., + must remain addition-like).
