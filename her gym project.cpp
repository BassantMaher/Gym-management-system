#include <fstream>
#include<string>
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<iostream>
#include<cmath>
#include <cstdio>
#include<windows.h>
using namespace std;
void new_memb();
long long get_id();
void display_name();
void subscribtion_new_member();
void store_new_members();
void old_member();
void subscribtion_old_member();
void complain();
void rating();
void menu_old();
void equipments();
void about_us();
void schedule_of_classes();
void prices();
void offers();
void prices_and_offers();
void search_id(long long);
void subscribe();
int main_menu();
void credit();
struct new_members
{
    string name;
    long number;
    string email;
    long long id;
    string adress;
};
new_members member;
int choice;
int n = 1;
void new_memb()
{

    cout << "\n\n\nFULL NAME : ";
    cin.ignore();
    getline(cin, member.name);
    cout << "\nEMAIL ADRESS : ";
    cin.ignore();
    getline(cin, member.email);
    cout << "\nPHONE NUMBER : ";
    cin >> member.number;
    cout << "\nADRESS: ";
    cin.ignore();
    getline(cin, member.adress);
    cout << "\nARE YOU A SMOKER?\n";
    cout << "1. YES\n";
    cout << "2. NO\n";
    cout<<"\n \t\tchoice: ";
    cin >> choice;
    for (int i = 0; i < n; i++)
    {
        if (choice == 1  || choice == 2)
        {
            break;
        }
        else
        {
            cout << "PLEASE RE-ENTER A VALID CHOICE!\n";
            cin >> choice;
            n++;
        }

    }

    cout << "\nDO YOU SUFFER FROM ANY OF THESE HEALTH PROBLEMS? \n";
    cout << "1.diabates\n";
    cout << "2.high blood pressure\n";
    cout << "3.back problems\n";
    cout << "4.others\n";
    cout << "5.none\n";
    cout << "\n \t\tchoice:";
    cin >> choice;
    for (int i = 0; i < n; i++)
    {
        if (choice == 1  ||choice == 2 || choice == 3||  choice == 4 || choice == 5)
        {
            break;
        }
        else
        {
            cout << "PLEASE RE-ENTER A VALID  CHOICE!\n";
            cin >> choice;
            n++;
        }

    }
    cout << "\nFROM WHERE DID YOU KNOW THIS GYM\n";
    cout << "1.old member\n";
    cout << "2.banner\n";
    cout << "3.advertisement\n";
    cout << "4.others\n";
    cout << "\n \t\tchoice:";
    cin >> choice;
    for (int i = 0; i < n; i++)
    {
        if (choice == 1  ||choice == 2 || choice == 3||  choice == 4)
        {
            break;
        }
        else
        {
            cout << "PLEASE RE-ENTER A VALID  CHOICE!\n";
            cin >> choice;
            n++;
        }

    }
}

long long get_id()
{
    srand(time(0));
    member.id = 100 + rand() + rand();
   // cout << "\n\n\t\t***YOUR ID IS : ";
    return member.id;
}

void display_name()
{
    cout << "\n\nYOUR NAME IS : ";
    cout << member.name;

}

void display_id()
{
    cout << "\n\n\t\t**YOUR ID IS : ";
    get_id();
    cout << member.id;
}

