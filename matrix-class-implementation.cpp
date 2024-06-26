#include<iostream>
using namespace std;
class Matrix
{
    int **matrix; // declare 2D pointer
    int rows;
    int cols;

public:
	//default constructor
	Matrix() {
    rows = rows;
    cols = cols;
    matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0; // initialize with zero
        }
    }
}

	Matrix (int n1, int n2, int n3, int n4, int row = 2,int col = 2)
	{
		rows=row;
		cols=col;
		matrix = new int*[rows];
        for (int i = 0; i < row; i++) 
		{
            matrix[i] = new int[cols];
        }
		matrix[0][0]=n1;
		matrix[0][1]=n2;
		matrix[1][0]=n3;
		matrix[1][1]=n4;
	}
	
	Matrix (int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9,int row = 3,int col = 3)
	{
		rows=row;
		cols=col;
		matrix = new int*[rows];
        for (int i = 0; i < row; i++) 
		{
            matrix[i] = new int[cols];
        }
		matrix[0][0]=n1;
		matrix[0][1]=n2;
		matrix[0][2]=n3;
		matrix[1][0]=n4;
		matrix[1][1]=n5;
		matrix[1][2]=n6;
		matrix[2][0]=n7;
		matrix[2][1]=n8;
		matrix[2][2]=n9;
	}
	
	Matrix (int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11,int n12, int n13, int n14, int n15, int n16, int row = 4,int col = 4)
	{
		rows=row;
		cols=col;
		matrix = new int*[rows];
        for (int i = 0; i < row; i++) 
		{
            matrix[i] = new int[cols];
        }
		matrix[0][0]=n1;
		matrix[0][1]=n2;
		matrix[0][2]=n3;
		matrix[0][3]=n4;
		matrix[1][0]=n5;
		matrix[1][1]=n6;
		matrix[1][2]=n7;
		matrix[1][3]=n8;
		matrix[2][0]=n9;
		matrix[2][1]=n10;
		matrix[2][2]=n11;
		matrix[2][3]=n12;
		matrix[3][0]=n13;
		matrix[3][1]=n14;
		matrix[3][2]=n15;
		matrix[3][3]=n16;
	}
	
	
//	Matrix(sonst Matrix &m)
//	{
//	}
	
	int getRows()
	{
		return rows;
	}
	
	int getColumns()
	{
		return cols;
	}
	
	int getValue(int row, int col)
	{
		return matrix[row][col];
	}
	
	void setValue(int row, int col, int value)
	{
		matrix[row][col]=value;
	}
	
	int Total()
	{
		int sum=0;
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				sum=sum+matrix[i][j];
			}
		}
		return sum;
	}
	
	double Average()
	{
		double sum=0;
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				sum=sum+matrix[i][j];
			}
		}
		double average=sum/(rows*cols);
		return average;
	}
	
	int RowTotal(int row)
	{
		int sum=0;
		for(int j=0;j<cols;j++)
		{
			sum=sum+matrix[row][j];
		}	
		return sum;		
	}
	
	int ColumnTotal(int col)
	{
		int sum=0;
		for(int j=0;j<rows;j++)
		{
			sum=sum+matrix[j][col];
		}	
		return sum;	
	}
	
	int HighestInRow(int row)
	{
		int highest=-9999;
		for(int j=0;j<cols;j++)
		{
			if(highest<matrix[row][j])
			highest=matrix[row][j];
		}	
		return highest;		
	}
	
int LowestInRow(int row)
{
    int lowest=99999;
    for(int j=0;j<cols;j++)
    {
        if(lowest>matrix[row][j])
        lowest=matrix[row][j];
    }   
    return lowest;        
}


Matrix Transpose()
{
    Matrix transpose;
    transpose.rows = cols;
    transpose.cols = rows;
    transpose.matrix = new int*[transpose.rows];
    for (int i = 0; i < transpose.rows; i++) {
        transpose.matrix[i] = new int[transpose.cols];
        for (int j = 0; j < transpose.cols; j++) {
            transpose.matrix[i][j] = matrix[j][i];
        }
    }
     for (int i = 0; i < transpose.rows; i++) 
	 {
     	for (int j = 0; j < transpose.cols; j++)
     	{
			cout<<transpose.matrix[i][j]<<" ";
		}
		cout<<endl;
	 }
    return transpose;
}



	int LeftDiagonalTotal()
	{
		int sum=0;
		for(int i=0, j=0;i<rows,j<cols;i++,j++)
		{
				sum=sum+matrix[i][j];
		}
		return sum;
	}
	
	int RightDiagonalTotal()
	{
		int sum=0;
		for(int i=0, j=cols-1;i<rows,j>=0;i++,j--)
		{
				sum=sum+matrix[i][j];
		}
		return sum;
	}
	
	Matrix Add(const Matrix &m)
	{
	// Allocate memory for the rows
	int** temp = new int*[rows];
	// Allocate memory for the columns of each row
	for (int i = 0; i < rows; i++) 
	{
   		temp[i] = new int[cols];
	}
	
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				temp[i][j] = matrix[i][j] + m.matrix[i][j];
			}
		}
		
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				cout<<temp[i][j]<<" ";
			}
			cout<<endl;
		}
		
		return m;
	}


	Matrix Substract(const Matrix &m)
	{
	// Allocate memory for the rows
	int** temp = new int*[rows];
	// Allocate memory for the columns of each row
	for (int i = 0; i < rows; i++) 
	{
   		temp[i] = new int[cols];
	}
	
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				temp[i][j] = matrix[i][j] - m.matrix[i][j];
			}
		}
		
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				cout<<temp[i][j]<<" ";
			}
			cout<<endl;
		}
		
		return m;
	}	
	
	
