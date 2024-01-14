#include <iostream>
#include <conio.h>
using namespace std;
string p_name,problem, date;
int age;
class hospital
{
string p_name,problem, date;
int age;
long long int number;
public:
void patient_appoint();
void doctor_list();
void payment();
void hospital_details();
};
class doctor : public hospital
{
public:
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
};
// member functions calling
//nesting of member function
void doctor::one()
{
patient_appoint();
cout<<endl;
}
void doctor::two()
{
patient_appoint();
cout<<endl;
}
void doctor::three()
{
patient_appoint();
cout<<endl;

}
void doctor::four()
{
patient_appoint();
cout<<endl;
}
void doctor::five()
{
patient_appoint();
cout<<endl;
}
void doctor::six()
{
patient_appoint();
cout<<endl;
}
void doctor::seven()
{
patient_appoint();
cout<<endl;
}
void doctor::eight()
{
patient_appoint();
cout<<endl;
}

void hospital :: patient_appoint()
{
cout<<"\t\t\t\t\t\tPatient Name: ";
cin>> p_name;
cout<<"\t\t\t\t\t\tPatient Age: ";
cin>>age;
cout<<"\t\t\t\t\t\tPatient Problem: ";
cin>> problem;
cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
cin>>number;
cout<<"\t\t\t\t\t\tAppoint Date: ";
cin>> date;
cout<<"\n\t\t\t\t\t\tPatient's Appoint Successfully Booked!"<<endl<<endl;
cout<<"\t\t\t Okay, Thank You. We calling you for confirmed Appoint after
sometimes!"<<endl;

cout<<"-----------------------------------------------------------------------------------------------------------------------
"<<endl;
}
void hospital::doctor_list()
{
cout<<"\t\t\t\t\t1. Dr. Bidhan Chandra Roy\t*Eye Specialist"<<endl<<endl;
cout<<"\t\t\t\t\t2. Dr. Devi Shetty\t\t*Heart Specialist"<<endl<<endl;
cout<<"\t\t\t\t\t3. Dr. Naresh Trehan\t\t*Diabetic Specialist"<<endl<<endl;
cout<<"\t\t\t\t\t4. Dr. Manju Shah\t\t*Heart Surgent"<<endl<<endl;
cout<<"\t\t\t\t\t5. Dr. Rakesh Sharma\t\t*Eye Specialist"<<endl<<endl;
cout<<"\t\t\t\t\t6. Dr. Indira Hinduja\t\t*Diabetic Specialist"<<endl<<endl;
cout<<"\t\t\t\t\t7. Dr. Mohamed Rela\t\t*Medicine Specialist"<<endl<<endl;
cout<<"\t\t\t\t\t8. Dr. Ashok Rajgopal\t\t*Brain Specialist"<<endl<<endl;
}
void hospital::payment()
{
int amount;
long long int number;
cout<<"\t\t\t\t\t\tPatient Name: ";
cin>>p_name;
cout<<"\t\t\t\t\t\tPatient Problem: ";
cin>>problem;
cout<<"\t\t\t\t\t\tEnter Amount of treatment: ";
cin>>amount;
cout<<endl;
cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
cin>>number;
cout<<"\n\t\t\t\t\t\tPayment Successful, Thank You!"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t "<<p_name<<endl;
cout<<"\t\t\t\t\t\t------------------------------------"<<endl;
cout<<"\t\t\t\t\t\t Patient Name: "<<p_name<<endl;
cout<<"\t\t\t\t\t\t Patient Problem: "<<problem<<endl;
cout<<"\t\t\t\t\t\t Payment Amount: "<<amount<<endl;
cout<<"\t\t\t\t\t\t Mobile: "<<number<<endl;
cout<<"\t\t\t\t\t\t------------------------------------"<<endl;
cout<<"\n\t\t\t\t\t\t\tThank You!"<<endl;
cout<<"-----------------------------------------------------------------------------------------------------------------------
"<<endl;
}
void hospital::hospital_details()