void subscribenew()
{
	
 		cout << "\n\n\n\n\t\tKINDLY CHOOSE A PACKAGE TO SUBSCRIBE : " << endl<<endl;
        cout << "**PACKAGE 1 : 2800 LE " << endl;
        cout << "**PACKAGE 2 : 2300 LE " << endl;
        cout << "**PACKAGE 3 : 2900 LE " << endl;
        cout << "**PACKAGE 4 : 4100 LE " << endl;
        cout << "**PACKAGE 5 : 3700 LE " << endl;
        cout << "**PRESS '0' TO RETURN BACK TO OFFERS PAGE..." << endl;
        cout << "\n\t\t##BE NOTED THAT ALL PRICES ARE FOR ONE YEAR!! " << endl;
        cout << "\n\t\tCHOICE...";
        cin >> choice;
        for (int i = 0; i < n; i++)
        {
            if (choice == 0  ||choice == 1 || choice == 2 || choice == 3  ||choice == 4 || choice == 5)
            {
                break;
            }
            else
            {
                cout << "PLEASE RE-ENTER A VALID  CHOICE!\n";
                cin >> choice;
                n++;
            }
        }


        int pay, remainder, day, month, year;
        if (choice == 0)
        {
            prices();
            cout<<"\n\t\tpress any key to g to subscription page..\n";
            getch();
            subscribenew();
        }
        else if (choice == 1)
        {
            cout << "\nEnter the Day ";
            cin >> day;
            cout << "\nenter the month";
            cin >> month;
            cout << "\nenter the year";
            cin >> year;
            cout << "\nEnter the amount you will pay";
            cin >> pay;
            remainder = 2800 - pay;
            cout << "you paid : " << pay << "\t" << "The remainder = " << remainder << "\n";
            cout << "subscribtion expiry : " << day << " / " << month << " / " << year + 1 << "\n";

        }
        else if (choice == 2)
        {

            cout << "\nEnter the Day ";
            cin >> day;
            cout << "\nenter the month";
            cin >> month;
            cout << "\nenter the year";
            cin >> year;
            cout << "\nEnter the amount you will pay";
            cin >> pay;
            remainder = 2300 - pay;
            cout << "you paid : " << pay << "\t" << "The remainder = " << remainder << "\n";
            cout << "subscribtion expiry : " << day << " / " << month << " / " << year + 1 << "\n";

        }
        else if (choice == 3)
        {

            cout << "\nEnter the Day ";
            cin >> day;
            cout << "\nenter the month";
            cin >> month;
            cout << "\nenter the year";
            cin >> year;
            cout << "\nEnter the amount you will pay";
            cin >> pay;
            remainder = 2900 - pay;
            cout << "you paid : " << pay << "\t" << "The remainder = " << remainder << "\n";
            cout << "subscribtion expiry : " << day << " / " << month << " / " << year + 1 << "\n";

        }
        else if (choice == 4)
        {

            cout << "\nEnter the Day ";
            cin >> day;
            cout << "\nenter the month";
            cin >> month;
            cout << "\nenter the year";
            cin >> year;
            cout << "\nEnter the amount you will pay";
            cin >> pay;
            remainder = 4100 - pay;
            cout << "you paid : " << pay << "\t" << "The remainder = " << remainder << "\n";
            cout << "subscribtion expiry : " << day << " / " << month << " / " << year + 1 << "\n";

        }
        else if (choice == 5)
        {

            cout << "\nEnter the Day ";
            cin >> day;
            cout << "\nenter the month";
            cin >> month;
            cout << "\nenter the year";
            cin >> year;
            cout << "\nEnter the amount you will pay";
            cin >> pay;
            remainder = 3700 - pay;
            cout << "you paid : " << pay << "\t" << "The remainder = " << remainder << "\n";
            cout << "subscribtion expiry : " << day << " / " << month << " / " << year + 1 << "\n";
        }
		}
void subscribtion_new_member()
{
	cout<<"\n**CHOOSE YOUR NEXT STEP: ";
  cout<<"\n1.offers and prices \n2.subscribe ";
  cout<<"\n\t\tchoice: ";
  cin>>choice;
  for(int i=0;i<n;i++)
  {
    if(choice==1  ||choice==2)
      {
        break;
      }
    else
      {

cout<<"PLEASE RE-ENTER A VALID  CHOICE!\n";
        cin>>choice;
        n++;
      }
  }
    if(choice==1)
    {
        prices();
        cout<<" press any key to go to subscription page...";
        getch();
        subscribenew();
        cout<<"\n\n\t\t\t~THANK YOU FOR YOUR TRUST";
       // cout<<"\n\n\tpress any key to go to MAIN MENU...";
       // getch();
        //main_menu();
    }
    else if (choice == 2)
    {
        subscribenew();
		cout<<"\n\n\t\t\t~THANK YOU FOR YOUR TRUST";
       // cout<<"\n\n\tpress any key to go to MAIN MENU...";
       // getch();
        //main_menu();
	}
    //cout << "\n\n\n\n\n\t\t\t\t\tTHANK YOU FOR VISITING US!!        \n\n\n\n\n\n";

}

