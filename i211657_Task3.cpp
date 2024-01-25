#include<iostream>
using namespace std;

const int MAX = 5;

void InputMatrix(int M[MAX][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<"Enter element ["<<i<<"]["<<j<<"]: "<<endl;
			cin>>M[i][j];
		}
	}
}

void DisplayMatrix(int M[MAX][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << M[i][j] << " ";
		}	
		cout<<endl;
	}
}

void SumofElements(int M[MAX][MAX], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; i < n; j++)
		{
			sum += M[i][j];
		}
	}
	cout<<"Sum of elements: "<<sum<<endl;
}

void SumofRow(int M[MAX][MAX], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += M[i][j];
		}
		cout<<"Sum of row "<<i<<": "<<sum<<endl;
	}
}

void SumofColumn(int M[MAX][MAX], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += M[j][i];
		}
		cout<<"Sum of column "<<i<<": "<<sum<<endl;
	}
}

void Transpose(int M[MAX][MAX], int m, int n)
{
	int T[MAX][MAX];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; i++)
		{
			T[i][j] = M[j][i];
		}
	}
	cout<<"Transpose of the matrix: "<<endl;
	DisplayMatrix(T, n, m);
}

int main()
{
	int choice;
	do
	{

		cout << " Matrix Functions " << endl;
		cout << "------------------" << endl;
		cout << "Choose between the following options: " << endl;
		cout << "1. Input Matrix" << endl;
		cout << "2. Display Matrix" << endl;
		cout << "3. Sum of elements" << endl;
		cout << "4. Sum of row" << endl;
		cout << "5. Sum of column" << endl;
		cout << "6. Transpose" << endl;
		cout << "7. Exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			int M[MAX][MAX], m, n;

			cout << "Enter the number of rows: " << endl;
			cin >> m;

			cout << "Enter the number of columns: " << endl;
			cin >> n;

			InputMatrix(M, m, n);
			DisplayMatrix(M, m, n);
			break;
		}
		case 2:
		{
			int M[MAX][MAX], m, n;

			cout << "Enter the number of rows: " << endl;
			cin >> m;

			cout << "Enter the number of columns: " << endl;
			cin >> n;

			InputMatrix(M, m, n);
			DisplayMatrix(M, m, n);
			break;
		}
		case 3:
		{
			int M[MAX][MAX], m, n;

			cout << "Enter the number of rows: " << endl;
			cin >> m;

			cout << "Enter the number of columns: " << endl;
			cin >> n;

			InputMatrix(M, m, n);
			SumofElements(M, m, n);
			break;
		}
		case 4:
		{
			int M[MAX][MAX], m, n;

			cout << "Enter the number of rows: " << endl;
			cin >> m;

			cout << "Enter the number of columns: " << endl;
			cin >> n;

			InputMatrix(M, m, n);
			SumofRow(M, m, n);
			break;
		}
		case 5:
		{
			int M[MAX][MAX], m, n;

			cout << "Enter the number of rows: " << endl;
			cin >> m;

			cout << "Enter the number of columns: " << endl;
			cin >> n;

			InputMatrix(M, m, n);
			SumofColumn(M, m, n);
			break;
		}
		case 6:
		{
			int M[MAX][MAX], m, n;

			cout << "Enter the number of rows: " << endl;
			cin >> m;

			cout << "Enter the number of columns: " << endl;
			cin >> n;

			InputMatrix(M, m, n);
			Transpose(M, m, n);
			break;
		}
		case 7:
		{
			system("CLR");
			break;
		}
		}
	} while (choice!=7);
}