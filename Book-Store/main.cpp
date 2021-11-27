#include "Book.h"

using namespace std;

int main()
{
    Book books[20];
    int choise,i=0;
    string t;
    while(1)
    {
        cout<<"\t MENU"
		<<"\n1. ADD New Book"
		<<"\n2. Buy Book"
		<<"\n3. Search For Book"
		<<"\n4. Show all Books"
		<<"\n5. Exit System"
		<<"\n Enter your choice: ";
		cin>> choise;
		switch(choise)
		{
        case 1:
            books[i].addbook();
            i++;
            break;
        case 2:
            if(books[0].getnumofbooks()!=0)
            {
                bool f=false,sell=false;
                cout<<"what is title?\n";
                cin>>t;
                for(int j=0;j<books[0].getnumofbooks();j++)
                {
                    if(books[j].searchbook(t))
                    {
                        f=true;
                        if(books[j].getstatus())
                        {
                            cout<<"sorry reserved"<<endl;
                            break;
                        }
                        else
                        {
                            cout<<"congrats its yours"<<endl;
                            books[j].buybook();
                            break;
                        }

                    }
                }
                if(!f)
                {
                    cout<<"not here"<<endl;
                }
            }
            else
            {
                cout<<"no books here"<<endl;
            }
            break;
        case 3:
            if(books[0].getnumofbooks()!=0)
            {
                bool f=false;
                cout<<"what is title?\n";
                cin>>t;
                for(int j=0;j<books[0].getnumofbooks(); j++)
                {
                    if(books[j].searchbook(t))
                        {
                            f=true;
                            cout<<"found"<<endl;
                            books[j].showbook();
                            break;
                        }
                }
                if(!f)
                {
                    cout<<"not here"<<endl;

                }
            }
            else
            {
                cout<<"no books here"<<endl;
            }
            break;
        case 4:
            for(int j=0;j<books[0].getnumofbooks();j++)
            {
                cout<<j+1<<endl;
                books[j].showbook();
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            cout<<"wrong choise!!!!"<<endl;
            break;
		}
    }
    return 0;
}