fstream  both("C:Users/2372002/Desktop/hergym,ios::out");

void store_new_members()
{
    both.open("hergym.txt", ios:: app);
    new_memb();
    display_id();
    subscribtion_new_member();
    both.write((char*)&member, sizeof(member));
    both.close();


}

void old_member()
{
    long long id;
    cout << "\nEnter your ID \n";
    cin >> id;
    search_id(id);
    menu_old();


}


void subscribtion_old_member()
{
    int n, day, month, year, y, remm = 0, remy, remmonth = 0;
    float pay, f = 0;
    cout << "\n\n\tCHOOSE YOUR NEXT STEP...\n";
    cout << "1-Subscription Renewal\n";
    cout << "2-Unsubscribe \n";
    cin >> n;
    int c = 1;
    for (int i = 0; i < c; i++)
    {
        if (n == 1  ||n == 2)
        {
            break;
        }
        else
        {
            cout << "please re_enter a valid choice \n";
            cin >> n;
            c++;
        }
    }

    if (n == 1)
    {
        cout << "Enter the Day,Month and Year \n";
        cin >> day >> month >> year;
        cout << "\n\nchoose the sytem of Subscription \n";
        cout << "\t1- 1 month " << "\t" << "price : 800 L.E \n";
        cout << "\t2- 3 months " << "\t" << "price :1750 L.E \n";
        cout << "\t3- 6 months " << "\t" << "price :2500 L.E \n";
        cout << "\t4- 1 year " << "\t" << "price :3500 L.E \n";
        cin >> y;
        int c = 1;
        for (int i = 0; i < c; i++)
        {
            if (y == 1  ||y == 2||  y == 3  ||y == 4)
            {
                break;
            }
            else
            {
                cout << "please re_enter a valid choice \n";
                cin >> y;
                c++;
            }
        }

        if (y == 1)
        {
            remm = 1 + month;
            cout << "\n\n\tEnter the amount you will pay now ...\n";
            cin >> pay;
            f = 800-pay;
            cout << "you paid : " << pay << "\t" << "The remaining = " << f << "\n";
            if (month < 12)
            {
                cout << "\n\t\t\t\tsubscribtion expiry : " << day << " / " << remm << " / " << year << "\n";
            }
            if (remm >= 12)
            {
                remy = year + 1;
                remmonth = remm - 12;
                cout << "\n\t\t\t\tsubscribtion expiry : " << day << " / " << remmonth << " / " << remy << "\n";
            }

        }
        if (y == 2)
        {
            remm = 3 + month;
            cout << "\n\n\tEnter the amount you will pay now... \n";
            cin >> pay;
            f = 1500-pay;
            cout << "you paid : " << pay << "\t" << "The remaining = " << f << "\n";
            if (remm < 12)
            {
                cout << "\n\t\t\t\tsubscribtion expiry : " << day << " / " << remm << " / " << year << "\n";
            }
            if (remm >= 12)
            {
                remy = year + 1;
                remmonth = remm - 12;
                cout << "\n\t\t\t\tsubscribtion expiry : " << day << " / " << remmonth << " / " << remy << "\n";
            }
        }
        if (y == 3)
        {
            remm = month + 6;
            cout << "\n\n\tEnter the amount you will pay now ... \n";
            cin >> pay;
            f = 2500-pay;
            cout << "you paid : " << pay << "\t" << "The remaining = " << f << "\n";

            if (remm < 12)
            {
                cout << "\n\t\t\t\tsubscribtion expiry : " << day << " / " << remm << " / " << year << "\n";
            }
            if (remm >= 12)
            {
                remy = year + 1;
                remmonth = remm - 12;
                cout << "\n\t\t\t\tsubscribtion expiry : " << day << " / " << remmonth << " / " << remy << "\n";
            }
        }
        if (y == 4)
        {
            remy = 1 + year;
            cout << "\n\\tEnter the amount you will pay now... \n";
            cin >> pay;
            f =  3500-pay;
            cout << "you paid : " << pay << "\t" << "The remainingr = " << f << "\n";
            cout << "\n\t\t\t\tsubscribtion expiry : " << day << " / " << month << " / " << remy << "\n";
        }

		cout << "\n\n\t\tSubscription has been renewed successfully  \n";
    }
    if (n == 2)
    {
        cout << "Enter the Day , Month and Year you subscribed in \n";
        cin >> day >> month >> year;
        cout << "\n\n\t\t\t\tCancelled successfully...\n";
    }
   // cout<<"\n\n\t\tPRESS ANY KEY TO RETURN TO OLD MEMBER MENU...";
    //getch();
    //menu_old();
}
void complain()
{
    string comp;
    int x;
    cout << "\n\n\n\n\nDo you have any complain about gym \n";
    cout << "1-Yes" << "\n" << "2-No \n";
    cout << "\n\t\tChoice: ";
    cin >> x;
    int n = 1;
    for (int i = 0; i < n; i++)
    {
        if (x == 1  || x== 2)
        {
            break;
        }
        else
        {
            cout << "PLEASE RE-ENTER A VALID CHOICE!\n";
            cin >> x;
            n++;
        }
    }
    if (x == 1)
    {
        cout << "\n\n\n\tEnter your complain \n";
        cin.ignore();
        getline(cin, comp);
        cout << "\n\t#we will send your complain to GYM Manager\n ";
    }
    else if (x == 2)
    {
        cout << "\n\t\t\t**THANK YOU...\n";
    }
   // cout<<"\n\t\t\tpress any key to go to old member menu...";
    //getch();
    //menu_old();
}

