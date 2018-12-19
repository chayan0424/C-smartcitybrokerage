//    Name: Chayan Sharma, Class: 12-A, Roll no. 09, Board Roll no.
//              Smart City Brokerage

#include<iostream.h>           // for cin, cout function
#include<string.h>             // for strcpy, strcmp function
#include<stdio.h>              // for gets, puts function
#include<conio.h>              // for clrscr, textcolor, getch function
#include<dos.h>                // for delay function
#include<fstream.h>            // for fin, fout function
#include<process.h>            // for exit function


int check1(char &a)				// check function
{
 textcolor(RED);
 textbackground(WHITE);
  n:
  if((a=='y')||(a=='Y'))                                  // for yes
  return 1;
 else if((a=='N')||(a=='n')||(a=='x')||(a=='X'))        // for no or exit
  return -1;
 else if((a=='p')||(a=='P'))                            // for previous
  return 2;
 else
 {
 cout<<"\n \t Wrong choice please enter again !!"<<endl;     // wrong choice
  cin>>a;
  goto n;
 }
}


char ch,ch1,ch2,choice,choice1,str[30];                    // variable declartion                                   // variables used in program
 int z,s,i,k,k1,k2,k3,k4;
 void main();                                        // function prototype
 void client1();                                     // function prototype
 void plancon();                                     // function prototype


void intro()                                       // function difination                              // introduction
{
 textcolor(RED);
 textbackground(WHITE);
 do
 {
  clrscr();
  delay(50);
  cout<<"\n\t1. WHO ARE WE ?";
  delay(500);
  cout<<"\n WE at AC BROTHERS have just one goal to make cities tecnological advance ."<<endl;
  delay(500);
  cout<<"\n WE are smart brokers, we arrange contacts betwen the parties which need each other to complete theier projects. "<<endl;
  delay(500);
  cout<<"\n AC BROTHERS have always made up to expectation and we promise to provide the best work experience anyone company can provide. "<<endl;
  delay(500);
  cout<<"\n\t2.What do we do best ?"<<endl;
  delay(500);
  cout<<"\n We are best at making deal and dreams happen , if its your dream we make it happen and in a smart way ! ."<<endl;
  delay(500);
  cout<<"\n We connect concerned parties together and make the dreams real."<<endl;
  delay(500);
  cout<<"\n\t3.Why are we so effective?"<<endl;
  delay(500);
  cout<<"\n At AC BROTHESRS we value three things, - time, work and service and we asure you that we are best at these."<<endl;
  delay(500);
  cout<<"\n\t Want to go back to Main menu Press 'x'";
  cout<<"\n\t Want to go back to read the page again ?(y or n)";
  cin>>choice;
  if((choice=='x')||(choice=='X'))                          // for back to menu
     main();
  s=check1(choice);

  if(s==-1)
  { main();}
 }while(s==1);

}



