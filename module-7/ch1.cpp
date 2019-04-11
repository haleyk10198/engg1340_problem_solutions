#include <iostream>

#define MAX_BOOK 100

using namespace std;

struct Book{
	string name;
	string author;
	int call_number;
	string subject;
}books[100];

int bookCount = 0;

bool equal(const Book a, const Book b);
void insert(const Book book);
void search(const Book book);

bool equal(const Book a, const Book b){
	return (a.name == b.name) && (a.author == b.author) && 
			(a.call_number == b.call_number) && (a.subject == b.subject);
}

void insert(const Book book){
	if(bookCount == MAX_BOOK){
		cout << "The library has no space for more books, failed to insert book!" << endl;
		return;
	}
	
	books[bookCount++] = book;
}

void search(const Book book){
	int matchCount = 0;
	for(int i = 0; i < bookCount; i++){
		if(equal(books[i], book)){
			matchCount++;
		}
	}
	
	if(matchCount == 0){
		cout << "No matching record is found!" << endl;
		return;
	}
	else{
		cout << matchCount << " matching record(s) are found!" << endl;
		return;
	}
}

int main(){
	freopen("ch1.txt", "r", stdin); // redirecting cin to ch1.txt
	
	string command;
	
	while(cin >> command){
		if(command == "Insert"){
			Book book;
			cin >> book.name >> book.author >> book.call_number >> book.subject;
			
			insert(book);
		}
		if(command == "Search"){
			Book book;
			cin >> book.name >> book.author >> book.call_number >> book.subject;
			
			search(book);
		}
		if(command == "Exit"){
			return 0;
		}
	}
}
