# swap-int

A small C macro lib for swapping integers:
1. Using a temp var:
```c
int temp = x;
    x = y;
    y = temp;
```
2. Using +, -:
```c
x += y;
y = x - y;
x -= y;
```
    or
```c
x = y - x;
y -= x;
x += y;
```
3. Using *, /:
```c
x *= y;
y = x / y;
x /= y; 
```
4. Using ^:
```c
x^=y^=x^=y;
```

Alternative pass-by-pointer funcs are also included. 
