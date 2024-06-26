# matrix-class-implementation
# Matrix Class Implementation

This repository contains an implementation of a `Matrix` class in C++. The class allows the creation and manipulation of matrices of sizes 2x2, 3x3, and 4x4.

## Class Definition

The `Matrix` class has the following private member variables:
- `int** matrix`: A double pointer to create a 2D array (matrix)
- `int rows`: An integer to store the number of rows in the matrix
- `int cols`: An integer to store the number of columns in the matrix

### Public Member Functions

1. **Constructors**:
   - `Matrix()`: Default constructor.
   - `Matrix(int n1, int n2, int n3, int n4, int row = 2, int col = 2)`: Parameterized constructor for a 2x2 matrix.
   - `Matrix(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int row = 3, int col = 3)`: Parameterized constructor for a 3x3 matrix.
   - `Matrix(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11, int n12, int n13, int n14, int n15, int n16, int row = 4, int col = 4)`: Parameterized constructor for a 4x4 matrix.

2. **Copy Constructor**:
   - `Matrix(const Matrix &m)`: Copy constructor.

3. **Destructor**:
   - `~Matrix()`: Destructor to deallocate memory.

4. **Getters**:
   - `int getRows()`: Returns the number of rows.
   - `int getColumns()`: Returns the number of columns.

5. **Matrix Operations**:
   - `int getValue(int row, int col)`: Returns the value at the given row and column.
   - `void setValue(int row, int col, int value)`: Sets the value at a given row and column.
   - `int Total()`: Calculates the total sum of all the values in the matrix.
   - `double Average()`: Calculates the average of all the values in the matrix.
   - `int RowTotal(int row)`: Calculates the total sum of the values in the specified row.
   - `int ColumnTotal(int col)`: Calculates the total sum of the values in the specified column.
   - `int HighestInRow(int row)`: Finds the highest value in the specified row.
   - `int LowestInRow(int row)`: Finds the lowest value in the specified row.
   - `Matrix Transpose()`: Finds the transpose of the matrix.
   - `int LeftDiagonalTotal()`: Calculates the total sum of the values in the left diagonal.
   - `int RightDiagonalTotal()`: Calculates the total sum of the values in the right diagonal.
   - `Matrix Add(const Matrix &m)`: Adds the calling object matrix with the one passed as an argument and returns the resultant matrix.
   - `Matrix Subtract(const Matrix &m)`: Subtracts the calling object matrix with the one passed as an argument and returns the resultant matrix.
   - `Matrix Multiply(const Matrix &m)`: Multiplies the calling object matrix with the one passed as an argument and returns the resultant matrix.
   - `int FindkSmallest(int k)`: Finds the k-th smallest element in the matrix.
   - `int FindkLargest(int k)`: Finds the k-th largest element in the matrix.

6. **Display Function**:
   - `void Display()`: Displays the matrix.
