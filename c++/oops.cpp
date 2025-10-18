#include <bits/stdc++.h>
using namespace std;

class book {
public:
    int id;
    string title;
    string author;
    int availablecopies;

    book(int id, string title, string author, int availablecopies) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->availablecopies = availablecopies;
    }

    void displaybook() {
        cout << "Book ID: " << id << ", Title: " << title
             << ", Author: " << author
             << ", Available: " << availablecopies << endl;
    }
};

class member {
public:
    int memberid;
    string name;
    int phonenumber;
    vector<int> infobook;

    member(int id, string studentname, int phonenumber) {
        this->memberid = id;
        this->name = studentname;
        this->phonenumber = phonenumber;
    }

    void borrowbook(int bookid) {
        infobook.push_back(bookid);
    }

    void returnbook(int bookid) {   // ?? this is line compiler is pointing to
        auto it = find(infobook.begin(), infobook.end(), bookid);
        if (it != infobook.end()) {
            infobook.erase(it);
        }
    }
};


class library {
public:
    vector<book> books;
    vector<member> members;

    void addbook(book b) {
        books.push_back(b);
    }

    void addmember(member a) {
        members.push_back(a);
    }

    void borrowbook(int memberid, int bookid) {
        bool f = false;
        for (auto &b : books) {
            if (b.id == bookid && b.availablecopies > 0) {
                for (auto &m : members) {
                    if (m.memberid == memberid) {
                        m.borrowbook(bookid);
                        b.availablecopies--;
                        f = true;
                        cout << m.name << " borrowed " << b.title << endl;
                        return;
                    }
                }
            }
        }
        if (!f) cout << "Book is not available\n";
    }

    void returnbook(int memberid, int bookid) {
        for (auto &b : books) {
            if (b.id == bookid) {
                for (auto &m : members) {
                    if (m.memberid == memberid) {
                        m.returnbook(bookid);
                        b.availablecopies++;
                        cout << m.name << " returned " << b.title << endl;
                        return;
                    }
                }
            }
        }
        cout << "Invalid return" << endl;
    }
};

int main() {
    library lib;

    book b1(1, "History", "Ramu", 4);
    lib.addbook(b1);

    member m1(2, "Ravi", 12345676);
    lib.addmember(m1);

    lib.borrowbook(2, 1);   
    lib.returnbook(2, 1);   

    return 0;
}










