`Quiz Questions`
===============

### Question \.0
What is the size of the `unsigned int` data type?

**Answer**
```
4 bytes
```
---

### Question \.1
What is the size of the `char` data type?

**Answer**
```
1 byte
```
---

### Question \.2
What is the size of the `float` data type?

**Answer**
```
4 bytes
```
---

### Question \.3
Which of the following are valid `if` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

**Answer**
```
if (a > b)
{
  return (a);
}
```
```
if (a > b)
  return (a);
```
---

### Question \.4
Which of the following are valid `for` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

**Answer**
```
for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
```
```
for (a = 0; a < b; a++)
    printf("%d\n", a);
```
```
a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}
```
---

### Question \.5
Which of the following are valid `while` or `do/while` statements in ANSI C and Betty-compliant? (Considering `a` and `b` two variables of type `int`)

Please select all correct answers

```
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
```
```
a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < b);
```
```
a = 0;
while (a < b)
    printf("%d\n", a++);
```
