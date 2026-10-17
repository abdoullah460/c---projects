# C To-Do App

A simple command-line To-Do application written in C.

This is a learning project where I practice core C programming concepts: structs, arrays, loops, conditionals, string handling, and user input via the terminal.

## Features

- Add a task
- View all tasks
- Delete a task (shifts remaining tasks down to keep the list compact)
- Exit the application
- Supports up to 100 tasks
- Basic input validation (e.g. rejects invalid delete choices, warns when the task list is full)

## Language & Compiler

- **Language:** C
- **C Standard:** C23
- **Compiler:** GCC 15.2.0

C23 is used because it's the current C standard and my compiler (GCC 15.2.0) supports it. The source code itself doesn't rely on any C23-specific features — it would also compile fine under C11 or C17. C23 was a deliberate choice to work with the modern standard rather than something the code strictly requires.

## How to Compile

```bash
gcc -Wall -Wextra -std=c23 main.c -o main
```

## How to Run

```bash
./main
```

## Project Status

🚧 Work in progress — currently improving input handling (stripping the trailing newline left by `fgets`) and planning to add:
- Saving tasks to a file so they persist between runs
- A Makefile
- Marking tasks as completed

## Author

Abdoullah
GitHub: [@abdoullah460](https://github.com/abdoullah460)
