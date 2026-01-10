# Conway’s Game of Life (C++ / raylib)

A graphical implementation of **Conway’s Game of Life** written in **C++** using the **raylib** graphics library.  
This program simulates cellular automata behavior in real time with an interactive visual display.

## Features
- Real-time simulation of Conway’s Game of Life rules
- Graphical grid rendering using raylib

## Built With
- **C++**
- **raylib**

## Getting Started

### Prerequisites
- C++17-compatible compiler
- raylib (installed and properly linked)

### Building and Running
1. Install raylib and its dependencies following the official instructions
2. Clone this repository
3. Compile the program using your preferred compiler or build system
4. Run the generated executable

## About Conway’s Game of Life
Conway’s Game of Life is a cellular automaton where each cell evolves based on the state of its neighbors, producing complex patterns from simple rules.    

The Game of Life follows four specific criteria:
1. Any live cell with fewer than two live neighbours dies, as if by underpopulation.
2. Any live cell with two or three live neighbours lives on to the next generation.
3. Any live cell with more than three live neighbours dies, as if by overpopulation.
4. Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
