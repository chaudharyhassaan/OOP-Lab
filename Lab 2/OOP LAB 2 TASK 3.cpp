//#include <iostream>
//using namespace std;
//
//char** AllocateMemory(int& rows, int& cols)
//{
//    cout << "Enter number of rows: ";
//    cin >> rows;
//
//    cout << "Enter number of columns: ";
//    cin >> cols;
//
//    char** matrix = new char* [rows];
//
//    for (int i = 0; i < rows; i++)
//        *(matrix + i) = new char[cols];
//
//    return matrix;
//}
//
//void InputMatrix(char** matrix, int rows, int cols)
//{
//    cout << "Enter matrix elements:\n";
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            cin >> *(*(matrix + i) + j);
//}
//
//void DisplayMatrix(char** matrix, int rows, int cols)
//{
//    cout << "\nMatrix:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++)
//            cout << *(*(matrix + i) + j) << " ";
//        cout << endl;
//    }
//}
//
//void Separate(char** matrix, int rows, int cols)
//{
//    int total = rows * cols;
//
//    char* alph = new char[total];
//    char* num = new char[total];
//    char* special = new char[total];
//
//    int a = 0, n = 0, s = 0;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            char c = *(*(matrix + i) + j);
//
//            if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
//                *(alph + a++) = c;
//            else if (c >= 48 && c <= 57)
//                *(num + n++) = c;
//            else
//                *(special + s++) = c;
//        }
//    }
//
//    cout << "\nAlphabets: ";
//    for (int i = 0; i < a; i++)
//        cout << *(alph + i) << " ";
//
//    cout << "\nNumbers: ";
//    for (int i = 0; i < n; i++)
//        cout << *(num + i) << " ";
//
//    cout << "\nSpecial Characters: ";
//    for (int i = 0; i < s; i++)
//        cout << *(special + i) << " ";
//
//    delete[] alph;
//    delete[] num;
//    delete[] special;
//}
//
//int main()
//{
//    int rows, cols;
//
//    char** matrix = AllocateMemory(rows, cols);
//
//    InputMatrix(matrix, rows, cols);
//    DisplayMatrix(matrix, rows, cols);
//    Separate(matrix, rows, cols);
//
//    for (int i = 0; i < rows; i++)
//        delete[] * (matrix + i);
//    delete[] matrix;
//
//    return 0;
//}