void rating()
{
    int n;
    cout << "\n\nrate the gym : \n";
    cout << "1-*\n";
    cout << "2-**\n";
    cout << "3-***\n";
    cout << "4-****\n";
    cout << "5-*****\n";
    cout << "\t\t\tchoose: ";
    cin >> n;
    int c = 1;
    for (int i = 0; i < c; i++)
    {
        if (n == 1  ||n == 2 || n == 3  ||n == 4 || n == 5)
        {
            break;
        }
        else
        {
            cout << "PLEASE RE-ENTER A VALID CHOICE!\n";
            cin >> n;
            c++;
        }

    }
    if (n == 1)
    {
        cout << " you rated us * star please proceed to complains section if you have any problem \n";
        cout << "\t\t\t\tTHANK YOU for you rating \n";
    }
    if (n == 2)
    {
        cout << " you rated us ** stars please proceed to complains section if you have any  problem\n";
        cout << "\t\t\t\tTHANK YOU for you rating \n";
    }
    if (n == 3)
    {
        cout << "you rated us *** stars\n\n\t\t\t\tTHANK YOU for your rating \n";
    }
    if (n == 4)
    {
        cout << "you rated us **** stars\n\n\t\t\t\tTHANK YOU for your rating \n";
    }
    else if (n == 5)
    {
        cout << "you rated us ***** stars \n\n\t\t\t\tTHANK YOU for your rating \n";
    }
   // cout<<"\n\n\t\tPRESS ANY KEY TO RETURN TO OLD MEMBER MENU...";
    //getch();
    //menu_old();
}
void menu_old()
{

   // do {
    	cout << "\n\n\n\n";
        cout << "1-Subscribtions \n";
        cout << "2-Complaint \n";
        cout << "3-Rating \n";
        cout << "4-main menu\n";
        cout << "\n\t\t\tchoice: ";
		cin>>choice;
        switch (choice)
        {
        case'1':
            subscribtion_old_member();
           // cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO OLD MEMBER MENU...";
			//getch();
			//menu_old();
            break;
        case'2':
            complain();
            //cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO  OLD MEMBER MENU...";
			//getch();
			//menu_old();
            break;
        case '3':
            rating();
            //cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO  OLD MEMBER MENU...";
			//getch();
			//menu_old();
            break;
		case '4':
			main_menu();
			break;
        default:

            break;
        }
    //} while (choice != 0);

}
void search_id(long long id)
{
    bool flag = 0;
    both.open("hergym.txt", ios::in);
    while (both.read((char*)&member.id, sizeof(member.id)))
    {
        if (member.id == id)
        {

            display_name();
             flag = 1;

            break;
        }
        if (flag == 0)
        {
            cout << "\n\t\t~your id is not found re-enter a valid id  \n";
            cin >> id;


        }

        both.close();
    }
}


