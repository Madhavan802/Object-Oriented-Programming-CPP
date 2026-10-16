#include<bits\stdc++.h>
using namespace std;

//is a relationship
//derived class is a relationship
class Author{
     protected:
     string name;
     int bookId=0;

     public:
     Author(string name,int bookId)
     {
        this->name=name;
        this->bookId=bookId;
     }
     void display()
     {
        cout<<name<<"'s "<<bookId<<"th book."<<endl; 
     }
};
class Book:public Author{
    private:
    string bookName;
    public:
    Book(string bookName,string name,int bookId):Author(name,bookId)
    {
        this->bookName=bookName;
    }
    void bookDisplay()
    {
        display();
        cout<<"BookName:"<<bookName;
    }
};

//has a relationship
class AuthorDetails{
    protected:
    string authorName;
    int number;
    public:
    AuthorDetails(string authorName,int number)
    {
        this->authorName=authorName;
        this->number=number;
    }
    void display(){
        cout<<"Author:"<<authorName<<endl;
    }
};
class PublishBook{
      private:
      string Book;
      AuthorDetails* a;
      public:
      PublishBook(string book,AuthorDetails* a)
      {
        this->Book=book;
        this->a=a;
      }
      void display()
      {
          a->display();
          cout<<"Book:"<<Book<<endl;
      }
};
int main(){
      Book b("The lastBook","Peter",1);
      Book c("The second book","Mike",2);
      b.bookDisplay();
      c.bookDisplay();

      AuthorDetails a1("JK Rowling",1);
      PublishBook a3("Chamber of secrets",&a1);

    return 0;
}