void otherworks()                                     //function defination                                     //  our other works
{
 textcolor(RED);
 textbackground(WHITE);
 clrscr();

 cout<<"\n\n\n\t\t THE AC BROTHERS have always produced good results";
 cout<<"\n\t\t in their works some of which are stated here: "<<endl;

 cout<<"\n\n 1.LEISURE VALLEY(completed):";
 cout<<"\n\n 2.AMRAPALI DREAM VALLEY(completed):";
 cout<<"\n\n 3.GAUR HOUSING COOPERATIVE(completed):"<<endl;
 cout<<"\n\t Want to go back to Main menu Press 'x'";

 do
 {
  cout<<"\n Want to view any project further?('y' or 'n')"<<endl;
  cin>>ch1;
  if((ch1=='x')||(ch1=='X'))
    main();
  z=check1(ch1);
  if((ch1=='N')||(ch1=='n'))
    main();

  if(z==1)
  {
   if((ch1=='y')||(ch1=='Y'))
  {
   cout<<"\n Enter the serial no. to view the project further..."<<endl;
   cin>>choice1;
   switch(choice1)                                       // switching choices
   {
    case '1': clrscr();
	    cout<<"\n\t\t Welcome to LEISURE VALLEY project:-  ";
	    cout<<"\n\t Our work here consist of - "<<endl;
	    cout<<"\n 1) Establishment of LED light post all around the valley area."<<endl;
	    cout<<"\n 2) Establishment and Maintainace of the P-75 coaxial cable all-round the valley."<<endl;
	    cout<<"\n 3) Establishment of CCTV cameras and wiring around the valley."<<endl;
	    cout<<"\n 4) Establishment of the three (3) Mobile transmission tower (MTT) inside the valley."<<endl;
	    cout<<"\n 5) Establishment of Ground wired connection to city's powerhouse."<<endl;
	    cout<<"\n\t Do you want see the reveiws ?(y/n)"<<endl;
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>ch2;
	    s=check1(ch2);
	    if(s==2)
	      { otherworks(); }
	    if(s==1)
	     { clrscr();
	      cout<<"\n\n\t \t Reviews"<<endl;
	      cout<<"\n \t By- Sundar Hemant (CEO of LT cooperation)";
	      cout<<"\n - I am deeply satisfied with the work of AC brothers within span of two years they have made our dream of advance valley not only realistic but have made it better in many aspect. ";
	      cout<<"\n \t By- Sammer Hemant (M.D of LT cooperation)";
	      cout<<"\n - The work experience and fluency of Ac brothers are commendable. All I say is visit The LEISURE Valley see for yourself there extraordinary work. ";
	      }
	      break;
    case '2': clrscr();
	    cout<<"\n\t\t Welcome to AMRAPALI DREAM VALLEY project:-  ";
	    cout<<"\n\t Our work here consist of - "<<endl;
	    cout<<"\n 1) Establishment of Ground wired connection to city's powerhouse."<<endl;
	    cout<<"\n 2) Establishment and Maintainace of the optical fiber all-round the valley."<<endl;
	    cout<<"\n 3) Establishment of the three (2) Mobile transmission tower (MTT) inside the valley."<<endl;
	    cout<<"\n 4) Establishment of LED light post all around the valley area."<<endl;
	    cout<<"\n\t Do you want see the reveiws ?(y/n)"<<endl;
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>ch2;
	     s=check1(ch2);
	    if(s==2)
	    { otherworks();	    }
	    if(s==1)
	    { clrscr();
	    cout<<"\n\n\t \t Reviews"<<endl;
	    cout<<"\n \t By- JJ Ahuja ( Branch manager(Dheradun) of Amrapali cooperation)";
	    cout<<"\n - I am recommded AC brothers to all our conctacts as within span of one years they have completed our project and work with excellent result. ";
	    cout<<"\n \t By- Lakshay Aggarwal ( Technical advisor of Amrapali cooperation)";
	    cout<<"\n - Great job done by the AC Brothers they have a good work experience and arer best in thier field. ";
	    }
	    break;

    case '3': clrscr();
	    cout<<"\n\t\t Welcome GAUR HOUSING COOPERATIVE project:-  ";
	    cout<<"\n\t Our work here consist of - "<<endl;
	    cout<<"\n 1) Establishment of CCTV cameras and wiring in soceity ."<<endl;
	    cout<<"\n 2) Establishment of one Mobile transmission tower (MTT) soceity ."<<endl;
	    cout<<"\n 3) Establishment of Ground wired connection to city powerhouse."<<endl;
	    cout<<"\n 4) Establishment of LED light post all around the soceity ."<<endl;
	    cout<<"\n 5) Establishment and Maintainace of the optical fiber ."<<endl;
	    cout<<"\n\t Do you want see the reveiws ?(y/n)"<<endl;
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>ch2;
	    s=check1(ch2);
	    if (s==2)
	    { otherworks();  }

	    if(s==1)
	    { clrscr();
	    cout<<"\n\n\t \t Reviews"<<endl;
	    cout<<"\n \t By- Denish Sharma (CEO of Gaur cooperation)";
	    cout<<"\n - I am deeply satisfied with the work of AC brothers within span of two years they have made our dream of advance valley not only realistic but have made it better in many aspect. ";
	    cout<<"\n \t By- Jay Sinha (M.D of LT cooperation)";
	    cout<<"\n - The work experience and fluency of Ac brothers are commendable. All I say is visit The LEISURE Valley see for yourself there extraordinary work. ";
	     }

	   break;

    default:cout<<"wrong choice!!!";
   }
  }
 }
 if(z==-1)
 { main();}
 }while(z==1);

}



class client         //Class definition
{
   char pcode[10];                      // class variable declartion
   char c_name[20];
   char status;
public:
       void getdata();                   //function prototype

       void display()                                   //function defination
       { clrscr();
	 cout<<"\n Private code of client : " ;
	 puts(pcode);
	 cout<<"\n The name of the client : " ;
	 puts (c_name);
	 cout<<"\n Status of client";
	 cout<<"\n (G)-Good client and (S)-Spam client :"<<endl;
	 cout<<status;
	 delay(700);
       }