Matrix Multiply(Matrix m)
{
    // Allocate memory for the rows
	int** temp = new int*[rows];
	// Allocate memory for the columns of each row
	for (int i = 0; i < rows; i++) 
	{
   		temp[i] = new int[cols];
	}
	
    // Multiply matrices A and B
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < m.cols; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                temp[i][j] += matrix[i][k] * m.matrix[k][j];
            }
        }
    }
	//printed the multipled matrix
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < m.cols; j++)
    {
        cout << temp[i][j] << " ";
    }
    cout << endl;
}
	
    return m;
}


	int FindkSmallest(int k)
	{
		int lowest=99999;
		int lowest2=99998;
		for(int a=1;a<=k;k++)
		{
		for(int i=0;i<rows;i++)
		{
		for(int j=0;j<cols;j++)
		{
			if(lowest>matrix[i][j])
			lowest=matrix[i][j];
		}	
		}
		if(lowest<lowest2)
		lowest2=lowest;
		}
		return lowest2;
	}
	
	int FindkLargest(int k)
	{
		int highest=-99999;
		int highest2=-99998;
		for(int a=1;a<=k;k++)
		{
		for(int i=0;i<rows;i++)
		{
		for(int j=0;j<cols;j++)
		{
			if(highest<matrix[i][j])
			highest=matrix[i][j];
		}	
		}
		if(highest>highest2)
		highest2=highest;
		}
		return highest2;
	}
	
//	Matrix merge(Matrix m)
//	{
//		
//		for(int i=0;)
//	}
	
	void Display()
	{
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				cout<<matrix[i][j]<<"  ";
			}
			cout<<endl;
		}
				
	}
	
	
	~Matrix() {
	for (int i = 0; i < rows; i++) 
	{
        delete[] matrix[i];
    }
        delete[] matrix;
    }
};


