# 📝 Array-Based Task Manager 📝

> A specialized C/C++ task management system designed to handle list operations using fixed-size array structures. This project focuses on manual index management and shift logic without the use of pointers or linked lists.

## 🎮 How to Play
*   **Menu Navigation**: Use the 6-option menu to add, delete, or view tasks currently stored in the system.
*   **Adding Tasks**: Provide a 2-letter task name and a specific position `p` on a single line (e.g., `AB 1`).
*   **Automatic Updates**: After every addition or deletion, the system automatically displays the total count and the list in both forward and reverse order.
*   **Position Logic**: Tasks are 1-indexed. Inserting a task at an existing position shifts subsequent tasks to the right.
*   **Constraints**: The list supports a default maximum of 10 tasks.

## ✨ Features
- **Array-Centric Logic**: Implements list insertion and deletion purely through array manipulation and element shifting.
- **Bi-Directional Visualization**: Dedicated functions to print the task list in standard and reverse order without auxiliary data structures.
- **Dynamic Scalability**: Designed for "minimal code change" adaptation to larger capacities (20, 60, or 100+).
- **Robust Error Checking**: Validates positions `p` (for insertion) and `q` (for deletion) to ensure they fall within the current bounds of the list.
- **Stat Tracking**: Real-time reporting of the "Number of Tasks" after every modification.

## 🛠️ Tech Stack
- **Language**: C++
- **Data Structure**: Static Array (No pointers or linked lists permitted).
- **Dependencies**: Standard I/O and String handling libraries only.
- **Input Format**: 
    - **Add**: `[Name] [Position]` (e.g., `CD 2`).
    - **Delete**: `[Position]` (e.g., `1`).

## 🚀 Quick Start

### Compilation

If you have the files locally and the g++ compiler, first navigate to the file location and just run `g++ taskListArrayFunctions.cpp taskListDriver.cpp -o [your_desired_file_name].exe`

To clone and run locally:
```bash
git clone https://github.com
cd task-manager-array
