# storage-system

# 📦 Dynamic Memory Allocation in C

This project consists of two programs written in C that demonstrate the use of **structures** and **dynamic memory allocation**. The programs are designed for educational purposes and focus on interacting with user-defined data through modular functions and efficient memory handling.

---

## 📁 Project Overview

### 🔹 1. Storage Volume Calculator

This program defines a structure called `storage` that stores:
- The number of boxes a user has
- The total volume of all boxes
- An array of individual box volumes (allocated dynamically)

#### ✅ Features:
- The `defineStorage()` function prompts the user for:
  - Number of boxes
  - Volume of each box
- The `calcStorage()` function calculates the total volume and stores it in the structure
- The `main()` function demonstrates both modules and outputs the total volume

---

### 🔹 2. Array Search Tool

This program defines a structure called `dataHolder` to store:
- An array of user-defined numbers (with dynamic allocation)
- The size of the array

#### ✅ Features:
- The user defines the size and contents of the array
- The `finder()` function checks if a specific value exists in the array
- The program outputs whether the value is present or not

---

## 🛠️ Requirements

To run this project, you will need:
- A C compiler (e.g., GCC)
- Terminal access or an IDE that supports C (e.g., Code::Blocks, Visual Studio Code, CLion)

---

## 🚀 How to Compile and Run

### 🔧 Compile the Programs

Open your terminal and navigate to the folder containing the `.c` files. Then compile the programs using `gcc`:

```bash
# Compile the storage volume program
gcc -o storage storage.c

# Compile the array search program
gcc -o search search.c
