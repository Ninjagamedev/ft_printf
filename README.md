# FT_PRINTF

Progress
██████████ 100%

ft_printf is my second project at **42 Lisbon** <br />

### The goal of this project is really simple, *recode our beloved printf()* <br />

This project had the main objective of teaching what are and how to use variable arguments such as va_start, va_arg, va_end <br />
There were some changes made to the previous libft project to add needed functions for this one such as a ITOA to handle unsigned ints and a hex_to_str converter. <br />

## How to use it?
After running `make` on the project's directory you can freely use it by including it in your project <br />
Example: <br />
`make (make all) - compilation libftprintf.a` <br />
`make clean - clearing *.o files `  <br />
`make fclean - clearing *. o files and libraries  ` <br />

To add the library to the project you can include it by adding: <br />
`#include "ft_printf.h"`

## Available Conversions

| Specifier | Description | Example |
|:---------:|:-----------:|:-------:|
| %с | Output any character from an ASCII table | '#' |
| %s | Output a string / array of characters ending with ('\0') | "Hello World!" |
| %p | Output of a pointer address | 0xfff000bd8 |
| %d and %i | Output of an integer in decimal notation | 69 |
| %u | Output of an unsigned integer in the decimal system | 4235234 |
| %x | Output an unsigned integer in hexadecimal notation | 12a21b |
| %X | Output an unsigned integer in hexadecimal notation | 12A21B |
| %% | Output of the '%' sign | % |  
