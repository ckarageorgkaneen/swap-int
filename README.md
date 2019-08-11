# swap_int

A C macro lib for swapping integers:
1. Using a temp variable
```c
int temp = x;
    x = y;
    y = temp;
```
2. Using +, -
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
3. Using *, /
```c
x *= y;
y = x / y;
x /= y; 
```
4. Using ^
```c
x^=y^=x^=y;
```

Pass-by-pointer alternative funcs are also included. 