       char* getpcode()                            // function to return p code
       {
	return pcode;
       }

       char getstatus()                             // function to return status
       {
	return status;
       }
       char* getc_name()                              // function to return coustomer name
       {
	return c_name;
       }

	void add_d();            //File output

	void read_d();             //File input

	void search_d();               //File search

	void modify_d() ;              //File modify

	void delete_d();             //Displays all contents of file

  };
      void client::getdata()   //Console input
      { clrscr();
	cout<<"\n Please Enter the Private code :";
	gets(pcode);
	cout<<"\n Please Enter the Client Name : " ;
	gets(c_name);
	cout<<"\n Please Enter the status of client";
	m:
	cout<<"\n (G)-Good client and (S)-Spam client :"<<endl;
	cin>>status;

	 if ((status=='G')||(status=='g'))
	  { status='G';  }
	  else if ((status=='S')||(status=='s'))
	  { status='S';  }

	 else
	 {cout<<"\n invalid ! Enter again "<<endl;
	  goto m;
	 }
      }


	void client::add_d()             //File output
	{   clrscr();
	ofstream fout;
	fout.open("client.dat",ios::binary|ios::app);
	client c1;
	char choice;
	do
	{
	cout<<"\n PLease Enter The Data For The New Client : ";
	c1.getdata();
	fout.write((char*)&c1,sizeof(c1));
	cout<<"\n Do you wish to enter more(y/n): ";
	cin>>choice;
	k=check1(choice);
	}while(k==1);
	fout.close();
	}

	 void client::read_d()                   //File input
     {
	clrscr();
	ifstream fin;
	fin.open("client.dat",ios::binary);
	if(!fin)
	{
	cout<<"\n File not found";
	exit(-1);
	}
	client c1;
	cout<<"\n THE Client list is as follows :";
	while(fin.read((char*)&c1,sizeof(c1)))
	{
	 cout<<"\n\n";
	 delay(500);
	 c1.display();
	}
	cout<<"\n";
	fin.close();
      }

	void client::search_d()      //To search for a record
	{
	clrscr();
	ifstream fin;
	fin.open("client.dat",ios::binary);
	if(!fin)
	{
	cout<<"\n File not found";
	exit(-1);
	}
	client c1;
	char Fpcode[10];
	char Fstatus;
	char Fc_name[20];
	char no,h;
	int flag=0;
	do
	{ h1:
	clrscr();
	  cout<<"\n Select basis for Client search :"<<endl;
	cout<<"\n 1.on basis of Private Code."<<endl;
	cout<<"\n 2.on basis of Client Status."<<endl;
	cout<<"\n 3.on basis of Client Name."<<endl;
	cout<<"\n\t want to go back Press P "<<endl;
	cout<<"\n Enter the basis for search - ";
	cin>>no;
     switch(no)                                   // switching case
   {
    case '1': cout<<"\n Enter the Client Private code to be searched for: ";
	    gets(Fpcode);
	    while(fin.read((char*)&c1,sizeof(c1)))
	    {  if(strcmp(c1.getpcode(),Fpcode)==0)
		{ flag=1;
		  cout<<"\n client found \n\n";
		  delay(1100);
		  c1.display();
		  delay(1500);
	     }
	    }
	    fin.close();
	    cout<<"\n";
	    if( flag==0)
	    cout<<"\n client  not found";
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>h;
	    if((h=='p')||(h=='P'))
	    { goto h1; }
	    break;

    case '2': cout<<"\n Enter the Client Status : ";
	    cin>>Fstatus;
	    while(fin.read((char*)&c1,sizeof(c1)))
	    {  if(c1.getstatus()==Fstatus)
		{ flag=1;
		delay(1100);
		  c1.display();
		 delay(1500);
	     }
	    }
	    fin.close();
	    cout<<"\n";
	    if( flag==0)
	    cout<<"\n No client found of that status ";
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>h;
	    if((h=='p')||(h=='P'))
	    { goto h1; }

	    break;

    case '3': cout<<"\n Enter the Client Name to be searched for: ";
	    gets(Fc_name);
	    while(fin.read((char*)&c1,sizeof(c1)))
	    {  if(strcmpi(c1.getc_name(),Fc_name)==0)
		{ flag=1;
		  cout<<"\n Client found \n\n";
		  delay(1100);
		  c1.display();
		  delay(1500);
	     }
	    }
	    fin.close();
	    cout<<"\n";
	    if( flag==0)
	    cout<<"\n No client found of that Name.";
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>h;
	    if((h=='p')||(h=='P'))
	    { goto h1; }

	    break;
    case 'P':
    case 'p': client1();
	      break;


    default:cout<<"wrong choice!!! entered ";
  }
    cout<<"\n Do you return to the client search menu ?(y/n) "<<endl;
    cin>>choice1;
     k3=check1(choice1);
  }while(k3==1);

}






  void client::modify_d() //To modify record
  {
   clrscr();
   char ch='n';
   client c1;
   char Fpcode[10];
   int flag=0;
   fstream fio;
   fio.open("client.dat",ios::binary|ios::in|ios::out|ios::ate);
   fio.seekg(0);
   cout<<"\n Enter the Client's private code you want modify data of : ";
   gets(Fpcode);

   while(!fio.eof())
   {fio.read((char*)&c1,sizeof(c1));
   if(strcmp(c1.getpcode(),Fpcode)==0)
   {
   flag=1;
   cout<<" Are you sure you want to modify this Client's data?\n  ";
   c1.display();
   delay(1500);
   cout<<"\n ";
   cout<<"\n (y/N)"<<endl;
   cin>>ch;
   k2=check1(ch);
   if(k2==1)
   {cout<<" Enter new data:\n"<<endl;
   c1.getdata();
   fio.seekp(fio.tellp()-sizeof(c1));
   fio.write((char*)&c1,sizeof(c1));

   break;
   }
  }
 }

  if(flag==0)
  cout<<"\n Data not Found"<<endl;
  fio.close();
}

   void client:: delete_d()                        // delete record
   {
      clrscr();
      client c1;
      char confirm='n',ch;
      char Fpcode[10],flag=0;
      ifstream fin;
      fin.open("client.DAT",ios::binary|ios::in);

      if (!fin)
     {cout<<"\n File does not exist ";
     delay(100);
      exit(-1); }

      ofstream fout;
      fout.open("TEMP.DAT",ios::binary|ios::out);


	   cout<<"\n Please enter the Client's private code whose data has to be deleted:";
	   gets(Fpcode);

	    while (fin.read((char*)&c1,sizeof(c1)))
	  {
	    if (strcmp(c1.getpcode(),Fpcode)==0)
	    {  c1.display();
	       delay(1500);
	       flag=1;
	      cout<<"\n Are you sure you want to delete : ";
	      cin>>confirm;

	      k3=check1(confirm);

	      if (((k3==-1)&&(confirm=='n'))||((k3==-1)&&(confirm=='n')))
		 fout.write((char*)&c1,sizeof(c1));

	     }
	      else
	      fout.write((char*)&c1,sizeof(c1));

	   }
	   if(flag==0)
	   cout<<"\n The clients record was not found.\n";
	   delay(1000);
	   fin.close();
	   fout.close();

	   remove("client.DAT");
	   rename("TEMP.DAT","client.DAT");


   }

