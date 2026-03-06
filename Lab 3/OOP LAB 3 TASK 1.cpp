//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void ReadFile(char* filename, int* arr, int* count)
//{
//    ifstream fin;
//
//  
//    fin.open(filename);
//
//    int temp;
//    *count = 0;
//
//    while (fin >> temp)
//        (*count)++;
//
//    fin.close();
//
//    
//    fin.open(filename);
//
//    for (int i = 0; i < *count; i++)
//        fin >> *(arr + i);
//
//    fin.close();
//}
//
//int main()
//{
//    char filename[50];
//
//    cout << "Enter file name: ";
//    cin >> filename;
//
//    // First count manually before allocation
//
//    ifstream fin(filename);
//
//    if (!fin)
//    {
//        cout << "File not found.\n";
//        return 0;
//    }
//
//    int temp, count = 0;
//
//    while (fin >> temp)
//        count++;
//
//    fin.close();
//
//    // Allocate exact memory
//    int* arr = new int[count];
//
//    // Call function to store data
//    ReadFile(filename, arr, &count);
//
//    cout << "\nNumbers read from file:\n";
//    for (int i = 0; i < count; i++)
//        cout << *(arr + i) << " ";
//
//    delete[] arr;
//
//    return 0;
//}