void equipments()
{
    cout << "\n\n\n\t\t\t\t****CARDIO MACHINES****\n" << endl;
    cout << "    1-Assault AirBike. \n" << endl;
    cout << "    2-Echelon Smart Rower. \n" << endl;
    cout << "    3-Schwinn AD7 Airdyne Bike. \n" << endl;
    cout << "    4-Jacob's Ladder Step Machine. \n" << endl;
    cout << "    5-X22i Incline Treadmill. \n" << endl;
    cout << "    6-Rowing machine. \n" << endl;
    cout << "    7-Assault bike. \n" << endl;
    cout << "    8-orbit rack. \n" << endl;
    cout << "\n";
    cout << "\\n\n\t\t\t\t****BODYBUIDING MACHINES****\n" << endl;
    cout << "    1-Power Rack / Full Rack. \n" << endl;
    cout << "    2-Squat rack / Half rack. \n" << endl;
    cout << "    3-Cable Crossover Machine. \n" << endl;
    cout << "    4-Hammer Strength Machine. \n" << endl;
    cout << "    5-Chest Press Machine. \n" << endl;
    cout << "    6-Pec Deck Machine. \n" << endl;
    cout << "    7-Dumbbles. \n" << endl;
    cout << "    8-chestpress. \n" << endl;
    cout << "    9-fly machine. \n" << endl;
    cout << "    10-leg press. \n" << endl;
    cout << "    11-leg curl. \n" << endl;
    cout << "    12-leg extension. \n" << endl;
    cout << "    13-lat pull down. \n" << endl;
    cout << "    4-shoulder press. \n" << endl;
    cout << "    15-calf raise. \n\n" << endl;
   // cout<<"\n\n\t\tPRESS ANY KEY TO RETURN TO MAIN MENU...";
    //getch();
    //main_menu();
}

void about_us()
{
    cout << "\n\n\n\t\t\t\t**ABOUT US** \n";
    cout << "\n";
    cout << " \t\tOur journey started in september 2002 ,we started by having a small branch at Al-maadi city, cairo \n";
    cout << "\t ,but now we have alot of branches all over Egypt.\n";
    cout << "\n";
    cout << " \t\tWe have the best trainers in Egypt with very high experiences and also we have a Nutrition Doctor\n";
    cout << " \tas an option .\n";
    cout << "\n";
    cout << "\t\t Every class has its own Trainer and every private session has an instructor, Our gym also supports\n ";
    cout << "\t different goals as Body Building, shaping ,keeping fit,weight loss and even weight gain .\n ";
    cout << "\n";
    cout << "\t\t The working hours starts from 8:00 AM to 10:00 PM every day, and classes are available at different \n";
    cout << " \t time of the day .\n";
    cout << "\n";
    cout << " \t\tOur gym has been rated 4.5 stars by our members ,we hope you rate us also.\n";
    cout << "\n";
    cout << " \t\tOur branches : \n";
    cout << " \t 1-Al-maadi(The main branch). \n";
    cout << " \t 2- Al sheikh zayed city. \n";
    cout << " \t 3- Al Mohandessin. \n";
    cout << " \t 4-Masr Al jadidah.\n";
    cout << " \t 5-6Th october city.\n";
    cout << "\n";
    cout << "\t\t Our next branches:\n ";
    cout << " \t 1-Alexandria.\n ";
    cout << " \t 2-Al Mansoura.\n ";
    cout << "\n";
    cout << " \t\tOur Trainers: \n";
    cout << " \t 1- Farah Mahamed salama.\n";
    cout << " \t 2- Bassant Maheer.\n";
    cout << " \t 3- Ayat Mahamed.\n";
    cout << " \t 4- Toqa Yasser.\n";
    cout << " \t 5-Farah Mohsen.\n";
    cout << " \t 6- Alaa Raed.\n";
    cout << " \t 7- yasmeen Ahmed.\n ";
    cout << "\n";
    cout << " \t\t To contact us : \n";
    cout << " \t Email : HERGYM @gmail.com. \n";
    cout << " \t Phone :29989.\n ";
    cout << " \t whatsapp : 01044261530 , 0114321520\n";
    cout << "\n";
    cout << "\n\n\n\t\t\t~Thank you for choosing HERGYM.\n";
   // cout<<"\n\n\t\tPRESS ANY KEY TO RETURN TO MAIN MENU...";
    //getch();
    //main_menu();
}

