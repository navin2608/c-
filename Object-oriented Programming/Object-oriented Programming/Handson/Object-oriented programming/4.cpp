#include<iostream>
using namespace std;

class BOOK{
	private:
		int BOOK_NO;
		char *BOOKTITLE;
		float PRICE;
		
		float TOTAL_COST(int N){
			return N*PRICE;
		}
		
	public:
		void INPUT(int bookno,char *booktitle, float price){
			BOOK_NO=bookno;
			BOOKTITLE=booktitle;
			PRICE=price;
		}
		
		void PURCHASE(){
			int n;
			cout<<"Enter number of copies : ";
			cin>>n;
			cout<<"Total cost: "<<TOTAL_COST(n);
		}
};

int main(){
	BOOK b1;
	int bookno;
	char booktitle[20];
	float price;
	cout<<"Enter Book number , Book Title , Price : ";
	cin>>bookno>>booktitle>>price;
	b1.INPUT(bookno,booktitle,price);
	b1.PURCHASE();
	return 0;
}