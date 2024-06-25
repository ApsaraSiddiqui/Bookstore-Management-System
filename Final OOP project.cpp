#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<stdio.h>


using namespace std;

 class UI
 {
 	public:
 		void virtual bookVarietyChild()=0;
 		void virtual bookVarietyElder()=0;
 };

 class Book:public UI
 {
 
 	
 	int dc,counter,h,cBk,chi;
 	int stk[1000];
 	public:
 		
 		Book()
 		{
 		    counter=0;
			dc=0;
			h=0;
			cBk=0;
			chi=0; 	
		}
 		void bookVarietyChild();
 		void bookVarietyElder();
 	 	void desireCategory();
 		int mSoldBook(int cc);
 		void cChoice();
 		void cUrdu();
 		void cEnglish();
 		void cFiction();
 		void cNonfiction();
 		void Choice();
 		void stock();
 		void Urdu();
 		void English();
 		void Fiction();
 		void Nonfiction();
 		void bookAvail();
 		void setStock(int stks);
 		int getStock();
 		
 };
 
 void Book::bookVarietyChild()
 {
 	cout<<"\n\t--BOOKS FOR CHILDREN--"<<endl;
 	cout<<"\n\t--COPY AND ORIGINAL BOOKS AVALIABLE\n"<<endl;
 	cout<<"\n URDU BOOKS\n"<<endl;
 	cout<<"\t1. ALI BABA CHAALEES CHOR"<<endl;
 	cout<<"\t2. BARAY JAB CHOTAY THAY"<<endl;
 	cout<<"\t3. KHATAY MEETHAY FALSAY"<<endl;
 	cout<<"\n ENGLISH BOOKS\n"<<endl;
 	cout<<"\t1. CHARLIE AND THE CHOCOLATE FACTORY"<<endl;
 	cout<<"\t2. CHARLOTTE'S WEB"<<endl;
 	cout<<"\t3. THE CAT IN THE HAT"<<endl;
 	cout<<"\n FICTION BOOKS\n"<<endl;
 	cout<<"\t1. A WRINKLE IN TIME"<<endl;
 	cout<<"\t2. ANNE OF GREEN GABLES"<<endl;
 	cout<<"\t3. MATILDA"<<endl;
 	cout<<"\n NON-FICTION BOOKS\n"<<endl;
 	cout<<"\t1. LOCOMOTIVE"<<endl;
 	cout<<"\t2. OVER AND UNDER THE POND"<<endl;
 	cout<<"\t3. A SPLASH OF RED"<<endl;
 }
 
 void Book::bookVarietyElder()
 {
 	cout<<"\n\t--BOOKS FOR ELDER--"<<endl;
 	cout<<"\n\t--COPY AND ORIGINAL BOOKS AVALIABLE\n"<<endl;
 	cout<<"\n URDU BOOKS\n"<<endl;
 	cout<<"\t1. JANNAT KY PATTAY"<<endl;
 	cout<<"\t2. PEER E KAMIL"<<endl;
 	cout<<"\t3. NAMAAL"<<endl;
 	cout<<"\n ENGLISH BOOKS\n"<<endl;
 	cout<<"\t1. GREAT EXPECTATIONS"<<endl;
 	cout<<"\t2. THE REMAINS OF THE DAY"<<endl;
 	cout<<"\t3. CLARISSA"<<endl;
 	cout<<"\n FICTION BOOKS\n"<<endl;
 	cout<<"\t1. A TOWN LIKE ALICE"<<endl;
 	cout<<"\t2. ADVENTURES OF SHERLOCK HOLMES "<<endl;
 	cout<<"\t3. DISGRACE"<<endl;
 	cout<<"\n NON-FICTION BOOKS\n"<<endl;
 	cout<<"\t1. PRIDE AND PREJUDICE"<<endl;
 	cout<<"\t2. THE CATCHER IN THE RYE"<<endl;
 	cout<<"\t3. THE GREAT GATESBY"<<endl;
 	
 }
 
 void Book::bookAvail()
 {
 	cout<<"\n\t\tEnter your choice \n\t\t1.ORIGINAL BOOK\n\t\t2.COPY BOOK:";
    cin>>h;
    
    if(h==1)
    {
    	cout<<" Original Book"<<endl;
	}
	else if(h==2)
	{
		cout<<" Copy Book"<<endl;
	}
 	else 
 	 cout<<"Invalid choice"<<endl;
 }
 
  void Book::cChoice()
 {
 		cout<<"\nEnter the category you want:"<<endl;
 		cout<<"\n\t\t1.Urdu\n\t\t2.English\n\t\t3.Fiction\n\t\t4.Non-Fiction"<<endl;
		cin>>chi; 	
		if(chi==1)
		{
			cUrdu();
		}
		else if(chi==2)
		{
			cEnglish();
		}
		else if(chi==3)
		{
			cFiction();
		}
		else if(chi==4)
		{
			cNonfiction();
		}
		else
		
		{cout<<"\n\t\tInvalid Choice:";
		 cChoice();
	    }
 }
 
 void Book::stock()
 {
 	int i;
 	system("cls");
 	cout<<"ENTER THE NUMBER OF TOTAL BOOKS SOLD AND ISSUED:"<<endl;
 	cin>>stk[i];
 	
 	if(stk[i]<1000)
 	{
 		cout<<"\n\t\t Stock Avaliable"<<endl;
	}
	else
	    cout<<"\n\t\t Stock Unavaliable"<<endl;
	    
	    getch();
	    system("cls");
 }

 void Book:: cUrdu()
 {
 	cout<<"\n URDU BOOKS\n"<<endl;
 	cout<<"\t1. ALI BABA CHAALEES CHOR"<<endl;
 	cout<<"\t2. BARAY JAB CHOTAY THAY"<<endl;
 	cout<<"\t3. KHATAY MEETHAY FALSAY"<<endl;
 	cout<<"\n\tChoose the book from above"<<endl;
	cin>>cBk;
	if(cBk==1)
	{
	   cout<<"\n\t\tYou have choose-> ALI BABA CHAALEES CHOR"<<endl;	
	}  
	else if(cBk==2)
	{
		cout<<"\n\t\tYou have choose-> BARAY JAB CHOTAY THAY"<<endl;
	}
	else if(cBk==3)
	{
		cout<<"\n\t\tYou have choose-> KHATAY MEETHAY FALSAY"<<endl;
	}
	else
	{
		cout<<"Invalid Book"<<endl;
		cUrdu();
	}
 }
 
 void Book::cEnglish()
 {
 	cout<<"\n ENGLISH BOOKS\n"<<endl;
 	cout<<"\t1. CHARLIE AND THE CHOCOLATE FACTORY"<<endl;
 	cout<<"\t2. CHARLOTTE'S WEB"<<endl;
 	cout<<"\t3. THE CAT IN THE HAT"<<endl;
 	cout<<"\n\tChoose the book from above"<<endl;
	cin>>cBk;
	if(cBk==1)
	{
	   cout<<"\n\t\tYou have choose-> CHARLIE AND THE CHOCOLATE FACTORY"<<endl;	
	}  
	else if(cBk==2)
	{
		cout<<"\n\t\tYou have choose-> CHARLOTTE'S WEB"<<endl;
	}
	else if(cBk==3)
	{
		cout<<"\n\t\tYou have choose-> THE CAT IN THE HAT"<<endl;
	}
	else
	{
	 cout<<"Invalid Book"<<endl;
	 cEnglish();
    }
 }
 
 void Book::cFiction()
 {
 	cout<<"\n FICTION BOOKS\n"<<endl;
 	cout<<"\t1. A WRINKLE IN TIME"<<endl;
 	cout<<"\t2. ANNE OF GREEN GABLES"<<endl;
 	cout<<"\t3. MATILDA"<<endl;
 	cout<<"\n\tChoose the book from above"<<endl;
	cin>>cBk;
	if(cBk==1)
	{
	   cout<<"\n\t\tYou have choose-> A WRINKLE IN TIME"<<endl;	
	}  
	else if(cBk==2)
	{
		cout<<"\n\t\tYou have choose-> ANNE OF GREEN GABLES"<<endl;
	}
	else if(cBk==3)
	{
		cout<<"\n\t\tYou have choose-> MATILDA"<<endl;
	}
	else
	{
	 cout<<"Invalid Book"<<endl;
	 cFiction();
    }
 }
 
 void Book::cNonfiction()
 {
 	cout<<"\n NON-FICTION BOOKS\n"<<endl;
 	cout<<"\t1. LOCOMOTIVE"<<endl;
 	cout<<"\t2. OVER AND UNDER THE POND"<<endl;
 	cout<<"\t3. A SPLASH OF RED"<<endl;
 	cout<<"\n\tChoose the book from above"<<endl;
	cin>>cBk;
	if(cBk==1)
	{
	   cout<<"\n\t\tYou have choose-> LOCOMOTIVE"<<endl;	
	}  
	else if(cBk==2)
	{
		cout<<"\n\t\tYou have choose-> OVER AND UNDER THE POND"<<endl;
	}
	else if(cBk==3)
	{
		cout<<"\n\t\tYou have choose-> A SPLASH OF RED"<<endl;
	}
	else
	{ 
	 cout<<"Invalid Book"<<endl;
	 cNonfiction();
    }
 }
 
 void Book::Choice()
 {
 		cout<<"\nEnter the category you want:"<<endl;
 		cout<<"\n\t\t1.Urdu\n\t\t2.English\n\t\t3.Fiction\n\t\t4.Non-Fiction"<<endl;
		cin>>chi; 	
		if(chi==1)
		{
			Urdu();
		}
		else if(chi==2)
		{
			English();
		}
		else if(chi==3)
		{
			Fiction();
		}
		else if(chi==4)
		{
			Nonfiction();
		}
		else
		{cout<<"\n\t\tInvalid Choice:";
		 Choice();
	    }
 }
 
 void Book:: Urdu()
 {
 	cout<<"\n URDU BOOKS\n"<<endl;
 	cout<<"\t1. JANNAT KY PATTAY"<<endl;
 	cout<<"\t2. PEER E KAMIL"<<endl;
 	cout<<"\t3. NAMAAL"<<endl;
 	cout<<"\n\tChoose the book from above"<<endl;
	cin>>cBk;
	if(cBk==1)
	{
	   cout<<"\n\t\tYou have choose-> JANNAT KY PATTAY"<<endl;	
	}  
	else if(cBk==2)
	{
		cout<<"\n\t\tYou have choose-> PEER E KAMIL"<<endl;
	}
	else if(cBk==3)
	{
		cout<<"\n\t\tYou have choose-> NAMAAL"<<endl;
	}
	else
	{
	 cout<<"Invalid Book"<<endl;
	 Urdu();
    }
 }
 
  void Book::English()
 {
 	cout<<"\n ENGLISH BOOKS\n"<<endl;
 	cout<<"\t1. GREAT EXPECTATIONS"<<endl;
 	cout<<"\t2. THE REMAINS OF THE DAY"<<endl;
 	cout<<"\t3. CLARISSA"<<endl;
 	cout<<"\n\tChoose the book from above"<<endl;
	cin>>cBk;
	if(cBk==1)
	{
	   cout<<"\n\t\tYou have choose-> GREAT EXPECTATIONS"<<endl;	
	}  
	else if(cBk==2)
	{
		cout<<"\n\t\tYou have choose-> THE REMAINS OF THE DAY"<<endl;
	}
	else if(cBk==3)
	{
		cout<<"\n\t\tYou have choose-> CLARISSA"<<endl;
	}
	else
	{
	  cout<<"Invalid Book"<<endl;
	  English();
    }
 	
 }

 void Book::Fiction()
 {
 	cout<<"\n FICTION BOOKS\n"<<endl;
 	cout<<"\t1. A TOWN LIKE ALICE"<<endl;
 	cout<<"\t2. ADVENTURES OF SHERLOCK HOLMES "<<endl;
 	cout<<"\t3. DISGRACE"<<endl;
 	cout<<"\n\tChoose the book from above"<<endl;
	cin>>cBk;
	if(cBk==1)
	{
	   cout<<"\n\t\tYou have choose-> A TOWN LIKE ALICE"<<endl;	
	}  
	else if(cBk==2)
	{
		cout<<"\n\t\tYou have choose-> ADVENTURES OF SHERLOCK HOLMES"<<endl;
	}
	else if(cBk==3)
	{
		cout<<"\n\t\tYou have choose-> DISGRACE"<<endl;
	}
	else
	{
	  cout<<"Invalid Book"<<endl;
	  Fiction(); 	
    }
 }
 
  void Book::Nonfiction()
 {
 	cout<<"\n NON-FICTION BOOKS\n"<<endl;
 	cout<<"\t1. PRIDE AND PREJUDICE"<<endl;
 	cout<<"\t2. THE CATCHER IN THE RYE"<<endl;
 	cout<<"\t3. THE GREAT GATESBY"<<endl;
 	cout<<"\n\tChoose the book from above"<<endl;
	cin>>cBk;
	if(cBk==1)
	{
	   cout<<"\n\t\tYou have choose-> PRIDE AND PREJUDICE"<<endl;	
	}  
	else if(cBk==2)
	{
		cout<<"\n\t\tYou have choose-> THE CATCHER IN THE RYE"<<endl;
	}
	else if(cBk==3)
	{
		cout<<"\n\t\tYou have choose-> THE GREAT GATESBY"<<endl;
	}
	else
	{
	  cout<<"Invalid Book"<<endl;
	  Nonfiction();
    }
 }

 
 void Book::desireCategory()
 {
 	cout<<"\n\t\t Enter the category you like the most:"<<endl;
 	cout<<"\t1.Urdu"<<endl;
 	cout<<"\t2.English"<<endl;
 	cout<<"\t3.Fiction"<<endl;
 	cout<<"\t4.Non-Fiction"<<endl;
 	cin>>dc;
 	
 	fflush(stdin);
 	mSoldBook(dc);
 }
 
 int Book::mSoldBook(int cc)
 {
 	if(cc==1)
 	{
 		counter++;
 		cout<<"\n\tCustomer like Urdu category"<<endl;
	}
	else if(cc==2)
	{
		counter++;
		cout<<"\n\tCustomer like English category"<<endl;
	}
	else if(cc==3)
	{
		counter++;
		cout<<"\n\tCustomer like Fiction category"<<endl;
	}
	else if(cc==4)
	{
		counter++;
		cout<<"\n\tCustomer like Urdu category"<<endl;
	}
	else if(counter==0)
	 cout<<"\n\tInvalid category"<<endl;
 	
 }
 
 class Customer:public Book

 {
	
    char st[50],st1[20],c[10],cn[20],vn[20];
    int b,i,j,d,m,y,dd,mm,yy,ch,cont,ca,nC;
    char bookname[50],name[50], fBack[100];
    double total;
    double priceC,priceO;
	public:
		
		Customer()
		{
			cont=0;
			total=0;
			d=0;
			m=0;
			y=0;
			nC=0;
			ca=0;
			ch=0;
			priceC=1000;
			priceO=2000;
		}
		void booksView();
		void viewCustomer();
		void searchCustomer();
		void returnBook();
		void issueBook();
		void buyBook();
		void feedBack();
		void exit();
		void cusMenu();
		void funList();
		double bill();
		void verify();
		double discount();
		double getTotal();
		void setDate(int day,int month,int year);
		void setbCopies(int noOfBooks);
		int getbCopies();
		void setAge(int a);
		int getAge();
		void setName(string n);
		string getName();
		void setOprice(double pOriginal);
		double getOprice();
		void setCprice(double pCopy);
		double getCprice();
  };

 void Customer::booksView()
 
 {
	system("cls");
	fflush(stdin);
	funList();
	Book::bookVarietyChild();
	Book::bookVarietyElder();
	getch();
	system("cls");
	
 }
 
 void Customer::issueBook()
 {
	system("cls");
    fflush(stdin);
    funList();
    cout<<"\n\t\t->Please Enter Details :-\n";   
    cout<<"\n\t\tEnter your Age:";
    cin>>ca;
    if(ca>18)
    {
    	
        Book::Choice();    
	}
	else
	{
		
		Book::cChoice();
	}
	getch();
	system("cls");
	cout<<"\n\t\t->Please Enter Your Details :-\n";
	fflush(stdin);
	
    cout<<"\n\t\tEnter your Name : ";
    cin.getline(name,50);
    CNIC:
	    cout<<"\n\t\tEnter your Cnic : ";
        cin.getline(cn,20);
        if(strlen(cn)<13 || strlen(cn)>13)
		{
			cout<<"\n\t\t\t\tInvalid Cnic Try Again."<<endl;
            goto CNIC;   	
		}
    cout<<"\n\t\tEnter date : ";
    cin>>d>>m>>y;
    Book::bookAvail();
    Book::desireCategory();
    cout<<"\n\t\tEnter number of books you want:";
	cin>>nC;	
    if(nC<3)
    {
    	cout<<"\n\n\t\tIssue Successfully.\n";
	}
	else
	    cout<<"\n\n\t\tSorry...more than 2 books can't issue";
    ofstream file1;
	file1.open("Customer.txt",ios::binary|ios::app);
    file1.write((char*)this,sizeof(*this));
    file1.close();

	
	
    getch();
    cusMenu();
 }

 void Customer::buyBook()
 {
	system("cls");
    fflush(stdin);
	funList();
	cout<<"\n\t\t->Please Enter Details :-\n";
	cout<<"\n\t\tEnter your Age:";
    cin>>ca;
    if(ca>18)
    {
    	
    	Book::Choice();
        
	}
	else
	{
		
		Book::cChoice();
	}
	
	getch();
	system("cls");

	cout<<"\n\t\t->Please Enter Your Details :-\n";
	fflush(stdin);
    cout<<"\n\t\tEnter your Name : ";
    cin.getline(name,100);
    Cnic:    
		cout<<"\n\t\tEnter your Cnic : ";
        cin.getline(cn,20);
        if(strlen(cn)<13 || strlen(cn)>13)
		{
			cout<<"\n\t\t\t\tInvalid Cnic Try Again."<<endl;
            goto Cnic;   	
		}
	Book::desireCategory();	
	cout<<"\n\t\tEnter number of books you want:";
	cin>>nC;	
    
    verify();
    cout<<"\n\tThe Total Bill:"<<total<<endl;
    
    ofstream file1("Customer.txt",ios::binary|ios::app);
    file1.write((char*)this,sizeof(*this));
    file1.close();

    cout<<"\n\t\t ---SUCCESSFULLY BOUGHT A BOOK---"<<endl; 
    getch();
    cusMenu();
 }

 void Customer::feedBack()
 {
     	system("cls");
        fflush(stdin);
        funList();
    	cout<<"Enter your Feedback:";
        cin.getline(fBack,100);
    
    	ofstream file1;
		file1.open("Customer.txt",ios::binary|ios::app);
        file1.write((char*)this,sizeof(*this));
        file1.close();
        
        cout<<"\t FEEDBACK STORED SUCCESSFULLY---"<<endl;
		getch();
		cusMenu();
    	
 }

 void Customer::viewCustomer()
 {
 	system("cls");
 	fflush(stdin);
 	
	ifstream file2("Customer.txt",ios::binary);
    cout<<"\n\t\tThe Details are :\n";
    
    file2.read((char*)this,sizeof(*this));
    i=0;
    while(!file2.eof())
    {
    i++;
    cout<<"\n\t\t********** "<<i<<". ********** \n";
    cout<<"\n\t\tCustomer Name : "<<name<<"\n\t\t"<<"Customer Code : "<<cn<<"\n\t\t"<<"Customer Age : "<<ca<<"\n\t\t"<<"Date : "<<d<<""<<m<<""<<y<<"\n";
    file2.read((char*)this,sizeof(*this));
    }
    file2.close();
    getch();
    
    
 }
 
 void Customer::searchCustomer()
 {      
        cont=0; 
	    system("cls");
        fflush(stdin);
        ifstream file2("Customer.txt",ios::in|ios::binary);
        file2.read((char*)this,sizeof(*this));
        
		cout<<"\n\t\t->Please Enter Details :-\n";
        CNIC:
	    cout<<"\n\t\tEnter Customer Cnic : ";
        cin.getline(vn,20);
        if(strlen(vn)<13 || strlen(vn)>13)
		{
			cout<<"\n\t\t\t\tInvalid Cnic Try Again."<<endl;
            goto CNIC;   	
		}
	    
        while(!file2.eof())
        {
              for(i=0;vn[i]!='\0';i++);
              if(vn[i]=='\0')
              {
                  
                  
                  if(cn[i]==vn[i])
                  {
                      cout<<"\n\t\t->The Details are :-\n";
                      cout<<"\n\t\tCustomer Name : "<<name;
                      cout<<"\n\t\tCustomer Cnic : "<<cn;
                      cont++;
                  }
                  
                  cout<<"\n\t\tDate : "<<d<<"/"<<m<<"/"<<y<<"\n";
              }
               file2.read((char*)this,sizeof(*this));
               
        }
        file2.close();
        
        if(cont==0)
            cout<<"\n\t\tNo record found.";
            
        getch();
	    
}

 void Customer::returnBook()
 {
 	system("cls");
    fflush(stdin);
    ofstream file1("temp.txt",ios::app|ios::binary);
    ifstream file2("student.txt",ios::binary);
    file2.read((char*)this,sizeof(*this));
   
    cout<<"\n\t\t->Please Enter Details :-\n";
    CNIC:
	cout<<"\n\t\tEnter Customer Cnic : ";
    cin.getline(cn,20);
    if(strlen(cn)<13 || strlen(cn)>13)
		{
			cout<<"\n\t\t\t\tInvalid Cnic Try Again."<<endl;
            goto CNIC;   	
		}
    cout<<"\n\t\tEnter Present date : ";
    cin>>dd>>mm>>yy;
    
    
    while(!file2.eof())
        {
           
            for(j=0;cn[j]!='\0'&&cn[j];j++);
            if(cn[j]=='\0'&&cont==0)
                {
                    cont++;
                    file2.read((char*)this,sizeof(*this));
                    cout<<"\n\t\tReturned successfully.";
                    getch();
                    break;

                }
            else
                {
                    cout<<"\n\t\tREMINDER! RETURN BOOK:";
                    getch();
                    break;

                }
        }
 }

 double Customer::bill()
 {
 	
	cout<<"\n\t\tEnter your choice \n\t\t1.ORIGINAL BOOK\n\t\t2.Copy Book:";
    cin>>ch;
	if(ch==1)
	{
		total=nC*priceO;
		return total;
	}
	else if(ch==2)
	{
		total=nC*priceC;
		return total;
	}
 } 
 
 
 void Customer::verify()
 {
 	char a;
 	cout<<"\n\t\tAre you golden card owner:";
 	cin>>a;
 	
 	if(a=='n'||a=='N')
 	{
 		bill();
	}
	else if (a=='y'||a=='Y')
	{
		discount();
	}
 }
 
 double Customer::discount()
 {

 	
 	total = bill()*0.25;
 }

 void Customer::exit()
 {
	system("cls");
	cout<<"\n\t\t----THANKYOU FOR VISITING----";
	getch();
	system("cls");
 }

 void Customer::cusMenu()
 {
	system("cls");
	cout<<"\n\n\t\t\t\t\t\tHELLO CUSTOMER\t\t\t\n\n"<<endl;
	cout<<"\n\t\t---WHICH OPTION YOU WANT TO SELECT---\n"<<endl;
	cout<<"\tENTER 1: VIEW BOOK"<<endl;
	cout<<"\tENTER 2: ISSUE BOOK"<<endl;
	cout<<"\tENTER 3: BUY BOOK"<<endl;
	cout<<"\tENTER 4: FEEDBACK"<<endl;
	cout<<"\tENTER 5: EXIT"<<endl;
	cin>>i;
	
	if(i==1)
	{
		booksView();
	}
	else if(i==2)
	{
		issueBook();
	}
	else if(i==3)
	{
		buyBook();
	}
	else if(i==4)
	{
		feedBack();
	}
	else if(i==5)
	{
		exit();
		
	}
	else
	 cout<<"\n\t\t---SORRY! WRONG INPUT"<<endl;
 }

  void Customer::funList()
  {
  	system("cls");
	cout<<"\n\n\t\t\t\t\t\tHELLO CUSTOMER\t\t\t\n\n"<<endl;
	
  }
  
