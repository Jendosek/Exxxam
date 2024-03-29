#include <iostream>
#include <string>
#include <algorithm> 
#include <vector>
using namespace std;


//  6  (трохи не зрозумів як створити ще один клас бібліотеки)
//class Book {
//private:
//	string title;
//	string author;
//	string year;
//public:
//	Book() {
//		cout << "Enter title: ";
//		cin >> title;
//		cout << "Enter author: ";
//		cin >> author;
//		cout << "Enter year: ";
//		cin >> year;
//		cout << endl;
//	}
//	void GetInfo() {
//		cout << "Title: " << title << ", author: " << author << ", year: " << year << endl;
//		cout << endl;
//	}
//};
//
//int main() {
//
//	Book book1;
//	book1.GetInfo();
//	Book book2;
//	book1.GetInfo();
//
//	return 0;
//}


//  5
//class Car {
//private:
//	string marka = "BMW";
//	string model = "x5";
//	string year = "2021";
//	string volume = "6.3";
//
//public:
//	void GetMarka() {
//  cout << "Marka: " << marka << endl;
//	}
//	void GetModel() {
//		cout << "Model: " << model << endl;
//	}
//	void GetYear() {
//		cout << "YeaR: " << year << endl;
//	}
//	void GetVolume() {
//		cout << "Volume: " << volume << endl;
//	}
//
//};
//
//
//int main() {
//	Car obj;
//	obj.GetMarka();
//	obj.GetModel();
//	obj.GetYear();
//	obj.GetVolume();
//}

//  4
//class Rectangle {
//private:
//	int a, b;
//public:
//	Rectangle() {
//		cout << "Enter 1 side: ";
//		cin >> a;
//		cout << "Enter 2 side: ";
//		cin >> b;
//	}
//	void GetS() {
//		int S = a * b;
//		cout << "S: " << S << endl;
//	}
//	void GetP() {
//		int P = 2 * (a + b);
//		cout << "P: " << P << endl;
//	}
//};
//
//
//int main() {
//	Rectangle obj;
//	obj.GetS();
//	obj.GetP();
//}



//  1  2  3
//int main()
//{
//    string line;
//    string name;
//    int age;
//
//    cout << "Enter your name: ";
//    cin >> name;
//    cout << "Welcome in my app, " << name << endl;
//    cout << "Enter your age: ";
//    cin >> age;
//    if (age <= 17) {
//        cout << "You are not of legal age!!!" << endl;
//    }
//    else {
//        cout << "You are of legal age" << endl;
//    }
//    cout << "Enter line: ";
//    cin >> line;
//    for (int i = line.length() - 1; i >= 0; i--)
//    {
//        cout << line[i];
//    }
//
//    return 0;
//}