void client1()                                          //function defination
{
  textcolor(RED);
 textbackground(WHITE);
 clrscr();
 client c ;
do
{
 clrscr();
cout<<"\n\t\t CLIENT MENU"<<endl;
delay(70);
cout<<"\n 1.Add new clients "<<endl;
delay(70);
cout<<"\n 2.Display the clients list "<<endl;
delay(70);
cout<<"\n 3.Search for a particular client . "<<endl;
delay(70);
cout<<"\n 4.Modify data of client list "<<endl;
delay(70);
cout<<"\n 5.Delte a client from client list "<<endl;
delay(70);
cout<<"\n 6. Back to main menu "<<endl;
delay(70);
cout<<"\n Enter your choice: "<<endl;
cin>>ch;
clrscr();
switch(ch)
{
case '1': c.add_d();
	break;
case '2': c.read_d();
	break;
case '3': c.search_d();
	break;
case '4': c.modify_d();
	break;
case '5': c.delete_d();
	break;
case '6': main();
	break;
default:cout<<"\n Error, wrong choice ";

}
delay(500);
cout<<"\n Do you wish to continue(y/n): " ;
cin>>choice1;
k4=check1(choice1);
clrscr();
if(k4==-1)
{ main();}
}while(k4==1);



}




   class orderc         //Class definition
{
   char ocode[20];
   int  otype;
   double osupp[10][1];
   int oprog;
public:
       void getdata();                             // console input