class Admin: public Customer
{
	char bN[50];
	char category[50];
	int bookID;
	int count;
	char nc[20];
	string  ba;
	
	public:
		Admin()
		{
			count=0;
		}
		
		void access();
		void controlPannel();
		void password();
		void listRecord();
		void setidBook(int bI);
		int getidBook();
		void mainMenu();
		void menu();

};


void Admin::menu()
{
	cout<<"\n\n\n\n\n\n";
	cout<<"\n\n\t\t\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t\t\t-----------------------------------\n\n";
	cout<<"\n\n\t\t\t\t\t       WELCOME TO BOOK STORE       \n\n";
	cout<<"\n\n\t\t\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t\t\t-----------------------------------\n\n";
	getch();
	system("cls");
	
}
void Admin::mainMenu() 
 {
	int chh;
	system("cls");
	cout<<"\n\n\n\n\n\n";
	fflush(stdin);
	cout<<"\n\n\t\t\t\t\t\t---- WELCOME----\n\n";
	cout<<" \t Enter 1. Admin"<<endl;
	cout<<" \t Enter 2. Customer"<<endl;
	cout<<" \t Enter 3. Exit"<<endl;
	
	cin>>chh;
	
	if(chh==1)
	{
		password();
		controlPannel();
        access();	
	}
	else if(chh==2)
	{
		Customer::cusMenu();
		mainMenu();
	}
	else if(chh==3)
	{
		Customer::exit();
		mainMenu();
	}
	else
	cout<<"Wrong Input";
	
	system("cls");
 }