void schedule_of_classes()
{
    cout << "  " << "Day    \t" << "10:11 Am\t\t" << "2:3 pm\t\t\t" << "7:8 pm\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << "  " << "Sunday    \t" << "Trampoline\t\t" << "Cross fit\t\t" << "Yoga" << endl;
    cout << "\t\t   Toqa\t\t\tBassant\t\t\tFarah" << endl;
    cout << endl;
    cout << "  Monday      \tZumba\t\t\tStretching\t\tSteps" << endl;
    cout << "\t\t Toqa\t\t\tAlaa\t\t\tAyat" << endl;
    cout << endl;
    cout << "  Tuesday     \tTrampoline\t\tZumba\t\t\tYoga \n";
    cout << "\t\t Yasmeen\t\tBassant\t\t\tAlaa\n";
    cout << endl;
    cout << "  Wendsday     \tBodyshape\t\tCrossfit\t\tStretching\n";
    cout << "\t\t  Farah\t\t\tYasmeen\t\t\tAyat\n";
    cout << endl;
    cout << "  Thrusday    \tSteps\t\t\tYoga\t\t\tBodyshape\n";
    cout << "\t\tBassant\t\t\tFarah\t\t\tToqa\n";
   // cout<<"\n\n\t\t\tPRESS ANY KEY TO RETURN TO MAIN MENU...";
    //getch();
    //main_menu();
}

void prices() {
    cout << "\n\n\n\n\t\t\t****GYM PRICES****\t\t\t\t\t\n" << endl;
    cout << "Body Building , Fitness & Kickboxing Club \n" << endl;
    cout << "KICK BOXING :2200" << "\t" << "Instructor included\n" << endl;
    cout << "SOLO BOXING :1500" << "\t" << "No Instructor\n\n" << endl;
    cout << "Package 1\n" << endl;
    cout << "KICK BOXING : 2000" << " + " << "GYMMING :800\n" << endl;
    cout << "Instructor included" << "\t" << "No Instructor\n\n" << endl;
    cout << "Package 2\n" << endl;
    cout << "SOLO BOXING :1500" << " + " << "GYMMING:800\n" << endl;
    cout << "No Instructor" << "\t" << "NO Instructor\n\n" << endl;
    cout << "Package 3\n" << endl;
    cout << "Cardio :800" << " + " << "KICK BOXING :2100\n" << endl;
    cout << "No Instructor" << "\t" << "Instructor included\n\n" << endl;
    cout << "Package 4\n" << endl;
    cout << "KICK BOXING :2100" << " + " << "GYMMING :2000\n" << endl;
    cout << "Instructor included" << "\t" << "Instructor included\n\n" << endl;
    cout << "Package 5\n" << endl;
    cout << "Cardio" << " + " << "KICK BOXING" << " + " << "GYMMING :3700\n" << endl;
    cout << "Instructor included\n\n\n" << endl;

}