       void display();                            // console output

       char* getocode()                          // function to get order code
       {
	return ocode;
       }

       int getoprog()                            // function to get order progress
       {
	return oprog;
       }
       int getotype()                            // function get order type
       {
	return otype;
       }

	void add_o();            //File output

	void read_o();             //File input

	void search_o();               //File search

	void modify_o() ;              //File modify

	void delete_o();             //Displays all contents of file

  };

      void orderc::display()  //Console output
       { clrscr();
	 cout<<"\n Order code of client : "<<endl;
	 puts(ocode);
	 cout<<"\n The order type : "<<endl;
	 cout<<otype;
	 if(otype==1)
	  cout<<" Goverment "<<endl;
	 else
	  cout<<" Private "<<endl;
	  delay(400);
	  clrscr();
	cout<<"\n\t Our Order consists of the follwing no. items of the supply type :"<<endl;
	cout<<"\n  1. LED street lights "<<osupp[0][0];
	cout<<"\n  2. LED household light "<<osupp[1][0];
	cout<<"\n  3. Coxial cable P-75 (in Kilometer) "<<osupp[2][0];
	cout<<"\n  4. Coxial cable P-100 (in Kilometer) "<<osupp[3][0];
	cout<<"\n  5. Optical fiber M-7 (in Kilometer) "<<osupp[4][0];
	cout<<"\n  6. Microwave trans. tower(J455) "<<osupp[5][0];
	cout<<"\n  7. Under-Ground wiring (Copper) (in Kilometer) "<<osupp[6][0];
	cout<<"\n  8. Under-Ground wiring (Co-Al alloy) (in Kilometer) "<<osupp[7][0];
	cout<<"\n  9. Mobile trans. tower(industrial) "<<osupp[8][0];
	cout<<"\n 10. CCTv cameras "<<osupp[9][0]<<endl;
	delay(500);
	clrscr();
	 cout<<"\n The current progress of the order "<<endl;
	 cout<<oprog;
	 if(oprog==1)
	  cout<<" Project currently on work "<<endl;
	 else if(oprog==2)
	  cout<<" Project waiting approval "<<endl;
	 else if(oprog==3)
	  cout<<" Project with problem "<<endl;
	 else
	  cout<<" Project completed  "<<endl;
	 delay(300);
       }

      void orderc::getdata()   //Console input
      { clrscr();
       float total=0;
	cout<<"\n Please Enter the Order code :";
	gets(ocode);
	b:
	cout<<"\n Enter the order type : "<<endl;
	cout<<"\n\t 1.Goverment \t\t 2.Private "<<endl;
	cin>>otype;
	if((otype<1)||(otype>2))
	 { cout<<"\n wrong choice enterd Please enter again "<<endl;
	   goto b;
	 }
	clrscr();
       o:
       cout<<"\n\t Our company has follwing items that can be supplied :"<<endl;
       cout<<"\n Enter the number of items per supply type as well. "<<endl;
       cout<<"\n  1. LED street lights ";cin>>osupp[0][0];
       cout<<"\n  2. LED household light ";cin>>osupp[1][0];
       cout<<"\n  3. Coxial cable P-75 (in Kilometer) ";cin>>osupp[2][0];
       cout<<"\n  4. Coxial cable P-100 (in Kilometer) ";cin>>osupp[3][0];
       cout<<"\n  5. Optical fiber M-7 (in Kilometer) ";cin>>osupp[4][0];
       cout<<"\n  6. Microwave trans. tower(J455) ";cin>>osupp[5][0];
       cout<<"\n  7. Under-Ground wiring (Copper) (in Kilometer) ";cin>>osupp[6][0];
       cout<<"\n  8. Under-Ground wiring (Co-Al alloy) (in Kilometer) ";cin>>osupp[7][0];
       cout<<"\n  9. Mobile trans. tower(industrial) ";cin>>osupp[8][0];
       cout<<"\n 10. CCTv cameras ";cin>>osupp[9][0]; cout<<endl;
       delay(100);
       clrscr();
       for(i =0;i<10;i++)
       { total = total+osupp[i][0];}
       if(total<10)
	 { cout<<"\n sorry Min. order required is 10 items at least. "<<endl;
	   cout<<"\n Please Give the order again !!";
	   goto o;
	 }
       else if(total>10000)
	 { cout<<"\n sorry Max. order is of 10,000 items only ."<<endl;
	    cout<<"\n Please Give the order again !!" ;
	    goto o;
	 }
	 a:
	 cout<<"\n Enter the current progress of the order "<<endl;
	 cout<<"\n\t 1.Project currently on work "<<"\n\t 2.Project waiting approval "<<"\n\t 3.Project with problem "<<"\n\t 4.Project completed  "<<endl;
	 cin>>oprog;
	 if((oprog<1)||(oprog>4))
	 { cout<<"\n wrong choice enterd Please enter again "<<endl;
	   goto a;
	 }
	 delay(50);
      }


	void orderc::add_o()             //File output
	{   clrscr();
	int k;
	ofstream fout;
	fout.open("order.dat",ios::binary|ios::app);
	orderc o1;
	char choice;
	do
	{
	cout<<"\n PLease Enter The Data For New order : ";
	o1.getdata();
	fout.write((char*)&o1,sizeof(o1));
	cout<<"\n Do you wish to enter more(y/n): ";
	cin>>choice;
	k=check1(choice);
	}while(k==1);
	fout.close();
	}

	 void orderc::read_o()                   //File input
     {
	clrscr();
	ifstream fin;
	fin.open("order.dat",ios::binary);
	if(!fin)
	{
	cout<<"\n File not found";
	exit(-1);
	}
	orderc o1;
	cout<<"\n THE Client list is as follows :";
	while(fin.read((char*)&o1,sizeof(o1)))
	{
	 cout<<"\n\n";
	 delay(500);
	 o1.display();
	}
	cout<<"\n";
	fin.close();
      }

	void orderc::search_o()      //To search for a record
	{
	clrscr();
	ifstream fin;
	fin.open("order.dat",ios::binary);
	if(!fin)
	{
	cout<<"\n File not found";
	exit(-1);
	}
	orderc o1;
	char Focode[10],h;
	int Foprog;
	int Fotype;

	int flag=0;
	h1:
	clrscr();
	cout<<"\n Select basis for order search :"<<endl;
	cout<<"\n 1.on basis of order Code."<<endl;
	cout<<"\n 2.on basis of order progress ."<<endl;
	cout<<"\n 3.on basis of order type ."<<endl;
	cout<<"\n\t want to go back Press P."<<endl;
	cout<<"\n Enter the basis for search - ";
	cin>>choice1;
     switch(choice1)
   {
    case '1': clrscr();
	     cout<<"\n Enter the order code to be searched for: ";
	    gets(Focode);
	    while(fin.read((char*)&o1,sizeof(o1)))
	    {  if(strcmp(o1.getocode(),Focode)==0)
		{ flag=1;
		  cout<<"\n order found \n\n";
		  delay(1100);
		  o1.display();
		  delay(1500);
	     }
	    }
	    fin.close();
	    cout<<"\n";
	    if( flag==0)
	    cout<<"\n order not found";
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>h;
	    if((h=='p')||(h=='P'))
	    { goto h1; }

	    break;

    case '2': clrscr();
	    cout<<"\n Enter the order progress  : ";
	    cout<<"\n\t 1.Project currently on work "<<"\n\t 2.Project waiting approval "<<"\n\t 3.Project with problem "<<"\n\t 4.Project completed  "<<endl;
	    cin>>Foprog;
	    while(fin.read((char*)&o1,sizeof(o1)))
	    {  if(o1.getoprog()==Foprog)
		{ flag=1;
		delay(1100);
		  o1.display();
		 delay(1500);
	     }
	    }
	    fin.close();
	    cout<<"\n";
	    if( flag==0)
	    cout<<"\n No order found of that progress ";
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>h;
	    if((h=='p')||(h=='P'))
	    { goto h1; }

	    break;

    case '3': clrscr();
	      cout<<"\n Enter the order type to be searched for: ";
	      cout<<"\n\t 1.Goverment \t\t 2.Private "<<endl;
	      cin>>Fotype;
	     while(fin.read((char*)&o1,sizeof(o1)))
	     {  if(o1.getotype()==Fotype)
		{ flag=1;
		  cout<<"\n order found \n\n";
		  delay(1100);
		  o1.display();
		  delay(1500);
	     }
	    }
	    fin.close();
	    cout<<"\n";
	    if( flag==0)
	    cout<<"\n No order found of that type.";
	    cout<<"\n\t Do you want to go back to previous page ( press P)"<<endl;
	    cin>>h;
	    if((h=='p')||(h=='P'))
	    { goto h1; }

	    break;
    case 'p':
    case 'P' : plancon();
	       break;

    default: cout<<"wrong choice!!! entered ";
  }
}

  void orderc::modify_o() //To modify record
  {
   clrscr();
   char ch='n';
   orderc o1;
   char Focode[10];
   int flag=0;
   fstream fio;
   fio.open("order.dat",ios::binary|ios::in|ios::out|ios::ate);
   fio.seekg(0);
   cout<<"\n Enter the order code you want modify data of : ";
   gets(Focode);

   while(!fio.eof())
   {fio.read((char*)&o1,sizeof(o1));
   if(strcmp(o1.getocode(),Focode)==0)
   {
   flag=1;
   cout<<" Are you sure you want to modify this order's data?\n  ";
   o1.display();
   delay(1500);
   cout<<"\n ";
   cout<<"\n Are you sure want to modify this order (y/n)"<<endl;
   cin>>ch;
   k2=check1(ch);
   if(k2==1)
   {cout<<" Enter new data:\n"<<endl;
   o1.getdata();
   fio.seekp(fio.tellp()-sizeof(o1));
   fio.write((char*)&o1,sizeof(o1));

   break;
   }
  }
 }

  if(flag==0)
  cout<<"\n Data not Found"<<endl;
  fio.close();
}

   void orderc:: delete_o()                      // delete record
   {
      clrscr();
      orderc o1;
      char confirm='n',ch;
      char Focode[10],flag=0;
      ifstream fin;
      fin.open("order.DAT",ios::binary|ios::in);

      if (!fin)
     {cout<<"\n File does not exist ";
     delay(100);
      exit(-1); }

      ofstream fout;
      fout.open("TEMP1.DAT",ios::binary|ios::out);


	   cout<<"\n Please enter the order code whose data has to be deleted:";
	   gets(Focode);

	    while (fin.read((char*)&o1,sizeof(o1)))
	  {
	    if (strcmp(o1.getocode(),Focode)==0)
	    {  o1.display();
	       delay(1500);
	       flag=1;
	      cout<<"\n Are you sure you want to delete(y/n) : ";
	      cin>>confirm;

	      k3=check1(confirm);

	      if (((k3==-1)&&(confirm=='n'))||((k3==-1)&&(confirm=='n')))
		 fout.write((char*)&o1,sizeof(o1));

	     }
	      else
	      fout.write((char*)&o1,sizeof(o1));

	   }
	   if(flag==0)
	   cout<<"\n The order record was not found.\n";
	   delay(1000);
	   fin.close();
	   fout.close();

	   remove("order.DAT");
	   rename("TEMP1.DAT","order.DAT");


   }

