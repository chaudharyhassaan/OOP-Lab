//#include <iostream>
//using namespace std;
//
//void VoteCasting(char** name, int** regions, int* total)
//{
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "Enter candidate name: ";
//        cin >> *(name + i);
//
//        *(total + i) = 0;
//
//        for (int j = 0; j < 4; j++)
//        {
//            cout << "Enter votes for Region " << j + 1 << ": ";
//            cin >> *(*(regions + i) + j);
//
//            *(total + i) += *(*(regions + i) + j);
//        }
//    }
//}
//
//void show_record(char** name, int** regions, int* total)
//{
//    int grandTotal = 0;
//    int maxIndex = 0;
//
//    cout << "\nCandidate\tR1\tR2\tR3\tR4\tTotal\n";
//
//    for (int i = 0; i < 3; i++)
//    {
//        cout << *(name + i) << "\t";
//
//        for (int j = 0; j < 4; j++)
//            cout << *(*(regions + i) + j) << "\t";
//
//        cout << *(total + i) << endl;
//
//        grandTotal += *(total + i);
//
//        if (*(total + i) > *(total + maxIndex))
//            maxIndex = i;
//    }
//
//    cout << "\nWinner: " << *(name + maxIndex);
//    cout << "\nTotal Votes Received: " << *(total + maxIndex);
//    cout << "\nTotal Polled Votes: " << grandTotal << endl;
//}
//
//int main()
//{
//    char** names = new char* [3];
//    for (int i = 0; i < 3; i++)
//        *(names + i) = new char[20];
//
//    int** regions = new int* [3];
//    for (int i = 0; i < 3; i++)
//        *(regions + i) = new int[4];
//
//    int* total = new int[3];
//
//    VoteCasting(names, regions, total);
//    show_record(names, regions, total);
//
//    for (int i = 0; i < 3; i++) {
//        delete[] * (names + i);
//        delete[] * (regions + i);
//    }
//
//    delete[] names;
//    delete[] regions;
//    delete[] total;
//
//    return 0;
//}
