#include<iostream>
#include<vector>

using namespace std;
struct Book
{
	string title;
	int grade;
};

bool fillBookList(Book& b) {
	cout << "å ���� �Է� : ";
	cin >> b.title;
	if (b.title == "quit") {
		return false;
	}

	cout << "å ��� �Է� : ";
	cin >> b.grade;
	cout << endl;
	return true;
}

void showBookList(Book& b) {
	cout << "å ���� : " << b.title << ", å ��� : " << b.grade << endl;
}

int main() {
	vector<Book> bookList;
	vector<Book>::iterator ptr;
	vector<Book> oldList(bookList);
	Book temp;

	while (fillBookList(temp)) {
		bookList.push_back(temp);
	}
	int num = bookList.size(); //�迭���� ����

	for (ptr = bookList.begin(); ptr != bookList.end(); ptr++) {
		showBookList(*ptr);
	}
	cout << "dddddddddddddddddddddddddddddddddddddd" << endl;
	for (ptr = oldList.begin(); ptr != oldList.end(); ptr++) {
		showBookList(*ptr);
	}
	cout << "dddddddddddddddddddddddddddddddddddddd" << endl;
	bookList.erase(bookList.begin() + 1, bookList.begin() + 4);
	for (ptr = bookList.begin(); ptr != bookList.end(); ptr++) {
		showBookList(*ptr);
	}
	bookList.insert(bookList.begin(), oldList.begin() + 1, oldList.begin() + 2);
	for (ptr = bookList.begin(); ptr != bookList.end(); ptr++) {
		showBookList(*ptr);
	}
	return 0;
}