void plancon()                                 //function defination
{
  textcolor(RED);
 textbackground(WHITE);

 clrscr();
  orderc o ;
do
{

cout<<"\n\t\t ORDER MENU"<<endl;
delay(70);
cout<<"\n 1.Add new order "<<endl;
delay(70);
cout<<"\n 2.Display the order list "<<endl;
delay(70);
cout<<"\n 3.Search for a particular order  . "<<endl;
delay(70);
cout<<"\n 4.Modify data of a order from order list "<<endl;
delay(70);
cout<<"\n 5.Delete a order from order list "<<endl;
delay(70);
cout<<"\n 6.Backn to main menu "<<endl;
delay(70);
cout<<"\n Enter your choice: "<<endl;
cin>>ch;
clrscr();
switch(ch)
{
case '1': o.add_o();
	break;
case '2': o.read_o();
	break;
case '3': o.search_o();
	break;
case '4': o.modify_o();
	break;
case '5': o.delete_o();
	break;
case '6': main();
	break;
default:cout<<"\n Error, wrong choice ";

}
clrscr();
cout<<"\n Do you wish to continue(y/n) : " ;
cin>>choice1;
k4=check1(choice1);
clrscr();
if(k4==-1)
{ main();}
}while(k4==1);



}

					       //function defination