int main()
{
	
    // Create a 2x2 matrix
    Matrix m1(1, 2, 3, 4);

    // Create a 3x3 matrix
    Matrix m2(1, 2, 3, 4, 5, 6, 7, 8, 9);


    // Create a 4x4 matrix
    Matrix m3(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	
	
    // Test some of the other methods
//    m1.Display();
//    cout<<"Total Number of rows of m1"<<endl;
//    cout<<m1.getRows();
//    cout<<endl;
//    cout<<"Total Number of columns of m1"<<endl;
//    cout<<m1.getColumns();
//    cout<<endl;
//    cout<<"get value of row 1 and column 1 of m1"<<endl;
//    cout<<m1.getValue(1,1);
//    cout<<endl;
//    cout << "Total of m1: "<< endl;
//    cout<< m1.Total();
//    cout<<endl;
//    cout << "Average of m1: " << endl;
//    cout<< m1.Average();
//    cout<<endl;
//    cout << "Row total of row 1 of m1: "<< endl;
//    cout<<m1.RowTotal(1);
//    cout<<endl;
//    cout << "Column total of column 1 of m1: "<< endl;
//    cout<<m1.ColumnTotal(1); 
//    cout<<endl;
//    cout << "Highest value in row 1 of m1: " << endl;
//    cout<< m1.HighestInRow(1);
//    cout<<endl;
//    cout << "Lowest value in row 1 of m1: "<< endl;
//    cout<< m1.LowestInRow(1);
//    cout<<endl;
//    cout<<"The Transpose of Matrix is :"<<endl;
//    m1.Transpose();
//    cout<<endl;
//    cout << "Left diagonal total of m1: "<< endl;
//    cout<< m1.LeftDiagonalTotal();
//    cout<<endl;
//    cout << "Right diagonal total of m1: "<< endl;
//	cout << m1.RightDiagonalTotal();
//	cout<<endl;
//	cout<<"Add two Matix"<<endl;
//	m1.Add(m1);
//	cout<<endl;
//	cout<<"Substract two Matix"<<endl;
//	m1.Substract(m1);
//	cout<<endl;
//	cout<<"Multiply two Matix"<<endl;
//	m1.Multiply(m1);
//	cout<<endl;
//	cout<<"Find the Kth smallest value"<<endl;
//	cout<<m1.FindkSmallest(2);
//	cout<<endl;
//	cout<<"Find the Kth Largest value"<<endl;
//	cout<<m1.FindkLargest(2);
//	cout<<endl;
//	cout<<"set value of row 1 and column 1 of m1"<<endl;
//    m1.setValue(1,1,7);
//    cout<<endl;
//	cout<<endl;
//	cout<<endl;
	
//	m2.Display();
//	cout<<"Total Number of rows of m2"<<endl;
//    cout<<m2.getRows();
//    cout<<endl;
//    cout<<"Total Number of columns of m2"<<endl;
//    cout<<m2.getColumns();
//    cout<<endl;
//    cout<<"get value of row 1 and column 1 of m2"<<endl;
//    cout<<m2.getValue(1,1);
//    cout<<endl;
//    cout <<"Total of m2: "<< endl;
//    cout<< m2.Total();
//    cout<<endl;
//    cout <<"Average of m2: " << endl;
//    cout<< m2.Average();
//    cout<<endl;
//    cout<<"Row total of row 2 of m2: "<< endl;
//    cout<<m2.RowTotal(2);
//    cout<<endl;
//    cout<<"Column total of column 3 of m2: "<< endl;
//    cout<<m2.ColumnTotal(2); 
//    cout<<endl;
//    cout<<"Highest value in row 1 of m2: " << endl;
//    cout<< m2.HighestInRow(0); 
//    cout<<endl;
//    cout<<"Lowest value in row 1 of m2: "<< endl;
//    cout<<m2.LowestInRow(0); 
//    cout<<endl;
//    cout<<"The Transpose of Matrix is :"<<endl;
//    m2.Transpose();
//    cout<<endl;
//    cout<<"Left diagonal total of m2: "<< endl;
//    cout<< m2.LeftDiagonalTotal();
//    cout<<endl;
//    cout << "Right diagonal total of m2: "<< endl;
//	cout << m2.RightDiagonalTotal();
//	cout<<endl;
//	cout<<"Find the Kth smallest value"<<endl;
//	cout<<m2.FindkSmallest(2);
//	cout<<endl;
//	cout<<"Find the Kth Largest value"<<endl;
//	cout<<m2.FindkLargest(2);
//	cout<<endl;
//	cout<<"set value of row 1 and column 1 of m1"<<endl;
//    m1.setValue(1,1,7);
//    cout<<endl;
//	cout<<endl;
//	cout<<endl;

//	m3.Display();
//	cout<<"Total Number of rows of m2"<<endl;
//    cout<<m3.getRows();
//    cout<<endl;
//    cout<<"Total Number of columns of m2"<<endl;
//    cout<<m3.getColumns();
//    cout<<endl;
//    cout<<"get value of row 1 and column 1 of m2"<<endl;
//    cout<<m3.getValue(1,1);
//    cout<<endl;
//    cout << "Total of m3: "<< endl;
//    cout<< m3.Total();
//    cout<<endl;
//    cout << "Average of m3: " << endl;
//    cout<< m3.Average();
//    cout<<endl;
//    cout << "Row total of row 2 of m3: "<< endl;
//    cout<<m3.RowTotal(2);
//    cout<<endl;
//    cout << "Column total of column 3 of m3: "<< endl;
//    cout<<m3.ColumnTotal(2); 
//    cout<<endl;
//    cout << "Highest value in row 1 of m3: " << endl;
//    cout<< m3.HighestInRow(0); 
//    cout<<endl;
//    cout << "Lowest value in row 1 of m3: "<< endl;
//    cout<< m3.LowestInRow(0); 
//    cout<<endl;
//    cout << "Left diagonal total of m3: "<< endl;
//    cout<< m3.LeftDiagonalTotal();
//    cout<<endl;
//    cout << "Right diagonal total of m3: "<< endl;
//	cout << m3.RightDiagonalTotal();
//	cout<<endl;
//	cout<<"Find the Kth smallest value"<<endl;
//	cout<<m3.FindkSmallest(2);
//	cout<<endl;
//	cout<<"Find the Kth Largest value"<<endl;
//	cout<<m3.FindkLargest(2);
//	cout<<endl;
//	cout<<"set value of row 1 and column 1 of m1"<<endl;
//    m1.setValue(1,1,7);
//    cout<<endl;
//	cout<<endl;
//	cout<<endl;

    return 0;
}
