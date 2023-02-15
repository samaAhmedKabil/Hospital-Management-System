#include <bits/stdc++.h>
#include <fstream>
#include <windows.h>
using namespace std;
int z;

long long count_numbers (long long num)
{
    long long count = 0 ;
    while (num!=0)
    {
        num = num/10 ;
        count++ ;
    }
    return count ;
}

void program_strat ()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~  Welcome to My Life hospital      ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~                                   ~~~" << endl ;
    cout << "~~~        1- patient                 ~~~" << endl ;
    cout << "~~~        2- Doctor                  ~~~" << endl ;
    cout << "~~~        3- Nurses                  ~~~" << endl ;
    cout << "~~~        4- pharmacist              ~~~" << endl ;
    cout << "~~~        5- pharmacy                ~~~" << endl ;
    cout << "~~~        6- Laboratory              ~~~" << endl ;
    cout << "~~~        7- view data               ~~~" << endl ;
    cout << "~~~        8- Net Profit              ~~~" << endl ;
    cout << "~~~        9- Exit                    ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
}

void surface ()
{
    cout << "                                                        *                                        " << endl ;
    cout << "                                                   *         *                                   " << endl ;
    cout << "                                                *              *                                 " << endl ;
    cout << "                                              *                   *                              " << endl ;
    cout << "                                            *                        *                           " << endl ;
    cout << "                                          *                            *                         " << endl ;
    cout << "                                       *                                 *                       " << endl ;
    cout << "                                       ...................................                       " << endl ;
    cout << "                                       |            MY Life              |                       " << endl ;
    cout << "                                       |           Hospital              |                       " << endl ;
    cout << "                                       ...................................                       " << endl ;
    cout << "                                       |                                 |                       " << endl ;
    cout << "                                       |                                 |                       " << endl ;
    cout << "                                       |                                 |                       " << endl ;
    cout << "                                       |                                 | " << endl ;
    cout << "                                       |                                 | " << endl ;
    cout << "                                       |                                 | " << endl ;
    cout << "                                       |                                 | " << endl ;
    cout << "                                       |            -----------          | " << endl ;
    cout << "                                       |            |         |          | " << endl ;
    cout << "                                       |            |         |          | " << endl ;
    cout << "                                       |            |         |          | " << endl ;
    cout << "                                       |            |         |          | " << endl ;
    cout << "                                       |            |         |          | " << endl ;
    cout << "                                       |            |         |          | " << endl ;
    cout << "                                       |            |         |          | " << endl ;
    cout << "                                       |            -----------          | " << endl ;
    cout << "                                       ----------------------------------- " << endl ;
    Sleep(3500);
    system("cls");
}

class person
{
private:
    string name ;
    char gender ;
    int ID ;
    int phonenumber ;
    int age ;
public:
    person ()
    {
        name = " " ;
        gender = ' ' ;
        ID = 0 ;
        phonenumber = 0 ;
        age = 0 ;
    }
    person (string n , char g , int id , int pn, int a)
    {
        name = n ;
        gender = g ;
        ID = id ;
        phonenumber = pn ;
        age = a ;
    }
    void setname (string n)
    {
        name = n ;
    }
    void setgender (char g)
    {
        gender = g ;
    }
    void setID (int id)
    {
        ID = id ;
    }
    void setphonenumber (int pn)
    {
        phonenumber = pn ;
    }
    string getname ()
    {
        return name ;
    }
    char getgender ()
    {
        return gender ;
    }
    int getID ()
    {
        return ID ;
    }
    int getphonenumber ()
    {
        return phonenumber ;
    }
};

