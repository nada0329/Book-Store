#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

using namespace std;

class Book
{
    public:
        Book();
        Book(string a, string t, string pub, int pr, int pos);
        ~Book();
        void addbook();
        void showbook();
        void buybook();
        bool searchbook(string t);
        int getnumofbooks();
        bool getstatus();
        int getbookserial(string t);

    protected:

    private:
        string author, title, publisher;
        int position, price,bookserial;
        bool reserved=false;
        static int numofbooks;
};

#endif // BOOK_H
