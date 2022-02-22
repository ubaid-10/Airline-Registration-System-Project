#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainMenu();

class Management
{
    public:
        Management()
        {
            mainMenu();
        }
};

class Details
{
    public:
        static string name, gender;
        int phoneNumber;
        int age;
        static int customerID;
        char arr[100];

        void information()
        {
            cout<<"\nEnter your Customer ID : ";
            cin>>customerID;
            cout<<"Enter your Name : ";
            cin>>name;
            cout<<"Enter your Gender : ";
            cin>>gender;
            cout<<"Enter your Age : ";
            cin>>age;
            cout<<"Enter your Phone Number : ";
            cin>>phoneNumber;
            cout<<"\nYour details are saved with us!\n";
        }
};

int Details :: customerID;
string Details :: name;
string Details :: gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flight()
        {
            string flightN[]={"Dubai","New York","London","Barcelona","Tokyo"};

            for (int a=0; a<5; a++)
            {
                cout<<(a+1)<<" ->   "<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to the Stroustrup Airlines!"<<endl;
            cout<<"\nPress the number of the country of which you want book the Flight : ";
            cin>>choice;
            cout<<endl;

            switch (choice)
            {
                case 1:
                    {
                        cout<<"********** Welcome to Dubai Emirates ***********\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy your Journey!\n"<<endl;
                        cout<<"Following are the flights:\n"<<endl;
                        cout<<"1. DUB - 107"<<endl;
                        cout<<"-> Date - 28/02/2022 | Departure Time - 8:00AM | Ticket Price - 14000"<<endl;
                        cout<<"2. DUB - 289"<<endl;
                        cout<<"-> Date - 30/02/2022 | Departure Time - 6:00PM | Ticket Price - 14350"<<endl;
                        cout<<"3. DUB - 885"<<endl;
                        cout<<"-> Date - 02/03/2022 | Departure Time - 12:00AM | Ticket Price - 16000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if (choice1==1)
                        {
                            charges = 14000;
                            cout<<"\nYou have successfully booked the flight DUB - 107"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==2)
                        {
                            charges = 14350;
                            cout<<"\nYou have successfully booked the flight DUB - 289"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==3)
                        {
                            charges = 16000;
                            cout<<"\nYou have successfully booked the flight DUB - 885"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else
                        {
                            cout<<"\nInvalid input, Going back to the previous menu\n"<<endl;
                            flight();
                        }

                        cout<<"Press any key to go back to the main menu : ";
                        cin>>back;

                        if (back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }

                case 2:
                    {
                        cout<<"*********** Welcome to New York Airways ***********\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy your Journey!\n"<<endl;
                        cout<<"Following are the flights:\n"<<endl;
                        cout<<"1. NY - 754"<<endl;
                        cout<<"-> Date - 27/02/2022 | Departure Time - 1:00AM | Ticket Price - 32000"<<endl;
                        cout<<"2. NY - 567"<<endl;
                        cout<<"-> Date - 30/02/2022 | Departure Time - 2:00PM | Ticket Price - 29500"<<endl;
                        cout<<"3. NY - 345"<<endl;
                        cout<<"-> Date - 01/03/2022 | Departure Time - 9:00PM | Ticket Price - 35000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if (choice1==1)
                        {
                            charges = 32000;
                            cout<<"\nYou have successfully booked the flight NY - 754"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==2)
                        {
                            charges = 29500;
                            cout<<"\nYou have successfully booked the flight NY - 567"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==3)
                        {
                            charges = 35000;
                            cout<<"\nYou have successfully booked the flight NY - 345"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else
                        {
                            cout<<"\nInvalid input, Going back to the previous menu\n"<<endl;
                            flight();
                        }

                        cout<<"Press any key to go back to the main menu : ";
                        cin>>back;

                        if (back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }

                case 3:
                    {
                        cout<<"*********** Welcome to London Airways ***********\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy your Journey!\n"<<endl;
                        cout<<"Following are the flights:\n"<<endl;
                        cout<<"1. LON - 457"<<endl;
                        cout<<"-> Date - 28/02/2022 | Departure Time - 8:00AM | Ticket Price - 20700"<<endl;
                        cout<<"2. LON - 119"<<endl;
                        cout<<"-> Date - 30/02/2022 | Departure Time - 6:00PM | Ticket Price - 22950"<<endl;
                        cout<<"3. LON - 205"<<endl;
                        cout<<"-> Date - 02/03/2022 | Departure Time - 12:00AM | Ticket Price - 26000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if (choice1==1)
                        {
                            charges = 20700;
                            cout<<"\nYou have successfully booked the flight LON - 457"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==2)
                        {
                            charges = 22950;
                            cout<<"\nYou have successfully booked the flight LON - 119"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==3)
                        {
                            charges = 26000;
                            cout<<"\nYou have successfully booked the flight LON - 205"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else
                        {
                            cout<<"\nInvalid input, Going back to the previous menu\n"<<endl;
                            flight();
                        }

                        cout<<"Press any key to go back to the main menu : ";
                        cin>>back;

                        if (back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }

                case 4:
                    {
                        cout<<"*********** Welcome to Barcelona Airways ***********\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy your Journey!\n"<<endl;
                        cout<<"Following are the flights:\n"<<endl;
                        cout<<"1. BAR - 019"<<endl;
                        cout<<"-> Date - 1/03/2022 | Departure Time - 11:00PM | Ticket Price - 28000"<<endl;
                        cout<<"2. BAR - 030"<<endl;
                        cout<<"-> Date - 03/03/2022 | Departure Time - 5:00AM | Ticket Price - 29500"<<endl;
                        cout<<"3. BAR - 010"<<endl;
                        cout<<"-> Date - 04/03/2022 | Departure Time - 10:00PM | Ticket Price - 31700"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if (choice1==1)
                        {
                            charges = 28000;
                            cout<<"\nYou have successfully booked the flight BAR - 019"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==2)
                        {
                            charges = 29500;
                            cout<<"\nYou have successfully booked the flight BAR - 030"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==3)
                        {
                            charges = 31700;
                            cout<<"\nYou have successfully booked the flight BAR - 010"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else
                        {
                            cout<<"\nInvalid input, Going back to the previous menu\n"<<endl;
                            flight();
                        }

                        cout<<"Press any key to go back to the main menu : ";
                        cin>>back;

                        if (back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }

                case 5:
                    {
                        cout<<"*********** Welcome to Tokyo Airlines ***********\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy your Journey!\n"<<endl;
                        cout<<"Following are the flights:\n"<<endl;
                        cout<<"1. TOK - 107"<<endl;
                        cout<<"-> Date - 27/02/2022 | Departure Time - 8:00AM | Ticket Price - 14000"<<endl;
                        cout<<"2. TOK - 289"<<endl;
                        cout<<"-> Date - 29/02/2022 | Departure Time - 6:00PM | Ticket Price - 14350"<<endl;
                        cout<<"3. DUB - 385"<<endl;
                        cout<<"-> Date - 03/03/2022 | Departure Time - 12:00AM | Ticket Price - 16000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if (choice1==1)
                        {
                            charges = 14000;
                            cout<<"\nYou have successfully booked the flight TOK - 107"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==2)
                        {
                            charges = 14350;
                            cout<<"\nYou have successfully booked the flight TOK - 289"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else if (choice1==3)
                        {
                            charges = 16000;
                            cout<<"\nYou have successfully booked the flight TOK - 385"<<endl;
                            cout<<"\nYou can go back to menu and take the ticket\n"<<endl; 
                        }
                        else
                        {
                            cout<<"\nInvalid input, Going back to the previous menu\n"<<endl;
                            flight();
                        }

                        cout<<"Press any key to go back to the main menu : ";
                        cin>>back;

                        if (back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                default :
                    {
                        cout<<"Invalid input, Going back to Main Menu"<<endl;
                        mainMenu();
                        break;
                    }        
            }
        }
};

float registration :: charges;
int registration :: choice;

class ticket : public registration, Details
{
    public:
        void Bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {
                outf<<"******* Stroustrup Airlines *******"<<endl;
                outf<<"\n|------------- Ticket -------------|\n"<<endl;

                outf<<"Customer ID:     "<<Details::customerID<<endl;
                outf<<"Customer Name:   "<<Details::name<<endl;
                outf<<"Customer Gender: "<<Details::gender<<endl;

                if (registration :: choice==1)
                {
                    destination="Dubai";
                }
                else if (registration :: choice==2)
                {
                    destination="United States of America";
                }
                else if (registration :: choice==3)
                {
                    destination="United Kingdom";
                }
                else if (registration :: choice==4)
                {
                    destination="Barcelona";
                }
                else if (registration :: choice==5)
                {
                    destination="Tokyo";
                }

                outf<<"Destination :    "<<destination<<endl;
                outf<<"Flight :    \t"<<registration::charges<<endl;
                outf<<"\n|----------------------------------|\n"<<endl;
            }
            outf.close();
        }

        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File Error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\n ************** Stroustrup Airlines ***********"<<endl;
    cout<<"\n ****************** Main Menu *****************"<<endl;
    cout<<"\n _______________________________________________"<<endl;
    cout<<"|\t\t\t\t\t\t|"<<endl;
    cout<<"|\tPress 1 to Add the Customer Detials \t|"<<endl;
    cout<<"|\tPress 2 to Flight Registration      \t|"<<endl;
    cout<<"|\tPress 3 for Ticket and Charges      \t|"<<endl;
    cout<<"|\tPress 4 to Exit                     \t|"<<endl;
    cout<<"|_______________________________________________|"<<endl;

    cout<<"\nEnter your choice : "; 
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
            {
                cout<<"\n__________ Customers ____________"<<endl;
                d.information();
                cout<<"\nPress any to go back to Main Menu : ";
                cin>>back;
                cout<<endl;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        
        case 2:
            {
                cout<<"\n_______ Book a flight using this system _______\n"<<endl;
                r.flight();
                break;
            }
        
        case 3:
            {
                cout<<"\n_____________ GET YOUR TICKET ______________\n"<<endl;
                t.Bill();
            
                cout<<"Your ticket is printed, you can collect it\n"<<endl;
                cout<<"Press 1 to display your ticket : ";
                cin>>back;
                cout<<endl;

                if (back==1)
                {
                    t.dispBill();
                    cout<<"Press any key to go back to Main Menu : ";
                    cin>>back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        case 4:
            {
                cout<<"\n\n\t_________THANK YOU_________"<<endl;
                break;
            }
        default:
            {
                cout<<"Invalid input please try again!\n"<<endl;
                mainMenu();
                break;
            }
    }
}

int main()
{
    Management Mobj;

    return 0;
}