void Admin::controlPannel()
{
	system("cls");
	cout<<"\t\t\t\t******ADMIN PANNEL******"<<endl;
	
	cout<<"\t\t 1.) ADD BOOK RECORD."<<endl;
	cout<<"\t\t 2.) SHOW BOOK RECORD."<<endl;
	cout<<"\t\t 3.) UPDATE BOOK RECORD."<<endl;
	cout<<"\t\t 4.) LIST RECORD"<<endl;
	cout<<"\t\t 5.) DELETE BOOK RECORD."<<endl;
	cout<<"\t\t 6.) CHECK BOOK AVAILABILITY."<<endl;
	cout<<"\t\t 7.) VIEW CUSTOMER."<<endl;
	cout<<"\t\t 8.) SEARCH CUSTOMER."<<endl;
	cout<<"\t\t 9.) RETURN BOOK."<<endl;
	cout<<"\t\t 10.) EXIT."<<endl;
	
	
}

void Admin::password()
{
	system("cls");
	int passwrd=1234;
	int str;
	cout<<"ENTER PASSWORD TO ACCESS ADMIN PANNEL:";
	cin>>str;
	cout<<endl;

        if(str==passwrd)     
          {
			  cout<<"***PASSWORD IS CORRECT***."<<endl;   

          }
        else
	      {
		      cout<<"***INCORECT PASSWORD***.TRY AGAIN!!"<<endl;
			  password(); 
	      }
}


 void Admin::access()
 {
 	cout<<"ENTER YOUR CHOICE:"<<endl;
 	int x;
 	cin>>x;
 	
	
	if(x==1)
	{
		cout<<"\t\t*****ADD BOOK RECORD*****"<<endl;
		system("cls");                
        fflush(stdin);
		cout<<"ENTER BOOK ID: ";
	    cin>>bookID;
	    cout<<endl;
	    fflush(stdin);
	    cout<<"ENTER BOOK NAME: ";
		cin.getline(bN,50);
		cout<<endl;
		fflush(stdin);
		cout<<"CATEGORY OF THE BOOK: ";
		cin.getline(category,50);
		cout<<endl;
		fflush(stdin);
		cout<<"NUMBER OF COPIES: ";
		cin.getline(nc, 20);
		cout<<endl;
		fflush(stdin);
    
        fstream f("Booksdata.dat",ios::out|ios::in|ios::binary);
        f.seekg(0,ios::end);
		f.write((char*)this,sizeof(*this));
        f.close();
        cout<<"\n\t\tBOOK ADDED SUCCESSFULLY:).\n";
        getch();
        system("cls");
        controlPannel();
		access();
	}
	
  else if(x==2)
{
		
	system("cls");
	int bI,checkZero=0;
	cout<<"*****SHOW BOOK RECORD*****"<<endl;
    cout<<"ENTER THE ID OF THE BOOK YOU WANT TO SHOW DETAILS: ";
    cin>>bI;
	ifstream file("booksdata.dat",ios::in|ios::binary);
	file.read((char*)this,sizeof(*this));
	while(!file.eof())
	{
		if(bookID==0)              //now file doesn't read id of zero
		{
     	file.read((char*)this,sizeof(*this));
         continue;			
		}
		
		if(bookID==bI)
		{
		
	    cout<<"\n\t\tBOOK'S ID: "<<bookID<<endl;
	    cout<<"\n\t\tBOOK'S NAME: "<<bN<<endl;
	    cout<<"\n\t\tCATEGORY OF THE BOOK: "<<category<<endl;
        cout<<"\n\t\tNUMBER OF COPIES OF THE BOOK: "<<nc<<endl;
        
        checkZero++;
           break;
       }
      else
      {
     	file.read((char*)this,sizeof(*this));
      	
	  }
     }
		if(checkZero==0)
		{
			cout<<"\n\t\tNO RECORD FOUND!";
		}
		
		getch();
		system("cls");
		controlPannel();
		access();
		
		
 }


   else if(x==3)
{
	system("cls");
	int counter=0;
	int bI;
	cout<<"*****EDIT BOOK RECORD*****"<<endl;
    cout<<"ENTER THE ID OF THE BOOK WHICH YOU WANT TO EDIT OR UPDATE: ";
    cin>>bI;
    cout<<endl;
    fstream file("booksdata.dat",ios::in|ios::out|ios::binary);


    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
        if(bookID==bI)
        {
        	cout<<"ENTER NEW BOOK NAME: ";
		    getchar();
	        cin.getline(bN,50);
		    cout<<endl;
		    fflush(stdin);
		    cout<<"NEW CATEGORY OF THE BOOK: ";
		    cin.getline(category,50);
		    cout<<endl;
		    fflush(stdin);
		    cout<<"NUMBER OF COPIES OF NEW BOOK: ";
		    cin.getline(nc, 20);
		    cout<<endl;
		    fflush(stdin);
		    
		    counter=1;
            
			file.seekg(file.tellg()-sizeof(*this));
            file.write((char *)this,sizeof(*this));
            cout<<"\n\n..........RECORD UPDATED SUCCESSFULLY:)..........\n\n";
            break;
        }
        else 
        {
         file.read((char*)this,sizeof(*this));
        	
		}
        
    }
    if(counter==0)
    {
        cout<<"\n\nTHE BOOK ID YOU HAVE ENTERED DOES NOT EXIST..\n\n"<<endl;
    }
    cout<<"Press any key to continue...........";
    file.close();
    getch();
    system("cls");
	controlPannel();
    access();
 }
		
          
 else if(x==4)
{
		system("cls");
		ifstream file("Booksdata.dat",ios::in|ios::binary);

        file.read((char*)this,sizeof(*this));
        
		int checkZero=0;
		while(!file.eof())
        {
        	if(bookID==0)   //now file doesn't read id of zero
		    {
     	    file.read((char*)this,sizeof(*this));
            continue;			
		    }
        	cout<<endl;
        	cout<<"\n\t\tBOOK'S ID: "<<bookID<<endl;
        	cout<<"\n\t\tBOOK'S NAME: "<<bN<<endl;
	        cout<<"\n\t\tCATEGORY OF THE BOOK: "<<category<<endl;
            cout<<"\n\t\tNUMBER OF COPIES OF THE BOOK: "<<nc<<endl;
	        cout<<"\n\n"<<endl;
		    file.read((char*)this,sizeof(*this));
		    checkZero++;
   }
        file.close();
        
		if(checkZero==0)
		{
			cout<<"\n\t\tNO RECORD FOUND!";
		}
        getch();
        system("cls");
		controlPannel();
        access();

	}
  else if(x==5)
{
	system("cls");
	int counter=0;
	int bI;
	cout<<"\n\t\t\t*****DELETE BOOK RECORD*****\n\n\n";
    cout<<"ENTER THE ID OF THE BOOK WHICH RECORD YOU WANT TO DELETE: ";
    cin>>bI;
    cout<<endl;
    fstream file("booksdata.dat",ios::in|ios::out|ios::binary);

 Admin emptyFile; 
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
        if(bookID==bI)
        {
        	counter=1;
            
			file.seekg(file.tellg()-sizeof(*this));
            file.write((char *)(&emptyFile),sizeof(*this));
            cout<<"\n\n..........RECORD DELETED SUCCESSFULLY..........\n\n";
            break;
        }
        else 
        {
         file.read((char*)this,sizeof(*this));
        	
		}
        
    }
    if(counter==0)
    {
        cout<<"\n\nTHE BOOK ID YOU HAVE ENTERED DOES NOT EXIST..\n\n\n\n"<<endl;
    }
    file.close();
    cout<<"Press any key to continue...........";
    getch();
    system("cls");
    controlPannel();
	access();
    
   }
    
    else if(x == 6)
    {
    	
    	Book::stock();
    	system("cls");
		controlPannel();
		access();
	}
	
	else if(x==7)
	{
		
		Customer::viewCustomer();	
		controlPannel();
		access();
		getch();
	}
	
	else if(x==8)
	{
		
		Customer::searchCustomer();	
		controlPannel();
		access();
		getch();
	}
	
	else if(x==9)
	{
		
		Customer::returnBook();	
		controlPannel();
		access();
		getch();
	}
	else if(x==10)
	{
		
		Customer::exit();
		mainMenu();
	}
	    
}



 int main()
 {
	Admin ad;
	ad.menu();
	ad.mainMenu();
 }
