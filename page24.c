Let's break down why this check works.

In C, characters are stored as integer values based on the ASCII (or other compatible character encoding) standard. The digits `'0'` through `'9'` are assigned consecutive values in ASCII:

- `'0'` is represented by the integer `48`,
- `'1'` is `49`,
- …
- `'9'` is `57`.

### Code Explanation

The code:
```c
if (c >= '0' && c <= '9')
```

checks if the character `c` is within the range of `'0'` to `'9'` in ASCII values. This confirms that `c` represents a digit.

### Converting Character Digits to Numeric Values

If `c` is indeed a digit, the expression `c - '0'` converts the character to its corresponding numeric value:

1. When `c` is `'0'` (ASCII `48`), `c - '0'` equals `48 - 48 = 0`.
2. When `c` is `'1'` (ASCII `49`), `c - '0'` equals `49 - 48 = 1`.
3. …
4. When `c` is `'9'` (ASCII `57`), `c - '0'` equals `57 - 48 = 9`.

This works because the ASCII values of `'0'` through `'9'` are consecutive, making `c - '0'` a simple way to map `'0'`–`'9'` to `0`–`9`. This property is true for ASCII and many other common character encodings, ensuring that this technique is widely reliable across systems.