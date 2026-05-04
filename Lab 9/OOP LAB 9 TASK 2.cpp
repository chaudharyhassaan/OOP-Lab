//#include <iostream>
//#include <string>
//using namespace std;
//
//class FriendClass;
//
//
//class MyClass {
//private:
//    string secretData;
//public:
//    MyClass(string data) : secretData(data) {}
//    friend class FriendClass;
//};
//
//class FriendClass {
//public:
//    void displaySecretData(MyClass obj) {
//        cout << obj.secretData << endl;
//    }
//
//    void modifySecretData(MyClass& obj, string newData) {
//        obj.secretData = newData;
//        cout << obj.secretData << endl;
//    }
//};
//
//int main() {
//    MyClass obj("Hello, friend!");
//    FriendClass friendObj;
//    friendObj.displaySecretData(obj);
//    friendObj.modifySecretData(obj, "Updated secret data");
//    return 0;
//}