# Quine – A self-reproducing program
A quine is a program which prints a copy of its own as the only output.

## Example

```C
main() { char *s="main() { char *s=%c%s%c; printf(s,34,s,34); }"; printf(s,34,s,34); } 
```

## Compiling

Clone the project

```bash
git clone https://github.com/Andre0n/quine-c.git
```

Go to the project directory

```bash
cd quine-c
```

Compile and run

```bash
gcc src/main.c -o quine && ./quine
```

## Authors

- [@Andre0n](https://www.github.com/Andre0n)
