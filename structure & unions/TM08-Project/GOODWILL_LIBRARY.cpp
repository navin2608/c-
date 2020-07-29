#include <iostream>
#include<cstring>
using namespace std;
#define BOOKSLENGTH 20
struct book{
    int id;
    char name[100];
    int copies;
};
struct book bookLibrary[BOOKSLENGTH];


int getInt(char str[], int len){
    int num=0;
    for(int i=0; i<len; i++){
        char ch = str[i];
        num = (num*10) + (ch-'0');
    }
    return num;
}

void storeBookInStruct(char data[], int bookNum){
    int i=0, k=0, start=0, end=0, j=0;
    struct book b;
    while(data[i]!='\0'){
        char value[100];
        j=0;
        while(data[i+1]!='\0'){
            if(data[i]==' ' && data[i+1]==' '){
                break;
            }
            value[j++]=data[i++];
        }
        if(data[i]==' ' && data[i+1]==' '){
            if(k==0){
                //id
                b.id = getInt(value, j);
            }
            else if(k==1){
                //name
                value[j]='\0';
                strcpy(b.name, value);
            }
            k++;
            i = i+2;
        }
        else if(data[i+1]=='\0'){
            //copies
            b.copies = getInt(value, j);
            i++;
        }
    }
    bookLibrary[bookNum] = b;
}

void getBooks(){
    FILE *filePointer = fopen("books_database.txt", "r");
    if(filePointer == NULL){
        cout<<"Cannot open the file.";
        return;
    }
    char data[100];
    int bookNum=0;
    while(fgets(data, 100, filePointer)!=NULL){
        storeBookInStruct(data, bookNum);
        bookNum++;
    }
    fclose(filePointer);
}

void viewBooks(){
    for(int i=0; i<BOOKSLENGTH; i++){
        cout<<bookLibrary[i].id<<" "<<bookLibrary[i].name<<" "<<bookLibrary[i].copies;
    }
}

void requestBook(int id){
    if(id==0 || id>20){
        cout<<"Book is id not correct.  Please try again";
        return;
    }
    int numberOfCopies = bookLibrary[id-1].copies;
    if(numberOfCopies==0){
        cout<<'\n'<<"This book is presently not on our shelf.  Please try later.";
        return;
    }
    bookLibrary[id-1].copies = numberOfCopies-1;
    cout<<'\n'<<"Congratulations customer your book is allocated.  Please collect it from the shelf.";
    
}

void returnBook(int id){
    if(id==0 || id>20){
        cout<<'\n'<<"Book is id not correct.  Please try again";
        return;
    }
    int numberOfCopies = bookLibrary[id-1].copies;
    bookLibrary[id-1].copies = numberOfCopies+1;
    cout<<'\n'<<"Thank you customer.  Please place the book back on the shelf.";   
}

char* convertIntegerToString(int value){
    if(value == 0){
     char* str = "0";
     return str;   
    }
	static char str[32] = {0};
	int i = 30;
	for(; value && i ; --i, value /= 10){
		str[i] = "0123456789"[value % 10];
    }
	return &str[i+1];
}

void commitChangesToDatabase(){
    FILE *filePointer = fopen("books_database.txt", "w");
    if(filePointer == NULL){
        cout<<"Cannot open the file.";
        return;
    }
    for(int i=0; i<BOOKSLENGTH; i++){
        char book[200] = "";
        char* bookNo = convertIntegerToString(i+1);
        strcpy(book, bookNo);
        strcat(book, "  ");
        char* bookCopies = convertIntegerToString(bookLibrary[i].copies);
        strcat(book, bookLibrary[i].name);
        strcat(book, "  ");
        strcat(book, bookCopies);
        strcat(book, "\n");
        fputs(book, filePointer);
    }
    fclose(filePointer);
}
int main(){
    getBooks();
    int choice, id;
    do{
        cout<<"1. View list of books on shelve"<<endl;
        cout<<"2. Request for a new book"<<endl;
        cout<<"3. Return a book"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                viewBooks();
                break;
            case 2:
                cout<<"Enter the book id"<<endl;
                cin>>id;
                requestBook(id);
                break;
            case 3:
                cout<<"Enter the book id"<<endl;
                cin>>id;
                returnBook(id);
                break;
            case 4: 
                commitChangesToDatabase();
                break;
            default:
                cout<<"Enter correct option...";
                break;
        }
    }while(choice!=4);
}