void offers() {
    cout << "\n\n\n\t\t\t\t\t***GYM OFFERS***\t\t\t\t\t\t\\n";
    cout << "If You Are Two Persons You Can Take Package 1 and Any Other Package With 50% off Including free Classes\n" << endl;
    cout << "If You Are Three Persons You Can Take Two Packages  and Any Other Package With 50% off Including free Classes\n" << endl;
    cout << "If You Pay for 3 Months You Can Take Package 2 with 20% off Including free Classes\n" << endl;
    cout << "If You Pay for 6 Months You Can Take Package 5 with 30% off Including free Classes\n" << endl;
    cout << "If You Pay for 12 Months You Can Take Package 5 with 50% off Including free Classes" << endl;

}

void prices_and_offers()
{
    char choice;

  //  do {
        cout << "\n\t\tCHOOSE YOUR NEXT STEP...\n" << endl;
        cout << "1-Prices\n" << endl;
        cout << "2-Offers\n" << endl;
        cout << "3-main menu\n"<< endl;
        cout << "\t\t\tchoice: ";
        cin>>choice;
        switch (choice)
        {
        case '1':
            prices();
              prices_and_offers();
            break;
        case '2':
            offers();
              prices_and_offers();
            break;
            case '3':
            	main_menu();
            	break;
        default:
            cout << "ERROR\n";
            prices_and_offers();

        }
   // } while (choice != 0);
     //cout<<"\n\n\t\tPRESS ANY KEY TO RETURN TO MAIN MENU...";
    // getch();
     //main_menu();
}
void credit()
{
	cout<<"\n\n\n\t\t**PROGRAM IS PUBLISHED BY:";
	cout<<"\nBassant Maher\n";
	cout<<"Alaa raed\n";
	cout<<"ayaat mohammed\n";
	cout<<"farah mohsen elsoukary\n";
	cout<<"farah mohammed salama\n";
	cout<<"yassmine ahmed\n";
	cout<<"toqa yasser\n";
//	cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
//	getch();
//	main_menu();
}
int main_menu()
 {

   		char option;
        cout << "\n\n\n\n\t\t\t***MAIN_MENU***\t\t\t\n\n\n\n";
        cout << "1- New Member,\n";
        cout << "2- Old Member.\n";
        cout << "3- Schedule of classes.\n";
        cout << "4- Prices and Offers.\n";
        cout << "5- Equipments.\n";
        cout << "6- about us\n";
        cout << "7- credits\n";
        cout << "8- exit\n";
        cout << "\t\tchoice...";
        cin>>option ;
       // return option;
        switch (option)
        {
        case'1':
            store_new_members();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
            break;
        case'2':
            old_member();
			cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
                break;
        case'3':
            schedule_of_classes();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
            break;
        case'4':
            prices_and_offers();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
			break;
        case '5':
            equipments();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
            break;
        case'6':
            about_us();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
        case'7':
            credit();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
            break;
        case'8':
        	cout << "\t\t\t~THANK YOU FOR VISITING US... ";
        //	return 0;
       		 break;
        default:
            cout << "\t\t\t~THANK YOU FOR VISITING US... ";
			return 0;
		}
}
int main()
{
    system("color 7D");
    cout << "\n\n\n\n\n\t\t\t\t\t\t***WELCOME TO HERE GYM***\t\t\t\t";
    main_menu();
    /*do {
        option=main_menu();
        switch (option)
        {
        case'1':
            store_new_members();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
            break;
        case'2':
            old_member();
			cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
                break;
        case'3':
            schedule_of_classes();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
            break;
        case'4':
            prices_and_offers();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
			break;
        case '5':
            equipments();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
            break;
        case'6':
            about_us();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
        case'7':
            credit();
            cout<<"\n\n\t\t PRESS ANY KEY TO RETURN TO THE MAIN MENU...";
			getch();
			main_menu();
            break;
        case'8':
        	cout << "\t\t\t~THANK YOU FOR VISITING US... ";
        	return 0;
        default:
            cout << "\t\t\t~THANK YOU FOR VISITING US... ";
			return 0;
        }
    } while (option != 0);*/
    return 0;
}
