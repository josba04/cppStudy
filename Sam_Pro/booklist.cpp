#include<iostream>
#include<vector>

using namespace std;
struct Book
{
	string title;
	int grade;
};

bool fillBookList(Book& b) {
	cout << "책 제목 입력 : ";
	cin >> b.title;
	if (b.title == "quit") {
		return false;
	}

	cout << "책 등급 입력 : ";
	cin >> b.grade;
	cout << endl;
	return true;
}

void showBookList(Book& b) {
	cout << "책 제목 : " << b.title << ", 책 등급 : " << b.grade << endl;
}

int main() {
	vector<Book> bookList;
	vector<Book>::iterator ptr;
	vector<Book> oldList(bookList);
	Book temp;

	while (fillBookList(temp)) {
		bookList.push_back(temp);
	}
	int num = bookList.size(); //배열방의 갯수

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