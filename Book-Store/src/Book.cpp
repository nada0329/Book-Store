#include "Book.h"

int Book::numofbooks=0;
Book::Book()
{
    author="un-known";
    title="un-known";
    publisher="un-known";
    price=0;
    position=0;
    //ctor
}
Book::Book(string a, string t, string pub, int pr, int pos)
{
    author=a;
    title=t;
    publisher=pub;
    price=pr;
    position=pos;
    //ctor
}

Book::~Book()
{
    //dtor
}

void Book::addbook()
{
    bookserial=numofbooks++;
    cout<<"\nAuthor Name: ";      cin>>author;
	cout<<"Title Name: ";       cin>>title;
	cout<<"Publisher Name: ";   cin>>publisher;
	cout<<"Price: ";            cin>>price;
	cout<<"Stock Position: ";   cin>>position;
}
void Book::showbook()
{
    cout<<"Author Name: "<<author<<endl;
	cout<<"Title Name: "<<title<<endl;
	cout<<"Publisher Name: "<<publisher<<endl;
	cout<<"Price: "<<price<<endl;
	cout<<"Stock Position: "<<position<<endl;
	cout<<"status: ";
	(reserved)?cout<<"reserved\n":cout<<"not reserved\n";
}
void Book::buybook()
{
    reserved=true;
}
bool Book::searchbook(string t)
{

    if(t==title)
        return true;
    else
        return false;
}
int Book::getnumofbooks()
{
    return numofbooks;
}
bool Book::getstatus()
{
    return reserved;
}
int Book::getbookserial(string t)
{
    return bookserial;
}
