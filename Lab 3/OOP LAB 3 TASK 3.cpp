//#include <iostream>
//using namespace std;
//
//int** GetFactorsArray(int& count)
//{
//    cout << "Enter number of inputs: ";
//    cin >> count;
//
//    int* numbers = new int[count];
//    int actualCount = 0;
//
//    for (int i = 0; i < count; i++)
//    {
//        int num;
//        cout << "Enter Number between 6 and 100 (-1 to stop): ";
//        cin >> num;
//
//        if (num == -1) break;
//
//        if (num <= 6 || num >= 100)
//        {
//            cout << "Wrong input. Re-enter.\n";
//            i--;
//            continue;
//        }
//
//        *(numbers + actualCount++) = num;
//    }
//
//    int** factors = new int* [actualCount];
//
//    for (int i = 0; i < actualCount; i++)
//    {
//        int num = *(numbers + i);
//        int factorCount = 0;
//
//        for (int j = 1; j <= num; j++)
//            if (num % j == 0)
//                factorCount++;
//
//        *(factors + i) = new int[factorCount + 1];
//        *(*(factors + i)) = num;
//
//        int index = 1;
//
//        for (int j = 1; j <= num; j++)
//            if (num % j == 0)
//                *(*(factors + i) + index++) = j;
//    }
//
//    delete[] numbers;
//    count = actualCount;
//    return factors;
//}
//
//void Print(int** factors, int count)
//{
//    for (int i = 0; i < count; i++)
//    {
//        cout << "Factors of " << *(*(factors + i)) << " are: ";
//
//        int num = *(*(factors + i));
//
//        for (int j = 1; j <= num; j++)
//            if (num % j == 0)
//                cout << j << " ";
//
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int count;
//    int** factors = GetFactorsArray(count);
//    Print(factors, count);
//
//    for (int i = 0; i < count; i++)
//        delete[] * (factors + i);
//
//    delete[] factors;
//
//    return 0;
//}