void meeting()
{
  textcolor(RED);
 textbackground(WHITE);
 clrscr();
 int no;
 cout<<"\n\n\t To arrange the meeting select the serial no."<<endl;
 cout<<"\n 1.SURYA LEDs(SPECIALISED PRODUCERS FOR LEDs)"<<endl;
 cout<<"\n 2.JAYPEE GROUP(SPECIALIDED IN CEMENT PRODUCTS)"<<endl;
 cout<<"\n 3.VIKAS AGENCY ( SPECIALISED IN SECTURITY )"<<endl;
 cout<<"\n 4.THE SOUTHEE BROTHERS( SPECIALISED IN WIRING )"<<endl;
 cout<<"\n 5.BIRLA GROUP( SPECIALISED IN IRON WORKS) "<<endl;
 cout<<"\n Enter your choice:"<<endl;
 cin>>no;
 cout<<"\nYour request will be forwarded to the concerned group and";
 cout<<" timings and destination will be forwarded to you shortly";
}
void financialhelp()                           //function defination
{  clrscr();
   cout<<"\n\tMr.Rajesh Kumar(Sr. consultant) contact no. 9763745763";
   cout<<"\n\tMs.Rita Joshi  (Sr. consultant) contact no. 9816555521";
   cout<<"\n\tMr.Aditya Mishra                contact no. 9826766736";
   cout<<"\n\tMr.Aakash Mishra                contact no. 9826572667";
   cout<<"\n\tMs.Anjali Sharma                contact no. 9087645443";
}