{
cout<<"\t\t\tHorizon Hospital In Thane , Mumbai."<<endl;
cout<<"\t\t\t3.9 Ratings(200)"<<endl;
cout<<"\t\t\tPrivate Hospital In Thane , Mumbai \n\t\t\tTelephone no.:- 022 6124
2424"<<endl;
cout<<"\t\t\tOpen 24 * 7"<<endl;
cout<<"\t\t\tServices:-*Eye Specialist\t*Heart Specialist"<<endl;
cout<<"\t\t\t\t*Diabetic Specialist\t*Heart Surgent"<<endl;
cout<<"\t\t\t\t*Medicine Specialist\t*Diabetic Specialist"<<endl;
cout<<"\t\t\t\t*Brain Specialist"<<endl;
cout<<"\t\t\tADDRESS"<<endl;
cout<<"\t\t\tMalti Mohon Bunglow,Opp."<<endl;
cout<<"\t\t\tNaupada Telephone Exchange,"<<endl;
cout<<"\t\t\tMahatama Gandhi Rd,Thane west,"<<endl;
cout<<"\t\t\tMumbai, Maharashtra 400602"<<endl;
cout<<"\n\t\t\t\t\t\t\tThank you! \n";
cout<<"-----------------------------------------------------------------------------------------------------------------------
"<<endl;}
int main()
{
int answer, doc;
hospital obj;
doctor pat;
while(1){
cout<<"\nGROUP NO.11 CO3I-B MICRO-PROJECT"<<endl;
cout<<"\n\t\t\t\t\t\t Horizon Hospital"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
cout<<"\t\t\t\t\t\t1. Emergency Seat Booking"<<endl<<endl;
cout<<"\t\t\t\t\t\t2. Treatment Payment"<<endl<<endl;
cout<<"\t\t\t\t\t\t3. Doctor List & Appoint"<<endl<<endl;
cout<<"\t\t\t\t\t\t4. Hospital Details"<<endl<<endl;
cout<<"\t\t\t\t\t\t5. Exit"<<endl<<endl;
cout<<"\t\t\t\t\t\t----------------------------"<<endl;
cout<<"\n\t\t\t\t\t\tENTER YOUR CHOICE: ";
cin>>answer;
switch(answer)
{
case 1: cout<<"\n\t\t\t\t\t\t1. Patient Appoint"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
obj.patient_appoint();
break;
case 2: cout<<"\n\t\t\t\t\t\t2. Treatment Payment"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
obj.payment();
break;
case 3: cout<<"\n\t\t\t\t\t\t3. Doctor List"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
obj.doctor_list();
cout<<"\n\t\t\t\t\t\tSelect A Doctor For Appoint: ";

cin>>doc;
switch(doc)
{
case 1: cout<<"\n\t\t\t\t\t\t1. Dr. Bidhan Chandra Roy"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
pat.one();
break;
case 2: cout<<"\n\t\t\t\t\t\t2. Dr. Devi Shetty"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
pat.two();
break;
case 3: cout<<"\n\t\t\t\t\t\t3. Dr. Manju Shah"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
pat.three();
break;
case 4: cout<<"\n\t\t\t\t\t\t4. Dr. Naresh Trehan"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
pat.four();
break;
case 5: cout<<"\n\t\t\t\t\t\t5. Dr. Rakesh Sharma"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
pat.five();
break;
case 6: cout<<"\n\t\t\t\t\t\t6. Dr. Indira Hinduja"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
pat.six();
break;
case 7: cout<<"\n\t\t\t\t\t\t7. Dr. Mohamed Rela"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
pat.seven();
break;
case 8: cout<<"\n\t\t\t\t\t\t8. Dr. Ashok Rajgopal"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
pat.eight();
break;
default:
cout<<"INVALID CHOICE."<<endl<<endl;
}
break;
case 4: cout<<"\n\t\t\t\t\t\t4. Hospital Details"<<endl;
cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
obj.hospital_details();

break;
case 5:
if(answer == 5)
{
cout<<"\n\t\t\t\t\t\t\tThank you! \n";
exit(0);
}
default:
cout<<"\t\t\t\t\t\tThis is not exit. Try Again!"<<endl<<endl;
}
}
getch();
}