class patient :public person
{
protected:
    int stayperiod ;
    int bills ;
public:
    double total ;
    patient ()
    {
        stayperiod = 0 ;
        bills = 0 ;
        total = 0.0 ;
    }
     patient (int s , int b , double t)
    {
        stayperiod = s ;
        bills = b ;
        total = t ;
    }
    void setstayperiod (int s)
    {
        stayperiod = s ;
    }
    void setbills (int b)
    {
        bills = b ;
    }
    void settotal (double t)
    {
        total = t ;
    }
    int getstayperiod ()
    {
        return stayperiod ;
    }
    int getbills ()
    {
        return bills ;
    }
    double gettotal ()
    {
        return total ;
    }
    double room_bills (double p)
    {
        double paiedbills ;
        if (stayperiod == 12)
        {
            paiedbills = bills ;
            return paiedbills ;
        }
        if (stayperiod<12)
        {
            paiedbills = bills / (p*6) ;
            return paiedbills ;
        }
        if (stayperiod > 12)
        {
            paiedbills = bills * (p/6) ;
            return paiedbills ;
        }
    }
    void firstChoice (string n , char g , long long id , long long pn , int a , string job , string socialState)
{
    fstream patient_data ;
    patient_data.open("D:\\CS ACU\\Projects\\lab with hospital\\pateint data file.txt" , ios::out | ios::in | ios::app) ;
    patient_data << "Personal Data of patients ------->> " << endl ;
    Sleep(1000) ;
    system("cls");
    cout << "Enter your full name :-  " ;
    cin >> n ;
    patient_data << "The name of the patient is :- " << n << endl ;
    cout << "Enter your Gender :-  " ;
    cin >> g ;
    patient_data << "The gender of the patient :- " << g << endl ;
    cout << "Enter your national ID (14 numbers) :-  " ;
    cin >> id ;
    while (count_numbers (id)>14 || count_numbers (id)<14)
    {
        cout << "the ID you entered is not valid , Please try again \n" ;
        cin >> id ;
    }
    patient_data << "The national id of the patient :- " << id << endl ;
    cout << "Enter your phone number (11 numbers) :-  " ;
    cin >> pn ;
    while (count_numbers (pn)>11 || count_numbers (pn)<11)
    {
        cout << "the Phone number you entered is not valid , Please try again \n" ;
        cin >> pn ;
    }
    patient_data << "The phone number of the patient :- " << pn << endl ;
    cout << "Enter your age (in years) :-  " ;
    cin >> a ;
    patient_data << "The age of the patient :- " << a << endl ;
    cout << "Please , Enter your social state :-  " ;
    cin >> socialState ;
    patient_data << "The social state of the patient :- " << socialState << endl ;
    cout << "Please , Enter your job :-  " ;
    cin >> job ;
    patient_data << "The job / carrer of the patient :- " << job << endl ;
    system("cls");
}
void report_interface (int startPoint)
{
    fstream patient_medical ;
    patient_medical.open("D:\\CS ACU\\Projects\\lab with hospital\\pateint data file.txt" , ios::out | ios::in | ios::app) ;
    patient_medical << endl ;
    patient_medical << "The Medical History of patients ------>>  " << endl ;
    string what , who ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~ Please,give us some medical information ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~                                         ~~~" << endl ;
    cout << "~~~    Have you ever did any operation?     ~~~" << endl ;
    cout << "~~~        1- Yes                           ~~~" << endl ;
    cout << "~~~        2- No                            ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin >> startPoint ;
    system("cls");
    if (startPoint==1)
    {
        cout << "In which organ of your body you did the last operation :-  " ;
        cin >> what ;
        patient_medical << "The  last operation have been done on :- " << what << endl ;
        system("cls");
        cout << "Who was the doctor who did it :-  " ;
        cin >> who ;
        patient_medical << "The last doctor who did the operation on this organ :- " << who << endl ;
        system("cls");
    }
    if (startPoint==2)
    {
        cout << "##### Good !!" << endl ;
        Sleep(1000) ;
        system("cls");
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~ Please,give us some medical information ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~                                         ~~~" << endl ;
    cout << "~~~    Do you have any chronic disease?     ~~~" << endl ;
    cout << "~~~        1- Yes                           ~~~" << endl ;
    cout << "~~~        2- No                            ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin >> startPoint ;
    system("cls");
    if (startPoint==1)
    {
        cout << "What is your chronic disease :-  " ;
        cin >> what ;
        patient_medical << "The chronic disease of the patient :- " << what << endl ;
        system("cls");
    }
    if (startPoint==2)
    {
        cout << "###### very Good !!" << endl ;
        Sleep(1000) ;
        system("cls");
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~       Please,give us some medical information       ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~                                                     ~~~" << endl ;
    cout << "~~~  Do your father of mother have any chronic disease? ~~~" << endl ;
    cout << "~~~        1- Yes                                       ~~~" << endl ;
    cout << "~~~        2- No                                        ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin >> startPoint ;
    system("cls");
    if (startPoint==1)
    {
         cout << "$$$$$$ Which of your father or your mother has chronic disease? $$$$$$ " << endl ;
         cout << "$$$$$$                   1- Father                              $$$$$$ " << endl ;
         cout << "$$$$$$                   2- Mother                              $$$$$$ " << endl ;
         cout << "$$$$$$                   3- Both                                $$$$$$ " << endl ;
         cout << " ---> Please , Enter the number of your choice : " ;
         cin >> who ;
         patient_medical << "which one of your father or your mother has chronic disease :- " << who << endl ;
         system("cls");
         cout << "What is the chronic disease :-  " ;
         cin >> what ;
         patient_medical << "The chronic disease of the parents :- " << what << endl ;
         system("cls");
    }
    if (startPoint==2)
    {
        cout << "magnificient !!!!!! ~~~~" << endl ;
        Sleep(1000);
        system("cls") ;
    }
    string bloodtype ;
    cout << "Please , tell me your blood type:-  " ;
    cin >> bloodtype ;
    patient_medical << "The blood type of the patient :- " << bloodtype << endl ;
    patient_medical << endl ;
    patient_medical << "-------------------- The next patient --------------------------" << endl ;
    system("cls");
    cout << " ````(OK)```` , 'We are done with your medical history' \n" ;
    system("cls");
}
float patient_illness()
    {
        int choice;
        double p ;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~~~~     What are you suffering from           ~~~~\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~~~~     1-Department of dermatology           ~~~~\n";
        cout << "~~~~     2-Obstetrics and gynecology specialty ~~~~\n";
        cout << "~~~~     3-Urology                             ~~~~\n";
        cout << "~~~~     4-Ear and nose medicine               ~~~~\n";
        cout << "~~~~     5-ophthalmology                       ~~~~\n";
        cout << "~~~~     6-Pediatrics                          ~~~~\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " ---> Please , Enter the number of your choice : ";
        cin >> choice;
        system("cls");
        if (choice == 1)
        {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~   The available Doctors in dermatology department   ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~        1- Hamza Mahmoud                             ~~~" << endl ;
            cout << "~~~        2- Ziad Omar                                 ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice ;
            system("cls") ;
            if (choice==1)
            {
                cout << "The Doctor you chose is working from 1 pm to 4 pm , In the fifth floor in room 1299" << endl ;
                cout << endl ;
                cout << "The bills of the check is :- ((250)) EGP ___" << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 250 ;
                cout << "The bills you will pay are equal to :-  " << total << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
            if (choice==2)
            {
                cout << "The Doctor you chose is working from 5 pm to 8 pm , In the fifth floor room 1295 " << endl ;
                cout << "The bills of the check is:- ((200)) EGP ___ " << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 200 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
        }
        else if (choice == 2)
        {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~   The available Doctors in Obstetrics department    ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~        1- Yamine Mahmoud                            ~~~" << endl ;
            cout << "~~~        2- Amira Ahmed                               ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice ;
            system("cls") ;
            if (choice==1)
            {
                cout << "The Doctor you chose is working from 6 pm to 9 pm , In the second floor room 1287" << endl ;
                cout << "The bills of the check is :- ((330)) EGP ___" << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 350 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
            if (choice==2)
            {
                cout << "The Doctor you chose is working from 3 pm to 7 pm , In the second floor room 1282 " << endl ;
                cout << "The bills of the check is :- ((270)) EGP ___ " << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 270 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;

            }
        }
        else if (choice == 3)
        {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~   The available Doctors in Urology department       ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~        1- Omar Mahmoud                              ~~~" << endl ;
            cout << "~~~        2- Nada Nasser                               ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice ;
            system("cls") ;
            if (choice==1)
            {
                cout << "The Doctor you chose is working from 9 pm to 11 pm , In the first floor room 1234 " << endl ;
                cout << "The bills of the check is :- ((360)) EGP ___" << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 360 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
            if (choice==2)
            {
                cout << "The Doctor you chose is working from 1 am to 4 am , In the first floor room 1238 " << endl ;
                cout << "The bills of the check is :- ((400)) EGP ___ " << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 400 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
        }
        else if (choice == 4)
        {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~   The available Doctors in Ear and nose department  ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~        1- Basma Ali                                 ~~~" << endl ;
            cout << "~~~        2- Rahma Ahmed                               ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice ;
            system("cls") ;
            if (choice==1)
            {
                cout << "The Doctor you chose is working from 6 am to 9 am , In the third floor room 1246 " << endl ;
                cout << "The bills of the check is :- ((150)) EGP ___" << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 150 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
            if (choice==2)
            {
                cout << "The Doctor you chose is working from 8 am to 11 am , In the third floor room 1245 " << endl ;
                cout << "The bills of the check is :- ((130)) EGP ___ " << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 130 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
        }
        else if (choice == 5)
        {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~   The available Doctors in ophthalmology department ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~        1- Eslam Mahmed                              ~~~" << endl ;
            cout << "~~~        2- Menna Saad                                ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice ;
            system("cls") ;
            if (choice==1)
            {
                cout << "The Doctor you chose is working from 7 pm to 10 pm , In the forth floor room 1261 " << endl ;
                cout << "The bills of the check is :- ((420)) EGP ___" << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 420 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
            if (choice==2)
            {
                cout << "The Doctor you chose is working from 3 pm to 9 pm , In the fourth floor room 1269 " << endl ;
                cout << "The bills of the check is :- ((450)) EGP ___ " << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 450 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
        }
        else if (choice == 6)
        {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~   The available Doctors in Pediatrics department   ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~        1- Dina Ahmed                                ~~~" << endl ;
            cout << "~~~        2- Khaled Mahmoud                            ~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice ;
            system("cls") ;
            if (choice==1)
            {
                cout << "The Doctor you chose is working from 6:30 pm to 9:45 pm , In the sixth floor room 1312 " << endl ;
                cout << "The bills of the check is :- ((170)) EGP ___" << endl ;
                Sleep(1500) ;
                system("cls") ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                double total = room_bills(p) + 170 ;
                cout << "The bills you will pay are equal to :-  " << total  << endl ;
                Sleep (2000) ;
                system ("cls") ;
            }
            if (choice==2)
            {
                cout << "The Doctor you chose is working from 3:50 pm to 7:10 pm , In the sixth floor room 1320 " << endl ;
                cout << "The bills of the check is :- ((230)) EGP ___ " << endl ;
                Sleep(1500) ;
                system("cls") ;
                double p ;
                cout << "Please , Enter how many hours you will stay in room booked \n" ;
                cin >> p ;
                setstayperiod(p) ;
                setbills(2000) ;
                total = room_bills(p) + 230 ;
                cout << "The bills you will pay are equal to :-  " << total << endl ;
                Sleep (2000) ;
                system ("cls") ;
        }
        else
        {
            cout << " Please Enter a Valid Number \n";
        }
        system("cls");
    }
    }
};

class Doctor :public person{
private:
    int numholiday ;
    int extraTime , numYear;
    public:
        double totalSalary;
    Doctor(){
       numholiday=0;
        extraTime=0;
        totalSalary=0;
        numYear=0;
	}
	Doctor(int h,int w,double x,int y){
        numholiday=h;
       extraTime=w;
        totalSalary=x;
        numYear=y;
	}
	void setnumholiday(int n){
		numholiday=n;
	}

	void setextraTime(int x){
		extraTime=x;
	}
	void settotalsalary(double s){
		totalSalary=s;
	}
	void setnumYear(int y){
		numYear=y;
	}
	int getnumholiday(){
		return numholiday;
	}
	double gettotalsalary(){
		return totalSalary;
	}
	int getnumYear(){
		return numYear;
	}

void dataD (string n1 ,string n2, char g , long long id , long long pn , string ad )
{
    fstream doctorData ;
    doctorData.open("D:\\CS ACU\\Projects\\lab with hospital\\Data.txt", ios::out | ios::in | ios::app) ;
    doctorData << endl ;
    system("cls") ;
    cout << "Enter your full name :-  " ;
    cin >> n1>>n2 ;
    string n3=n1+" "+n2;
    doctorData <<" Name : D/ "<<n3<<endl;
    doctorData<<endl;
    cout << "Enter your Gender :-  ";
    cin >> g ;
    doctorData <<"Gender : "<< g << endl ;
    doctorData << endl ;
    cout << "Enter your national ID (14 numbers) :-  " ;
    cin >> id ;
    while (count_numbers (id)>14 || count_numbers (id)<14)
    {
        cout << "the ID you entered is not valid , Please try again \n" ;
        cin >> id ;
    }
        doctorData << "ID : "<<id << endl ;
        doctorData<<endl;
    cout << "Enter your phone number (11 numbers) :-  " ;
    cin >> pn ;
    while (count_numbers (pn)>10 || count_numbers (pn)<10)
    {
        cout << "the Phone number you entered is not valid , Please try again \n" ;
        cin >> pn ;
    }
    doctorData <<"  Number phone : " << pn << endl ;
    doctorData<<endl;
    cout <<"Enter your adress : "<<endl;
    cin>>ad;
    doctorData<<" Adress : "<<ad<<endl;
    doctorData << endl ;
    system("cls");
}
//3
void attendTime(){

	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"     Please , Enter the time you want to attend   "<<endl;
	    cout<<"         ###            1- 8-4 am         ###     "<<endl;
	    cout<<"         ###            2- 4-12 pm        ###     "<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"         Please, Enter the number of  choice  "<<endl;
	    int n;
	    cin>>n;
	    fstream attend;
	    attend.open("D:\\CS ACU\\Projects\\lab with hospital\\Data.txt", ios::out | ios::in | ios::app);
	    if(n==1){
	    	attend<<" My shift time : 8-4 am"<<endl;
		}
		else if(n==2){
			attend<<" My shift time : 4-12 pm "<<endl;
		}
		attend<<endl;
		system("cls")	;
}
//1
void specialty(){
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"       $$     ~ Hello,Doctor ~   $$        "<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        fstream doctorSpeciant ;
           doctorSpeciant.open("D:\\CS ACU\\Projects\\lab with hospital\\Data.txt", ios::out | ios::in | ios::app) ;
			cout<<" what are your specialize ?"<<endl;
			cout<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"*   1-Dermatologis      "<<endl;
			cout<<"*   2- Gynecologist     "<<endl;
			cout<<"*   3-Urologist         "<<endl;
			cout<<"*   4-Nose and ear      "<<endl;
			cout<<"*   5-An ophthalmologist"<<endl;
			cout<<"*   6-Pediatrician      "<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~Please , Enter the number of your choice "<<endl;
			cin>>z;
			system("cls");
			if(z==1){
				doctorSpeciant<<"My specialtyis : Dermatologis"<<endl;

			}
			else if(z==2){
			doctorSpeciant<<"My specialtyis : Gynecologist"<<endl;

			}
			else if(z==3){
				doctorSpeciant<<"My specialtyis : Urologist"<<endl;
			}
			else if(z==4){
				doctorSpeciant<<"My specialtyis : Nose and ear"<<endl;

			}
			else if(z==5){
				doctorSpeciant<<"My specialtyis : An ophthalmologist"<<endl;

			}
			else if(z==6){
				doctorSpeciant<<"My specialtyis : Pediatrician"<<endl;

			}
			system("cls");
			doctorSpeciant<<"================================================================="<<endl;
			doctorSpeciant<<"================================================================="<<endl;
}
int Salary(){
	double s=0;
	int v=overTime();
	int y=holiday();
	int b=operation();
	if(z==1){
		s=22*500;
		double h= 500/8;
		int p=v*h;
		int m=h*y;
		int g=b*1000;
		totalSalary=(s+p+g)-m;
		settotalsalary(totalSalary) ;
		cout<<"$$$    Your Extra Salary is           $$$       "<<p<<endl;
		cout<<"$$$      The deducted Salary is       $$$        "<<m<<endl;
		cout<<"$$$       Your Salary this month is   $$$         "<<totalSalary<<endl;
	}
	else if(z==2){
		s=22*750;
		double h=750/8;
		int p=v*h;
		int m=h*y;
		int g=b*2000;
		totalSalary=(s+p+g)-m;
		settotalsalary(totalSalary) ;
		cout<<"$$$    Your Extra Salary is           $$$       "<<p<<endl;
		cout<<"$$$      The deducted Salary is       $$$        "<<m<<endl;
		cout<<"$$$       Your Salary this month is   $$$         "<<totalSalary<<endl;
	}
		else if(z==3){
		s=22*400;
		double h= 400/8;
		int p=v*h;
		int m=h*y;
		int g=b*2000;
		totalSalary=(s+p+g)-m;
		settotalsalary(totalSalary) ;
		cout<<"$$$    Your Extra Salary is           $$$       "<<p<<endl;
		cout<<"$$$      The deducted Salary is       $$$        "<<m<<endl;
		cout<<"$$$       Your Salary this month is   $$$         "<<totalSalary<<endl;
	}
		else if(z==4){
		s=22*800;
		double h= 800/8;
		int p=v*h;
		int m=h*y;
		int g=b*1500;
		totalSalary=(s+p+g)-m;
		cout<<"$$$    Your Extra Salary is           $$$       "<<p<<endl;
		cout<<"$$$      The deducted Salary is       $$$        "<<m<<endl;
		cout<<"$$$       Your Salary this month is   $$$         "<<totalSalary<<endl;
	}
		else if(z==5){
		s=22*650;
		double h= 650/8;
		int p=v*h;
		int m=h*y;
		int g=b*1700;
		totalSalary=(s+p+g)-m;
		settotalsalary(totalSalary) ;
		cout<<"$$$    Your Extra Salary is           $$$       "<<p<<endl;
		cout<<"$$$      The deducted Salary is       $$$       "<<m<<endl;
		cout<<"$$$       Your Salary this month is   $$$       "<<totalSalary<<endl;
	}
		else if(z==6){
		s=22*550;
		double h= 550/8;
		int p=v*h;
		int m=h*y;
		int g=b*1700;
		totalSalary=(s+p+g)-m;
		settotalsalary(totalSalary) ;
		cout<<"$$$    Your Extra Salary is           $$$       "<<p<<endl;
		cout<<"$$$      The deducted Salary is       $$$       "<<m<<endl;
		cout<<"$$$       Your Salary this month is   $$$       "<<totalSalary<<endl;
	}

	//system("cls");
	return totalSalary;
}
    int operation(){
    	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
     	cout<<"    Did you have surgery this month ?  "<<endl;
     	cout<<"                1-YES	              "<<endl;
	    cout<<"                0-NO	                  "<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    	cout<<"  Please , Enter the number of your choice"<<endl;
     	int k;
     	cin>>k;
     	system("cls");
     	if(k==0){
     		return 0;
		 }
		 else{
		 	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"   please , Enter the numer of operations you have performed this monthe "<<endl;
		 	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			int f;
			cin>>f;
			 system("cls");
			return f;
		}
}
	int overTime(){
		    int h;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"    Did you spend an extra hour this month  ?  "<<endl;
			cout<<"                   1-YES                       "<<endl;
			cout<<"                   0-NO                        "<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"     Please , Enter the number of your choice  "<<endl;
			cin>>h;
			cout<<endl;
			system("cls");
			if(h==0){
                return 0;
			}
			if(h==1){
				cout<<"please enter the addition number of hours "<<endl;
				cin>>extraTime;
			}
			cout<<"================================================"<<endl;
			return extraTime;
			system("cls");
		}
		int holiday(){
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"      Please , Enter the number of holiday days you spent this monthe  "<<endl;
		    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cin>>numholiday;
		system("cls");
		if(numholiday==8){
			return 0;
		}
     	else if(numholiday>8){
     	unsigned int num=numholiday-8;
		   return num *8;
		}
		  	system("cls");
	}
	void checkAge(){
	    fstream age ;
	    age.open("D:\\CS ACU\\Projects\\lab with hospital\\Data.txt" , ios::out | ios::in | ios::app) ;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    int answer;
	    system("cls") ;
		cout<<"Do you want to check your age?"<<endl;
	    cout<<"                1-YES	     "<<endl;
	    cout<<"                0-NO	         "<<endl;
	    cin>>answer;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	if(answer==1){
		int A;
        system("cls") ;
		cout<<"please,enter your age"<<endl;
		cin>>A;
		age << "The age of the doctor :- " << A << endl ;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		if(A>=60){
                system("cls") ;
            cout<<"        you should retire          "<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"enter the number of years you worked"<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cin>>numYear;
			int indemnity;
			if(numYear>=2 && numYear<=5){
				indemnity=(totalSalary/2)*numYear;
				cout<<"indemnity = "<<indemnity<<endl;
			}
			if(numYear>5){
				indemnity=totalSalary*numYear;
				cout<<"indemnity = "<<indemnity<<endl;
			}
		}
		else{
                system("cls") ;
             cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
             cout<<"           You are still working                     "<<endl;
			 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"Do you want to retire ? please answer whith yes or no "<<endl;
			string answer;
			cin>>answer;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			if(answer=="yes"){
				cout<<"enter the number of years you worked"<<endl;
				cin>>numYear;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			    int yearcontract;
	           cout<<"enter the number of years in the contract"<<endl;
			    cin>>yearcontract;
			    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			    if(numYear==yearcontract){
			       	cout<<"final salary = "<<totalSalary*numYear<<endl;
				}
				if(numYear<yearcontract){
					cout<<"final salary = "<<totalSalary*(10/100)<<endl;
				}
			}
			else{
				cout<<"thank you Dotor"<<endl;
			}
		}
	}
	if(answer==0){
		cout<<"thank you Doctor"<<endl;
	}
	}
};

class Pharmicy {
protected:
    string medicin_name;
    int medicin_id;
    int medicin_quantity;
public:
    double medicin_price;
    Pharmicy() {
        medicin_name = " ";
        medicin_id = 0;
        medicin_price = 0;
        medicin_quantity = 0;
    }
    Pharmicy(string m_name, int m_id, int m_p, int m_q) {
        medicin_name = m_name;
        medicin_id = m_id;
        medicin_price = m_p;
        medicin_quantity = m_q;
    }
    void selles() {
        do
        {
            int x;
            cout << "                " << "                    ==\n";
            cout << "                " << "                   == ==\n";
            cout << "                " << "                 ==     ==\n";
            cout << "                " << "               ==          ==\n";
            cout << "                " << "             ==              ==\n";
            cout << "                " << "            ==                 ==\n";
            cout << "                " << "          ========================\n";
            cout << "                " << "        ==                        ==\n";
            cout << "                " << "       ==                          ==\n";
            cout << "                " << "      ==                            ==\n";
            cout << "                " << "     ==                               ==\n";
            cout << "                " << "   ==    What are you suffering from   ==\n";
            cout << "                " << "  ==                                     ==\n";
            cout << "                " << " ==                                       ==\n";
            cout << "                " << "==                                         ==\n";
            cout << "                " << "=============================================== " << endl;
            cout << "                " << "==     1-Department of dermatology           ==\n";
            cout << "                " << "==                                           ==\n";
            cout << "                " << "==     2-Obstetrics and gynecology specialty ==\n";
            cout << "                " << "==                                           ==\n";
            cout << "                " << "==     3-Urology                             ==\n";
            cout << "                " << "==                                           ==\n";
            cout << "                " << "==     4-Ear and nose medicine               ==\n";
            cout << "                " << "==                                           ==\n";
            cout << "                " << "==     5-ophthalmology                       ==\n";
            cout << "                " << "==                                           ==\n";
            cout << "                " << "================================================" << endl;
            cout << " ---> Please , Enter the number of your choice : ";
            cin >> x;
            system("cls");
            if (x == 1) {
                int w;

                cout << "============================================================= " << endl;
                cout << "== 1-name -> Hydroxyzine    | ID ->1235                    == " << endl;
                cout << "== 2-name -> Loratadine     | ID ->1236                    == " << endl;
                cout << "== 3-name -> Desloratadine  | ID ->1237                    == " << endl;
                cout << "== 4-name -> Cyproheptadine | ID ->1238                    == " << endl;
                cout << "==============================================================" << endl;
                cout << " ---> Please , Enter the number of your choice : ";
                cin >> w;
                cout << " ---> Please , Enter the medicine name  you are choice : ";
                cin >> medicin_name;
                cout << " ---> Please , Enter the medicine Id  you are choice : ";
                cin >> medicin_id;
                cout << " ---> Please , Enter Quantity : ";
                cin >> medicin_quantity;
                system("cls");
                if (w == 1) {
                    medicin_price = medicin_price + (medicin_quantity * 20);
                    cout << " ** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 20 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ******************************************** ";
                }
                else if (w == 2) {

                    medicin_price = medicin_price + (medicin_quantity * 30);
                    cout << " ** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 30 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " *********************************************** ";
                }
                else if (w == 3) {

                    medicin_price = medicin_price + (medicin_quantity * 40);
                    cout << " ** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 40 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ************************************************ ";
                }
                else {

                    medicin_price = medicin_price + (medicin_quantity * 50);
                    cout << " ** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 50 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " *********************************************** ";
                }
            }
            else if (x == 2) {
                int w;
                cout << "====================================================================== " << endl;
                cout << "== 1-name -> Danazol Cap             | ID ->1240                    == " << endl;
                cout << "== 2-name -> Primolut Nor tablet     | ID ->1241                    == " << endl;
                cout << "== 3-name -> Gestophil supp          | ID ->1242                    == " << endl;
                cout << "== 4-name -> Cyclogest Supp          | ID ->1243                    == " << endl;
                cout << "=======================================================================" << endl;

                cout << " ---> Please , Enter the number of your choice : ";
                cin >> w;
                cout << " ---> Please , Enter the medicine name  you ara choice : ";
                cin >> medicin_name;
                cout << " ---> Please , Enter the medicine Id  you ara choice : ";
                cin >> medicin_id;
                cout << " ---> Please , Enter Quantity : ";
                cin >> medicin_quantity;
                system("cls");
                if (w == 1) {
                    medicin_price = medicin_price + (medicin_quantity * 50);
                    cout << " ******************************************* " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 50 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ******************************************* ";
                }
                else if (w == 2) {

                    medicin_price = medicin_price + (medicin_quantity * 60);
                    cout << " ******************************************* " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 60 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ******************************************* ";
                }
                else if (w == 3) {

                    medicin_price = medicin_price + (medicin_quantity * 70);
                    cout << " ******************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 70 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ******************************************** ";
                }
                else {

                    medicin_price = medicin_price + (medicin_quantity * 80);
                    cout << " ********************************************* " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 80 << endl;
                    cout << "total            -> " << medicin_price << endl;
                    cout << " ********************************************* ";
                }
            }
            else if (x == 3) {
                int w;
                cout << "=========================================================== " << endl;
                cout << "== 1-name -> Catheter    | ID ->1246                    == " << endl;
                cout << "== 2-name -> Estrogen    | ID ->1247                    == " << endl;
                cout << "== 3-name -> Amenorrhea  | ID ->1248                    == " << endl;
                cout << "== 4-name -> Menopause   | ID ->1249                    == " << endl;
                cout << "================================================" << endl;
                cout << " ---> Please , Enter the number of your choice : ";
                cin >> w;
                cout << " ---> Please , Enter the medicine name  you are choice : ";
                cin >> medicin_name;
                cout << " ---> Please , Enter the medicine Id  you are choice : ";
                cin >> medicin_id;
                cout << " ---> Please , Enter Quantity : ";
                cin >> medicin_quantity;
                system("cls");
                if (w == 1) {
                    medicin_price = medicin_price + (medicin_quantity * 100);
                    cout << " ******************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 100 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ******************************************** ";
                }
                else if (w == 2) {

                    medicin_price = medicin_price + (medicin_quantity * 150);
                    cout << " ************************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 150 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " *************************************************** ";
                }
                else if (w == 3) {

                    medicin_price = medicin_price + (medicin_quantity * 200);
                    cout << " ********************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 200 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ********************************************** ";
                }
                else {

                    medicin_price = medicin_price + (medicin_quantity * 250);
                    cout << " ********************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 250 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " *********************************************** ";
                }
            }
            else if (x == 4) {
                int w;
                cout << "=========================================================== " << endl;
                cout << "== 1-name -> APL              | ID ->1250                    == " << endl;
                cout << "== 2-name -> EIPICO           | ID ->1251                    == " << endl;
                cout << "== 3-name -> SAUDI ARABIA     | ID ->1252                    == " << endl;
                cout << "== 4-name -> GLAXO            | ID ->1253                    == " << endl;
                cout << "================================================" << endl;
                cout << " ---> Please , Enter the number of your choice : ";
                cin >> w;
                cout << " ---> Please , Enter the medicine name  you are choice : ";
                cin >> medicin_name;
                cout << " ---> Please , Enter the medicine Id  you are choice : ";
                cin >> medicin_id;
                cout << " ---> Please , Enter Quantity : ";
                cin >> medicin_quantity;
                system("cls");
                if (w == 1) {
                    medicin_price = medicin_price + (medicin_quantity * 300);
                    cout << " ********************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 300 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ********************************************** ";
                }
                else if (w == 2) {

                    medicin_price = medicin_price + (medicin_quantity * 350);
                    cout << " *************************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 350 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " **************************************************** ";
                }
                else if (w == 3) {

                    medicin_price = medicin_price + (medicin_quantity * 400);
                    cout << " ************************************************ " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 400 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ************************************************ ";
                }
                else {

                    medicin_price = medicin_price + (medicin_quantity * 450);
                    cout << " *********************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 450 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ************************************************ ";
                }
            }
            else if (x==4) {
                int w;
                cout << "=========================================================== " << endl;
                cout << "== 1-name -> epinastine        | ID ->1255                    == " << endl;
                cout << "== 2-name -> Apraclonidine     | ID ->1256                    == " << endl;
                cout << "== 3-name -> Atropine          | ID ->1257                    == " << endl;
                cout << "== 4-name -> EIPICO            | ID ->1258                    == " << endl;
                cout << "================================================" << endl;
                cout << " ---> Please , Enter the number of your choice : ";
                cin >> w;
                cout << " ---> Please , Enter the medicine name  you are choice : ";
                cin >> medicin_name;
                cout << " ---> Please , Enter the medicine Id  you are choice : ";
                cin >> medicin_id;
                cout << " ---> Please , Enter Quantity : ";
                cin >> medicin_quantity;
                system("cls");
                if (w == 1) {
                    medicin_price = medicin_price + (medicin_quantity * 110);
                    cout << " ************************************************ " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 110 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ************************************************ ";
                }
                else if (w == 2) {

                    medicin_price = medicin_price + (medicin_quantity * 120);
                    cout << " ********************************************* " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 120 << endl;
                    cout << "total            -> " << medicin_price << endl;
                    cout << " ********************************************* ";
                }
                else if (w == 3) {

                    medicin_price = medicin_price + (medicin_quantity * 140);
                    cout << " ********************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 140 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ********************************************** ";
                }
                else if (w==4) {

                    medicin_price = medicin_price + (medicin_quantity * 117);
                    cout << " *********************************************** " << endl;
                    cout << "medicine name     -> " << medicin_name << endl;
                    cout << "medicine ID       -> " << medicin_id << endl;
                    cout << "medicine quantity -> " << medicin_quantity << endl;
                    cout << "medicine Price    -> " << 177 << endl;
                    cout << "total             -> " << medicin_price << endl;
                    cout << " ************************************************ ";
                }
            }
            char y;
            cout << "\n\n\n press m or M to go back to if you want to take new medicine\n press q to exit :-   ";
            cin >> y;
            if (y == 'm' || y == 'M')
            {
                system("cls");
                continue;
            }
            else if (y == 'q' || y == 'Q')
                cout << "Thank you for using our pharmacy " << endl ;
                break;
        } while (true);
    }
};

class Laboratory : public person{
	private:
		double bills;
		string analysisType;
		string takenMedicine,takenMedicine2,takenMedicine3,takenMedicine4;
	public:
	    double price;
	laboratory(){
			takenMedicine=" ";
			takenMedicine2=" ";
			takenMedicine3=" ";
			takenMedicine4=" ";
			analysisType=" ";
			bills=0;
			price=0;
		}
	laboratory(string med,string med2,string med3,string med4,string type,double b,double pr){
			takenMedicine=med;
			takenMedicine2=med2;
			takenMedicine3=med3;
			takenMedicine4=med4;
			analysisType=type;
			bills=b;
			price=pr;
		}
    void settakenMedicine (string med)
    {
         takenMedicine=med;
    }
    void settakenMedicine2 (string med2)
    {
         takenMedicine2=med2;
    }
    void settakenMedicine3 (string med3)
    {
         takenMedicine3=med3;
    }
    void settakenMedicine4 (string med4)
    {
         takenMedicine4=med4;
    }
    void setanalysisType (int type)
    {
        analysisType=type;
    }
    void setbills (double b)
    {
        bills = b ;
    }
    void setprice (double pr)
    {
        price = pr ;
    }
    string gettakenMedicine ()
    {
        return takenMedicine;
    }
    string gettakenMedicine2 ()
    {
        return takenMedicine2;
    }
    string gettakenMedicine3 ()
    {
        return takenMedicine3;
    }
    string gettakenMedicine4 ()
    {
        return takenMedicine4;
    }
    string getanalysisType ()
    {
       return analysisType;
    }
    double getbills ()
    {
        return bills ;
    }
     double getprice ()
    {
        return price ;
    }

    void information(string n , char g , long long id , long long pn , int a,string date ,string physician, string address){
    fstream Laboratory_data ;
    Laboratory_data.open("D:\\CS ACU\\Projects\\lab with hospital\\Laboratory file.txt" , ios::out | ios::in | ios::app) ;
    Laboratory_data << endl ;
    system("cls") ;
    Laboratory_data << "~          welcome to our Laboratory         ~" << endl;
    Sleep(1500) ;
    system("cls") ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    Laboratory_data<<"*Personal Data of patients :- " << endl ;
    cout << "Please,Enter your full name :-  " ;
    cin >> n ;
    Laboratory_data <<"name:- "<< n << endl ;
    cout << "Enter your Gender :-  " ;
    cin >> g ;
    Laboratory_data <<"Gendar:- "<< g << endl ;
    cout << "Enter your national ID (14 numbers) :-  " ;
    cin >> id ;
    while (count_numbers (id)>14 || count_numbers (id)<14)
    {
        cout << "the ID you entered is not valid , Please try again \n" ;
        cin >> id ;
    }
    Laboratory_data <<"id :- "<<id << endl ;
    cout << "Enter your phone number (11 numbers) :-  " ;
    cin >> pn ;
    while (count_numbers (pn)>11 || count_numbers (pn)<11)
    {
        cout << "the Phone number you entered is not valid , Please try again \n" ;
        cin >> pn ;
    }
    Laboratory_data <<"phonenumber:- "<< pn << endl ;
    cout << "Enter your age (in years) :-  " ;
    cin >> a ;
    Laboratory_data <<"age :-"<< a << endl ;
    cout << "Please , Enter your address :-  " ;
    cin >> address ;
    Laboratory_data <<"address :- "<<address << endl ;
    cout << "Please , Enter your name of physician :-  " ;
    cin >> physician ;
    Laboratory_data << "name of physician:- "<<physician << endl ;
    cout << "Please , Enter what is the date today :-  " ;
    cin >> date ;
    Laboratory_data <<"date:- "<< date << endl ;
}

	void  TakenMedicale()
    {
    int	startpoint;
    string notes;
    fstream Laboratory_medical ;
    Laboratory_medical.open("D:\\CS ACU\Projects\\lab with hospital\\Laboratory file.txt" , ios::out | ios::in | ios::app) ;
    system ("cls") ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~ Please,give us some medical information ~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~                                         ~" << endl ;
    cout << "~    Do you take treatment for diabetes?  ~" << endl ;
    cout << "~        1- Yes                           ~" << endl ;
    cout << "~        2- No                            ~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin >> startpoint ;
    if (startpoint==1)
    {
        cout << "What is the name treatment :-  " ;
        cin >> takenMedicine ;
        Laboratory_medical<<"treatment taken for suger is :- "<<takenMedicine<<endl;

    }
    if (startpoint==2)
    {
        cout << "###### very Good !!" << endl ;
        Sleep(1500) ;
        system ("cls") ;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~    Are you taking an antibiotic?        ~" << endl ;
    cout << "~        1- Yes                           ~" << endl ;
    cout << "~        2- No                            ~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin>>startpoint;
    if (startpoint==1)
    {
        cout << "What is the name it? :-  " ;
        cin >> takenMedicine3 ;
        Laboratory_medical<<"treatment taken for antibiotic is :- "<<takenMedicine3<<endl;
    }
    if (startpoint==2)
    {
        cout << "###### very Good !!" << endl ;
        Sleep(1500) ;
        system ("cls") ;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~    Do you take a treatment for the gland?     ~" << endl ;
    cout << "~        1- Yes                                 ~" << endl ;
    cout << "~        2- No                                  ~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin >> startpoint ;
    if (startpoint==1)
    {
        cout << "What is the name it? :-  " ;
        cin >> takenMedicine3 ;
        Laboratory_medical<<"treatment taken for antibiotic is :- "<<takenMedicine3<<endl;
        Sleep(1500) ;
        system ("cls") ;
    }
    if (startpoint==2)
    {
        cout << "###### very Good !!" << endl ;
        Sleep(1500) ;
        system ("cls") ;
    }
    system("cls") ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~    Is antiviral treatment taken?        ~" << endl ;
    cout << "~        1- Yes                           ~" << endl ;
    cout << "~        2- No                            ~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin >> startpoint ;
    if (startpoint==1)
    {
        cout << "What is the name it? :-  " ;
        cin >> takenMedicine3 ;
        Laboratory_medical<<"treatment taken for antibiotic is :- "<<takenMedicine3<<endl;
    }
    if (startpoint==2)
    {
        cout << "###### very Good !!" << endl ;
        Sleep(1500) ;
        system ("cls") ;
    }
        system ("cls") ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~    Would you like to add some notes?      ~" << endl ;
    cout << "~        1- Yes                             ~" << endl ;
    cout << "~        2- No                              ~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin >> startpoint ;
    if (startpoint==1)
    {
        cout << "What is the notes? :-  " ;
        cin >> notes;
        Laboratory_medical<<"Pationt notes"<<notes<<endl;
    }
    if (startpoint==2)
    {
        cout << "###### very Good !!" << endl ;
        Sleep(1500) ;
        system ("cls") ;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
   }
   double discount(double b){
    system("cls") ;
   	cout<<"please,Choose the discount rate?\n";
            	     	cout << "~        1- 5%       ~" << endl ;
                        cout << "~        2- 10%      ~" << endl ;
                        cout << "~        3- 15%      ~" << endl ;
                        cout << "~        4- 20%      ~" << endl ;
                        int rate;
						cin>>rate;
                        if(rate==1){
                        	bills= b -  b*5/100;
                        	return bills;
						}
						if(rate==2){
							bills= b -  b*10/100;
							return bills;
						}
						if(rate==3){
							bills= b -  b*15/100;
							return bills;
						}
						if(rate==4){
							bills= b -  b*20/100 ;
							return bills;
						}
						Sleep(1500) ;
   }
   void analayscost(){
   	int choice;
   	system("cls") ;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~     What type of analysis do you want to do          ~\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~     1-blood suger analysis                           ~\n";
        cout << "~     2-urine analysis                                 ~\n";
        cout << "~     3-stool analysis                                 ~\n";
        cout << "~     4-Anemia                                         ~\n";
        cout << "~     5-Virology                                       ~\n";
        cout << "~     6- Complete blood count                          ~\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " ---> Please , Enter the number of your choice : ";
        cin >> choice;
        if (choice == 1)
        {
        	int point;
        	string p;
        	system("cls") ;
            cout << "Do you want .............................\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~        1- fasting blood suger           ~" << endl ;
            cout << "~        2- random blood suger            ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >>point ;
            if (point == 1)
            {
            	string k;
                cout << "Are you fast from 8-12 hours? answer whith yes or no \n";
                cin>>k;
                if(k=="yes"){
            	     cout<<"you can do the analysis now"<<endl;
            	     cout<<"--------------------------------\n";
            	     cout<<"Do you want to do adiscount for patien? answer yes or no"<<endl;
            	     cin>>p;
            	      price=500;
            	     if(p=="yes"){
            	     	price=discount(price);
            	      cout<<"the bills = "<<price<<endl;
					 }
					if(p=="no"){
						cout<<"the bills = "<<price<<endl;
					}
					cout<<"the analysis will appear after 5 hours\n";
			    }
			    if(k=="no"){
			    	cout<<"--------------------------------\n";
			    	cout<<"sorry,you can not do the analysis"<<endl;
			    	 cout<<"you should be fasting"<<endl;
				}
            }
            if(point==2){
            	   cout<<"you can do it now\n";
            		cout<<"--------------------------------\n";
            	     cout<<"Do you want to do adiscount? answer yes or no"<<endl;
            	     cin>>p;
            	     price=400;
            	     if(p=="yes"){
            	     	price=discount(price);
            	     cout<<" the bills = "<<price<<endl;
			        }
					if(p=="no"){
						cout<<"the bills = "<<price<<endl;
					}
					cout << "~~~~~~~" << endl;
					cout<<"the analysis will appear after 5 hours\n";
				}
			}
        if(choice==2){
            system ("cls") ;
        	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        	cout << "Do you want to do a discount for patient? answer yes or no"<<endl;
            string p;
            cin>>p;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            	     price=300;
            	     if(p=="yes"){
            	      price=discount(price);
            	     cout<<"the bills = "<<price<<endl;
			        }
					if(p=="no"){
						cout<<"the bills = "<<price<<endl;
					}
			        cout<<"the analysis will appear after 2 hours\n";
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
		if(choice==3){
            system ("cls") ;
        	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        	cout<<"Do you want to do adiscount for patient? answer yes or no"<<endl;
            	     string p;
					 cin>>p;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            	     price=600;
            	     if(p=="yes"){
            	     	price=discount(price);
            	     cout<<"the bills= "<<price<<endl;
			        }
					if(p=="no"){
						cout<<"the bills = "<<price<<endl;
					}
			        cout<<"the analysis will appear after 3 hours\n";
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
		if(choice==4){
                      system ("cls") ;
        	          cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        	          cout<<"Do you want to do adiscount for patient? answer yes or no"<<endl;
            	      string p;
					  cin>>p;
            	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            	    double price=700;
            	     if(p=="yes"){
            	      price=discount(price);
            	     cout<<"the bills = "<<price<<endl;
			        }
					if(p=="no"){
						cout<<"the bills = "<<price<<endl;
					}
			        cout<<"the analysis will appear after 4 hours\n";
					cout << "~~~~~~~" << endl;
					cout << "~~~~~~~" << endl;
		}
		if(choice==5){
             system ("cls") ;
        	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        	cout<<"Do you want to do adiscount for patient? answer yes or no"<<endl;
            	    string p;
					cin>>p;
            	    cout << "~~~~~~~" << endl;
            	     price=800;
            	     if(p=="yes"){
            	       price=discount(price);
            	    cout<<"the bills = "<< price<<endl;
			        }
					if(p=="no"){
						cout<<"the bills = "<<price<<endl;
					}
			        cout<<"the analysis will appear after 24 hours\n";
					cout << "~~~~~~~" << endl;
					cout << "~~~~~~~" << endl;
		}
		 if(choice==6){
        	cout << "~~~~~~~" << endl;
        	cout<<"Do you want to do adiscount for patient? answer yes or no"<<endl;
            	     string p;
					 cin>>p;
            	    cout << "~~~~~~~" << endl;
            	     price=1000;
            	     if(p=="yes"){
            	    price=discount(price);
            	    cout<<"the bills = "<< price<<endl;
			        }
					if(p=="no"){
						cout<<"the bills = "<<price<<endl;
					}
			        cout<<"the analysis will appear after 2 days\n";
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	}
   void resultanalysis(){
   	string data;
   	int choice;
        system ("cls") ;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~     What type of analysis do you want to see the result of?         ~\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
        cout << "~                       1-blood suger analysis                        ~\n";
        cout << "~                       2-urine analysis                              ~\n";
        cout << "~                       3-stool analysis                              ~\n";
        cout << "~                       4-Anemia                                      ~\n";
        cout << "~                       5-Virology                                    ~\n";
        cout << "~                       6- Complete blood count                       ~\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " ---> Please , Enter the number of your choice : ";
        cin >> choice;
        if (choice==1){
           fstream resultSuger;
	       resultSuger.open("D:\\CS ACU\\Projects\\lab with hospital\\Result Suger.txt",ios::in) ;
	      while(! resultSuger.eof() ){
	      	getline(resultSuger,data);
		    cout<<data<<endl;
	       }
		}
		if(choice==4){
			fstream resultAnemia;
	       resultAnemia.open("D:\\CS ACU\\Projects\\lab with hospital\\Result Anemia.txt",ios::in) ;
	      while(! resultAnemia.eof() ){
	      	getline(resultAnemia,data);
		    cout<<data<<endl;
	       }
		}
		if(choice==2){
		   fstream resultUrine;
	       resultUrine.open("D:\\CS ACU\\Projects\\lab with hospital\\Result Urine.txt",ios::in) ;
	      while(! resultUrine.eof() ){
	      	getline(resultUrine,data);
		    cout<<data<<endl;
	       }
		}
		if(choice==3){
		   fstream resultStool;
	       resultStool.open("D:\\CS ACU\\Projects\\lab with hospital\\Result Stool.txt",ios::in) ;
	      while(! resultStool.eof() ){
	      	getline(resultStool,data);
		    cout<<data<<endl;
	       }
		}
		if(choice==5){
		   fstream resultVirology;
	       resultVirology.open("D:\\CS ACU\\Projects\\lab with hospital\\Result Virology.txt",ios::in) ;
	      while(! resultVirology.eof() ){
	      	getline(resultVirology,data);
		    cout<<data<<endl;
	       }
		}
		if(choice==6){
		   fstream resultCompletebloodcount;
	       resultCompletebloodcount.open("D:\\CS ACU\\Projects\\lab with hospital\\Result Complete blood count.txt",ios::in) ;
	      while(! resultCompletebloodcount.eof() ){
	      	getline(resultCompletebloodcount,data);
		    cout<<data<<endl;
	       }
		}

   }
 void Data(){
    	int response;
       cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
       cout<<"~       what do you want to do                  ~ " <<endl;
       cout << "~        1- view result                        ~" << endl ;
       cout << "~        2- enter patient data                 ~" << endl ;
       cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
       cout << " ---> Please , Enter the number of your choice : " ;
       cin >> response ;
  if(response==1){
  	resultanalysis();
  }
  if(response==2){
  	string n,date,physician, address;
	char g ;
    double id , pn;
	 int a ;
     information( n , g , id , pn , a, date , physician, address);
     TakenMedicale();
  	 analayscost();
  }
}

};

class pharmasist :person
{
    protected:
    int id_pharmicst;
public:
    double ssalary ;
    Pharmicst(string n,char g, int id, int pn, int a , int ph_id)
    {
        id_pharmicst = ph_id;
    }
    int set_id_pharmicst(int ph_id) {
        id_pharmicst = ph_id;
    }
    int get_id_pharmicst() {
        return id_pharmicst;
    }
    int salary(int num_days) {
        int x ;
        int w ;
        int s ;
        cout << "Enter The number of days you are working for :-  " << endl ;
        cin >> num_days ;
        if (num_days<8){
                cout << "Please , Enter the number of days you didnot attend all time " << endl ;
                cin >> w ;
                cout << "Please , Enter the hour you didnot work for" << endl ;
                cin >> x ;
                 s = (num_days-w) * (8) * 15 ;
                 ssalary = s+(w * (8-x) * 15) ;
                 cout << ssalary << endl ;
        }
        else {
        ssalary = num_days * 8 * 15 ;
        cout << "The salary of the pharmasist :- " << ssalary << endl ;
        }
    }
    void Pharmicst_Data(string n, char g, long long id, long long pn, int a, int ph_id)
    {
        fstream pharmicst_data;
        pharmicst_data.open("D:\\CS ACU\\Projects\\lab with hospital\\pharma.txt", ios::out | ios::in | ios::app);
        pharmicst_data << "Personal Data of pharmicst ------->> " << endl;
        Sleep(1000);
        system("cls");
        cout << "Enter your full name :-  ";
        cin >> n;
        pharmicst_data << "The name of the pharmicst is :- " << n << endl;
        cout << "Enter your Gender :-  ";
        cin >> g;
        pharmicst_data << "The gender of the pharmicst :- " << g << endl;
        cout << "Enter your national ID (14 numbers) :-  ";
        cin >> id;
        pharmicst_data << "The national id of the pharmicst :- " << id << endl;
        cout << "Enter your phone number (11 numbers) :-  ";
        cin >> pn;
        pharmicst_data << "The phone number of the pharmicst :- " << pn << endl;
        cout << "Enter your age (in years) :-  ";
        cin >> a;
        pharmicst_data << "The Age of the pharmicst :- " << a << endl;
        pharmicst_data << "The id of the pharmicst :- " << endl;
        cout << "Enter the pharmasist id :- " << endl ;
        cin >> ph_id;
        pharmicst_data << "The id of the pharmicst :- " << ph_id << endl;
        system("cls");
    }
};

class Nurse :public pharmasist {
private:
    string department;
    int nurse_id;
public:
    double salaryy ;
    Nurse()
    {
        department=" " ;
        nurse_id=0;
    }
    Nurse(string n, char g, int id, int pn, int a,string dep , int n_id){
        department = dep ;
        nurse_id=n_id;
    }
    void set_NurseID(int n_id)
    {
        nurse_id=n_id;
    }
    int get_NurseID() {
        return nurse_id;
    }
    void setsalaryy (double t)
    {
        salaryy = t ;
    }
    double getsalary ()
    {
        return salaryy ;
    }
    void Data_nurse()
    {
        system("cls") ;
        fstream nurse_data;
        nurse_data.open("D:\\CS ACU\\Projects\\\lab with hospital\\nurse.txt",ios::out|ios::in|ios::app);
        nurse_data<<"personal Data of nurses------------->>"<<endl;
        string first,last,name;
        cout<<"Enter your full name:- "<<endl;
        cin>>first>>last;
        name=first+last;
        nurse_data<<"the name of nurse is:-"<<name<<endl;
        char g;
        cout<<"Enter your gender:- ~~~~~'f'   ||    'M' "<<endl;
        cin>>g;
        nurse_data<<"the gender of nurse is:-"<<g<<endl;
        long long id;
        cout << "Enter your national ID (14 numbers) :-  " ;
        cin >> id ;
        while( count_numbers(id)>14 ||  count_numbers(id)<14)
        {
            cout << "the ID you entered is not valid , Please try again \n" ;
            cin>>id;
        }
        nurse_data << "The national id of the nurse :- " << id << endl ;
        long long pn;
        cout << "Enter your phone number (11 numbers) :-  " ;
        cin >> pn ;
        while ( count_numbers(pn)>11 || count_numbers(pn)<11)
        {
            cout << "the Phone number you entered is not valid , Please try again \n" ;
            cin>>pn;
        }
        nurse_data << "The phone number of the nurse :- " << pn << endl ;
        int age;
        cout << "Enter your age (in years) :-  " ;
        cin >> age ;
        nurse_data << "The age of the nurse :- " << age << endl ;


    }

    double salary(int num_days , int time) {
        string shift ;
        cout << "Enter the shift you are working in " << endl ;
        cin >> shift ;
        cout << "Enter the number of days you are working in :- " << endl ;
        cin >> num_days ;
        cout << "Enter the time you are working for :- " << endl ;
        cin >> time ;
        if (shift == "night")
        {
            salaryy = num_days*( time * 70) ;
            cout<< "The nurse salary :- " << salaryy << endl ;
            Sleep(2000) ;
             system("cls") ;
        }
        else if (shift== "morning"){
            salaryy = num_days * (time * 50) ;
            cout << "The nurse salary :- " << salaryy << endl ;
            Sleep(2000) ;
             system("cls") ;
        }
        else
             exit(0) ;
        }

    void nurse_department() {
        fstream nurse_data;
        nurse_data.open("D:\\CS ACU\\Projects\\lab with hospital\\nurse.txt",ios::out|ios::in|ios::app);
        int choice;
        system("cls") ;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "~     which department you work it          ~\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "~     1-Department of dermatology           ~\n";
        cout << "~     2-Obstetrics and gynecology specialty ~\n";
        cout << "~     3-Urology                             ~\n";
        cout << "~     4-Ear and nose medicine               ~\n";
        cout << "~     5-ophthalmology                       ~\n";
        cout << "~     6-Pediatrics                          ~\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " ---> Please , Enter the number of your choice : ";
        cin >> choice;
        if (choice == 1) {
            system("cls") ;
            cout << "The nurse you chose is working  In the fifth floor in room 1299" << endl;
            nurse_data << "The nurse you chose is working  In the fifth floor in room 1299" << endl;
            cout << endl;
        }
        if (choice == 2) {
            system("cls") ;
            cout << "The nurse you chose is working  In the fifth floor room 1295 " << endl;
            nurse_data<< "The nurse you chose is working  In the fifth floor room 1295 " << endl ;

        } else if (choice == 2) {
            system("cls") ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "~   The available nurses in Obstetrics department    ~" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "~        1-  the first nurse                         ~" << endl;
            cout << "~        2-   the second nurse                       ~" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << " ---> Please , Enter the number of your choice : ";
            cin >> choice;
            if (choice == 1) {
                system("cls") ;
                cout << "The nurse you chose is working In the second floor room 1287" << endl;
                nurse_data << "The nurse you chose is working In the second floor room 1287" << endl;
            }
            if (choice == 2) {
                system("cls") ;
                cout << "The nurse you chose is working In the second floor room 1282 " << endl;
                nurse_data << "The nurse you chose is working In the second floor room 1282 " << endl ;
            }
        }
        else if (choice == 3)
        {
            system("cls") ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~   The available nurses in Urology department       ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~        1- the first nurse                          ~" << endl ;
            cout << "~        2-  the second nurse                        ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice ;
            if (choice==1)
            {
                system("cls") ;
                nurse_data << "The nurse you chose is working  In the first floor room 1234 " << endl ;
                nurse_data << "The nurse you chose is working  In the first floor room 1234 " << endl ;
            }
            if (choice==2)
            {
                system("cls") ;
                cout<< "The nurse you chose is working from 1 am to 4 am , In the first floor room 1238 " << endl ;
                nurse_data<< "The nurse you chose is working from 1 am to 4 am , In the first floor room 1238 " << endl ;
            }
        }
        else if (choice == 4)
        {
            system("cls") ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~   The available nurses in Ear and nose department  ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~        1-  the first nurse                         ~" << endl ;
            cout << "~        2-  the second nurse                        ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >>choice;
            if (choice==1)
            {
                system("cls") ;
                cout << "The nurse you chose is working  In the third floor room 1246 " << endl ;
                nurse_data<< "The nurse you chose is working  In the third floor room 1246 " << endl ;
            }
            if (choice==2)
            {
                system("cls") ;
                cout << "The nurse you chose is working In the third floor room 1245 " << endl ;
                nurse_data<< "The nurse you chose is working In the third floor room 1245 " << endl ;
                Sleep(2000) ;
            }
        }
        else if (choice == 5)
        {
            system("cls") ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~   The available nurses in ophthalmology department ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~        1- the first nurse                          ~" << endl ;
            cout << "~        2-  the second nurse                        ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice;
            if (choice==1) {
                    system("cls") ;
                cout << "The nurse you chose is working In the forth floor room 1261 " << endl;
                nurse_data << "The nurse you chose is working In the forth floor room 1261 " << endl;
                Sleep(2000) ;
            }
            if (choice==2)
            {
                system("cls") ;
                cout << "The nurse you chose is working In the fourth floor room 1269 " << endl ;
                nurse_data << "The nurse you chose is working In the fourth floor room 1269 " << endl ;
                Sleep(2000) ;
            }
        }
        else if (choice == 6)
        {
            system("cls") ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~   The available nurses in Pediatrics department   ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << "~        1- the first nurse                         ~" << endl ;
            cout << "~        2-  the second nurse                       ~" << endl ;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
            cout << " ---> Please , Enter the number of your choice : " ;
            cin >> choice ;
            if (choice==1)
            {
                system("cls") ;
                cout << "The nurse you chose is working  In the sixth floor room 1312 " << endl ;
                nurse_data << "The nurse you chose is working  In the sixth floor room 1312 " << endl ;
                Sleep(2000) ;

            }
            if (choice==2)
            {
                system("cls") ;
                cout << "The nurse you chose is working  In the sixth floor room 1320 " << endl ;
                nurse_data << "The nurse you chose is working  In the sixth floor room 1320 " << endl ;
                Sleep(2000) ;

            }
            else
            {
                system("cls") ;
                cout << " Please Enter a Valid Number \n";
                Sleep(2000) ;
            }

    }
    }

};

class view_data
{
public:
    int ch ;
    void begining()
    {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~                                   ~~~" << endl ;
    cout << "~~~        1- patient data            ~~~" << endl ;
    cout << "~~~        2- Doctor data             ~~~" << endl ;
    cout << "~~~        3- Nurses data             ~~~" << endl ;
    cout << "~~~        4- pharmacy data           ~~~" << endl ;
    cout << "~~~        5- pharmacist data         ~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    cout << "~~~                                   ~~~" << endl ;
    cout << " ---> Please , Enter the number of your choice : " ;
    cin >> ch ;
    }
    void patient_data(string data)
    {
    if (ch==1)
    {
        fstream view_data ;
       view_data.open("D:\\CS ACU\\Projects\\lab with hospital\\Pateint data file.txt" , ios::out | ios::in | ios::app) ;
       while (getline(view_data , data))
       {
         cout << data << " " << endl ;
       }
    }
    }

    void Doctor_data (string data)
    {
        if (ch==2)
        {
           fstream myFile;
	       myFile.open("D:\\CS ACU\\Projects\\lab with hospital\\Data.txt",ios::in) ;
	       while(! myFile.eof() ){
		   getline(myFile,data);
		   cout<<data<<endl;
        }
    }
    }
    void nurse_data (string data)
    {
        if (ch==3)
        {
            fstream view_data;
            view_data.open("D:\\CS ACU\\Projects\\lab with hospital\\nurse.txt", ios::out | ios::in | ios::app);
            while (!view_data.fail()) {
                while(! view_data.eof() ){
		        getline(view_data,data);
                cout << data << endl ;
                }
        }
        }
    }
    void pharmacy_data(string data)
    {
        if (ch==4){
            fstream view_data;
            view_data.open("D:\\CS ACU\\Projects\\lab with hospital\\medicin.txt", ios::out | ios::in | ios::app);
            while (!view_data.fail())
            {
                while(! view_data.eof() ){
		        getline(view_data,data);
		        cout<<data<<endl;
            }
            system("pause");
            system("cls");
        }
      }
    }
};
class net_profit
{
public:
double c1 = 0 ;
double e = 0  ;
double h = 0 ;
double sum1 , sum2 ;
void out ()
{
   Doctor d;
   pharmasist pp ;
   string n1,n2,n3,n4;
   char c;
   cout << c1 << endl ;
   int s1,s2,s3,s4;
   long long x,y;
  for (int i=0 ; i<1 ; i++)
  {
        d.specialty() ;
        d.attendTime();
        d.Salary() ;
        c1 += d.totalSalary ;
  }
    int num_days , ttime ;
    Nurse nur;
    nur.salary(num_days , ttime);
    e += nur.salaryy ;
    pp.salary(num_days) ;
    int k = pp.ssalary ;
    sum1 = c1 + e + k ;
    cout << "The total salaries :- " << sum1  << endl ;
}
void in ()
{
    patient p ;
    Pharmicy w ;
    Laboratory l ;
    p.patient_illness () ;
    c1 += p.total ;
    w.selles () ;
    e += w.medicin_price ;
    l.Data() ;
    h += l.price ;
    sum2 = c1 + e + h ;
    cout << "The total income :-  " << sum2 << endl ;
}
void sub ()
{
    if (sum2<sum1)
    cout << "The Net Profit is:- " << sum2 - sum1 << endl ;
    else if (sum2>sum1)
    {
        cout << "The Hospital lost from its balance about :-  " << abs(sum2 - sum1) << endl ;
    }
}
};

void return_to_menu ()
    {
        patient pp ;
        Doctor dd ;
        int programchoice ;
        string n , job , socialState , aa , n2 ;
        char g ;
        int a , startchoice ;
        long long id , pn  ;
        char main_menu ;
        cout << "                       ---------->>>>>> If you want to return to the main menu press c and press o to quit \n" ;
        cin >> main_menu ;
        while(main_menu=='c' || main_menu=='C')
        {
            program_strat() ;
            cin >> programchoice ;
            if (programchoice==1){
            pp.firstChoice(n , g , id , pn , a , job , socialState) ;
            pp.report_interface(startchoice) ;
            pp.patient_illness() ;
            }
            if (programchoice==2){
                dd.specialty() ;
                dd.dataD(n , n2 , g , id , pn , aa) ;
                dd.attendTime();
                dd.Salary() ;
                dd.checkAge() ;
            }
            if (programchoice==3)
            {
                Nurse nur ;
                int num_d , tt ;
                  nur.Data_nurse();
                  nur.nurse_department();
                  nur.salary(num_d , tt);
            }
            if (programchoice==4)
            {
                pharmasist p ;
                int n_id ;
                int num_of_days ;
                    p.Pharmicst_Data(n , g , id , pn , a , n_id) ;
                    p.salary(num_of_days) ;
            }
            if (programchoice==5)
            {
                system("cls") ;
                Pharmicy c;
                c.selles();
            }
            if (programchoice==6)
            {
               system("cls") ;
                Laboratory d;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
                cout << "~~~~~~~~~~~~~~~~  Welcome to the laboratory  ~~~~~~~~~~~~~~" << endl ;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
    	        d.Data() ;
            }
            if (programchoice==7)
            {
                string d ;
                view_data vd ;
                system("cls") ;
                vd.begining() ;
                system("cls") ;
                vd.patient_data(d) ;
                vd.Doctor_data(d) ;
                vd.pharmacy_data(d) ;
                vd.nurse_data(d) ;
            }
            if  (programchoice==8)
            {
                net_profit nt ;
                nt.in() ;
                nt.out () ;
                nt.sub() ;
            }
            if (main_menu=='o' || main_menu=='O')
            {
               continue ;
            }
        }
    }

int main()
{
    surface () ;
    program_strat () ;
    int start_choice ;
    string n , j , ss , data ;
    char g ;
    long long id , pn , a ;
    static double e  =0 , c1=0 ;
    patient p1[4] ;
    cin >> start_choice ;
    if (start_choice == 1){
            for (int i=0 ; i<1 ; i++)
            {
                Sleep(1000) ;
                system("cls") ;
                cout << "Patient number :-  " << i+1 << endl ;
                p1[i].firstChoice (n , g , id , pn , a , j , ss) ;
                p1[i].report_interface (start_choice) ;
                p1[i].patient_illness () ;
            }
            return_to_menu() ;
    }
            if (start_choice==2)
            {
                system("cls") ;
                Doctor d[12];
                string n1,n2,n3,n4;
	            char c;
	            int s1,s2,s3,s4;
	            long long x,y;
                for(int i=0;i<12;i++){
                     d[i].specialty() ;
    	             d[i].dataD(n1,n2,c,x,s1,n3) ;
    	             d[i].attendTime();
                     d[i].Salary() ;
    	             d[i].checkAge() ;
    	             c1 += d[i].gettotalsalary() ;
            }
            Sleep(2000) ;
            system("cls") ;
             return_to_menu() ;
            }
            if (start_choice==3)
            {
                int num_d , tt ;
                Nurse nur[1000];
                int num;
                cout << "please,Enter the number of Nurse:\n";
                cin >> num;
                for (int i = 0; i < num; i++)
               {
                  nur[i].Data_nurse();
                  nur[i].nurse_department();
                  nur[i].salary(num_d , tt);
                  e += nur[i].getsalary() ;
               }
               Sleep(4000) ;
                system("cls") ;
               return_to_menu() ;
            }
            if (start_choice==4)
            {
                string n ;
                int age ;
                long long id , ph ;
                char gender ;
                int n_id ;
                int num_of_days ;
                pharmasist p[3] ;
                for (int i=0 ; i<3 ; i++)
                {
                    p[i].Pharmicst_Data(n , g , id , pn , age , n_id) ;
                    p[i].salary(num_of_days) ;
                }
                Sleep(4000) ;
                system("cls") ;
                return_to_menu() ;
            }
            if (start_choice==5)
            {
                system("cls") ;
                Pharmicy c;
                c.selles();
                Sleep(4000) ;
                system("cls") ;
                return_to_menu() ;
            }
            if (start_choice==6)
            {
                system("cls") ;
                Laboratory d[4];
                cout << "   ~~~~~~~~" << endl ;
                cout << "~  Welcome to the laboratory  ~" << endl ;
                cout << "  ~~~~~~~~        " << endl ;
                for(int i=0;i<4;i++){
    	        d[i].Data() ;
    	        Sleep(1500);
                system("cls");
                }
                return_to_menu() ;
            }
            if (start_choice==7)
            {
                string d ;
                view_data vd ;
                system("cls") ;
                vd.begining() ;
                system("cls") ;
                vd.patient_data(d) ;
                vd.Doctor_data(d) ;
                vd.pharmacy_data(d) ;
                vd.nurse_data(d) ;
                Sleep(4000) ;
                system("cls") ;
                return_to_menu() ;
            }
            if (start_choice==8)
            {
                net_profit nt ;
                nt.in() ;
                nt.out () ;
                nt.sub() ;
                Sleep(2000) ;
                system("cls") ;
                return_to_menu() ;
            }
            if (start_choice==9)
            {
                exit(0) ;
            }

    return 0;
}