void help()                                    //function defination
{
  textcolor(RED);
 textbackground(WHITE);
 clrscr();

do
{ clrscr();
  cout<<"\n\n\t\t THE HELP DESK";
  cout<<"\n\t   ";
  for(i=0;i<24;i++)
  cout<<char(22);

  cout<<"\n\n\t1.Location:->D-24,SECTOR-42A, NOIDA";
  cout<<"\n\t             ->F-22,SONA ROAD, GURUGRAM";
  cout<<"\n\n\t2.Contact no.-09816754387,08223617676";
  cout<<"\n\n\t3.EMERGENCY HOTLINE-012-22887584";
  cout<<"\n\n\t4.To see Our Reviews PRESS 'R'";
  cout<<"\n\n\t5.Need help in financial management? PRESS 'F'";
  cout<<"\n\n\t6.To arrange a meeting with our brokers PRESS 'M'";
  cout<<"\n\n\t7.TO RETURN TO MAIN MENU PRESS 'x'"<<endl;
  cout<<"\n\n";
  cin>>ch;
  if((ch=='r')||(ch=='R'))
   otherworks();
  else if((ch=='f')||(ch=='F'))
   financialhelp();
  else if((ch=='m')||(ch=='M'))
   meeting();
  else if((ch=='x')||(ch=='X')||(ch=='n')||(ch=='N'))
   main();

  cout<<"\n\t Want to go back to Helpdesk?(y or n)";
  cin>>choice;
  z= check1(choice);
  if(z==-1)
   {main();}
 }while(z==1);

}

void main()                                    //function defination
{
 textcolor(RED);
 textbackground(WHITE);
	    clrscr();
		do
		{
		  delay(20);
		  cout<<"\n\t        ";
		  for(i=0;i<30;i++)
		   { cout<<char(22);
		      delay(9);
		   }
		   delay(10);
		   strcpy(str," WELCOME TO AC BROTHERS ");
		   cout<<"\n\t\t    ";
		  for(i=0;i<24;i++)
		  { cout<<str[i];
		   delay(15);
		   }
		   cout<<"\n\t        ";
		   for(i=0;i<30;i++)
		   { cout<<char(22);
		   delay(9);
		    }
		  cout<<"\n\t\t Main MENU "<<endl;
		  delay(70);
		  cout<<"\n 1.Introduction Of Our Company  "<<endl;
		  delay(70);
		  cout<<"\n 2.See our other works and reviews "<<endl;
		  delay(70);
		  cout<<"\n 3.Access Cilent database   . "<<endl;
		  delay(70);
		  cout<<"\n 4.Access the contruction Order menu "<<endl;
		  delay(70);
		  cout<<"\n 5.Helpdesk "<<endl;
		  delay(70);
		  cout<<"\n 6.Exit "<<endl;
		  delay(70);
		  cout<<"\n Enter your choice: "<<endl;
		  cin>>ch;
		  clrscr();
		  switch(ch)
		  {
		     case '1':  intro();
				break;
		     case '2':  otherworks();
				break;
		     case '3':  client1();
			       break;
		     case '4': plancon();
			       break;
		     case '5': help();
				break;
		     case '6': cout<<"\n Now exiting ";
			       delay(500);
				exit(0);
				default:cout<<"\n Error, wrong choice ";

		   }
		    delay(600);
		   cout<<"\n Do you wish to continue(y/n): " ;
		   cin>>choice1;
		   k4=check1(choice1);
		   clrscr();
		   }while(k4==1);

getch();
clrscr();

}
// END
