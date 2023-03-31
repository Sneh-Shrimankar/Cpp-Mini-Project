//Program...
#include<iostream>
using namespace std;

class Student
{
    private: char name[59],fname[59],mname[59];
             char address[60];
             int percent;
             int tmarks;
             double adno;
             char gender[60];
             char caste[60];
             char religion[60];
             char nationality[60];
             char district[60];
             char moto[60];
             double dob;
             char quota[60];
             int age;
             char email[60];

    public: void setdata();
            void getdata();
};

void Student::setdata()
{   int a;
    cout<<"*****WELCOME TO ADMISSION PROCESS OF SHRI BHAGUBHAI MAFATLAL POLYTECHNIC*****"<<endl;
    cout<<"Select the branch in which you want the admission:"<<endl;
    cout<<"1.INFORMATION TECHNOLOGY"<<endl;
    cout<<"2.COMPUTER SCIENCE ENGINEERING"<<endl;
    cout<<"3.MECHANICAL ENGINEERING"<<endl;
    cout<<"4.ELECTRICAL ENGINEERING"<<endl;
    cout<<"5.CIVIL ENGINEERING"<<endl;
    cout<<"ENTER YOUR CHOICE="<<endl;
    cin>>a;

    switch(a)

    {
        case 1:{cout<<"This course is of 3-years full-time ,Un-aided,Non-sandwich semester pattern having multipoint entry & credit system"<<endl;
                cout<<"FEES : 1,31,432/-"<<endl;
                cout<<"Enter student's name="<<endl;
                cin>>name;
                cout<<"Enter father's name="<<endl;
                cin>>fname;
                cout<<"Enter mother's name="<<endl;
                cin>>mname;
                cout<<"Enter student's address="<<endl;
                cin>>address;
                cout<<"Enter student's adhaar number="<<endl;
                cin>>adno;
                cout<<"Enter student's gender="<<endl;
                cin>>gender;
                cout<<"Enter your caste="<<endl;
                cin>>caste;
                cout<<"Enter student's Religion="<<endl;
                cin>>religion;
                cout<<"Enter students nationality, district and mother tongue="<<endl;
                cin>>nationality>>district>>moto;
                cout<<"Enter student's year of birth"<<endl;
                cin>>dob;
                cout<<"Enter the quota through which you want the admission="<<endl;
                cin>>quota;
                cout<<"Enter student's SSC percentage="<<endl;
                cin>>percent;
                cout<<"Enter the total marks of maths and science(MATHS+SCIENCE=total marks)"<<endl;
                cin>>tmarks;
                cout<<"Enter the age of student"<<endl;
                cin>>age;
                cout<<"Enter the email"<<endl;
                cin>>email;
                break;
        }
        case 2:{cout<<"This course is of 3-years full-time ,Un-aided,Non-sandwich semester pattern having multipoint entry & credit system"<<endl;
                cout<<"FEES : 98,534/-"<<endl;
                cout<<"Enter student's name="<<endl;
                cin>>name;
                cout<<"Enter father's name="<<endl;
                cin>>fname;
                cout<<"Enter mother's name="<<endl;
                cin>>mname;
                cout<<"Enter student's address="<<endl;
                cin>>address;
                cout<<"Enter student's adhaar number="<<endl;
                cin>>adno;
                cout<<"Enter student's gender & caste="<<"%"<<endl;
                cin>>gender>>caste;
                cout<<"Enter student's Religion="<<endl;
                cin>>religion;
                cout<<"Enter students nationality, district and mother tongue="<<endl;
                cin>>nationality>>district>>moto;
                cout<<"Enter student's date of birth(DOB)"<<endl;
                cin>>dob;
                cout<<"Enter the quota through which you want the admission="<<endl;
                cin>>quota;
                cout<<"Enter student's SSC percentage="<<endl;
                cin>>percent;
                cout<<"Enter the total marks of maths and science(MATHS+SCIENCE=total marks)"<<endl;
                cin>>tmarks;
                cout<<"Enter the email"<<endl;
                cin>>email;
                break;
        }

        case 3:{cout<<"This course is of 3-years full-time ,Un-aided,Non-sandwich semester pattern having multipoint entry & credit system"<<endl;
                cout<<"FEES : 80,354"<<endl;
                cout<<"Enter student's name="<<endl;
                cin>>name;
                cout<<"Enter father's name="<<endl;
                cin>>fname;
                cout<<"Enter mother's name="<<endl;
                cin>>mname;
                cout<<"Enter student's address="<<endl;
                cin>>address;
                cout<<"Enter student's adhaar number="<<endl;
                cin>>adno;
                cout<<"Enter student's gender & caste="<<"%"<<endl;
                cin>>gender>>caste;
                cout<<"Enter student's Religion="<<endl;
                cin>>religion;
                cout<<"Enter students nationality, district and mother tongue="<<endl;
                cin>>nationality>>district>>moto;
                cout<<"Enter student's date of birth(DOB)"<<endl;
                cin>>dob;
                cout<<"Enter the quota through which you want the admission="<<endl;
                cin>>quota;
                cout<<"Enter student's SSC percentage="<<endl;
                cin>>percent;
                cout<<"Enter the total marks of maths and science(MATHS+SCIENCE=total marks)"<<endl;
                cin>>tmarks;
                cout<<"Enter the email"<<endl;
                cin>>email;
                break;
        }
        case 4:{cout<<"This course is of 3-years full-time ,Un-aided,Non-sandwich semester pattern having multipoint entry & credit system"<<endl;
                cout<<" FEES :75,777/-"<<endl;
                cout<<"Enter student's name="<<endl;
                cin>>name;
                cout<<"Enter father's name="<<endl;
                cin>>fname;
                cout<<"Enter mother's name="<<endl;
                cin>>mname;
                cout<<"Enter student's address="<<endl;
                cin>>address;
                cout<<"Enter student's adhaar number="<<endl;
                cin>>adno;
                cout<<"Enter student's gender & caste="<<"%"<<endl;
                cin>>gender>>caste;
                cout<<"Enter student's Religion="<<endl;
                cin>>religion;
                cout<<"Enter students nationality, district and mother tongue="<<endl;
                cin>>nationality>>district>>moto;
                cout<<"Enter student's date of birth(DOB)"<<endl;
                cin>>dob;
                cout<<"Enter the quota through which you want the admission="<<endl;
                cin>>quota;
                cout<<"Enter student's SSC percentage="<<endl;
                cin>>percent;
                cout<<"Enter the total marks of maths and science(MATHS+SCIENCE=total marks)"<<endl;
                cin>>tmarks;
                cout<<"Enter the email"<<endl;
                cin>>email;
                break;
        }
        case 5:{cout<<"This course is of 3-years full-time ,Un-aided,Non-sandwich semester pattern having multipoint entry & credit system"<<endl;
                cout<<"FEES : 70,678"<<endl;
                cout<<"Enter student's name="<<endl;
                cin>>name;
                cout<<"Enter father's name="<<endl;
                cin>>fname;
                cout<<"Enter mother's name="<<endl;
                cin>>mname;
                cout<<"Enter student's address="<<endl;
                cin>>address;
                cout<<"Enter student's adhaar number="<<endl;
                cin>>adno;
                cout<<"Enter student's gender & caste="<<"%"<<endl;
                cin>>gender>>caste;
                cout<<"Enter student's Religion="<<endl;
                cin>>religion;
                cout<<"Enter students nationality, district and mother tongue="<<endl;
                cin>>nationality>>district>>moto;
                cout<<"Enter student's date of birth(DOB)"<<endl;
                cin>>dob;
                cout<<"Enter the quota through which you want the admission="<<endl;
                cin>>quota;
                cout<<"Enter student's SSC percentage="<<endl;
                cin>>percent;
                cout<<"Enter the total marks of maths and science(MATHS+SCIENCE=total marks)"<<endl;
                cin>>tmarks;
                cout<<"Enter the email"<<endl;
                cin>>email;
                break;

    }
    }
}  //set data bracket close

void Student::getdata()
{
    cout<<"-------------------------------------------"<<endl;
    cout<<">>>>>>>STUDENT'S DATA ARE AS FOLLOWS<<<<<<<"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Student's Name="<<name<<endl;
    cout<<"Father's Name="<<fname<<endl;
    cout<<"Mother's="<<mname<<endl;
    cout<<"ADDRESS="<<address<<endl;
    cout<<"ADHAAR NUMBER="<<adno<<endl;
    cout<<"GENDER AND CASTE="<<gender<<caste<<endl;
    cout<<"RELIGION="<<religion<<endl;
    cout<<"NATIONALITY, DISTRICT, MOTHER TONGUE="<<nationality<<district<<moto<<endl;
    cout<<"DATE OF BIRTH="<<dob<<endl;
    cout<<"QUOTA ENTERED="<<quota<<endl;
    cout<<"Total marks of science and maths="<<tmarks<<endl;;
    cout<<"Percentage="<<percent<<endl;
    if(percent>=80 && tmarks>=145)
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"CONGRATULATIONS !!!! YOU GOT THE ADDMISSION"<<endl;
        cout<<"We will contact to you through the provided email for further details"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"********************CONFIRMATION RECIEPT********************"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"C.RECIEPT NO=ARTM232"<<endl;
        cout<<"STUDENT'S FULL NAME="<<name<<fname<<mname<<endl;
        cout<<"STUDENT'S BASIC DATA AS FOLLOWS"<<endl;
        cout<<"ADDRESS="<<address<<endl;
        cout<<"CASTE AND RELIGION="<<caste<<religion<<endl;
        cout<<"GENDER AND NATIONALITY="<<gender<<nationality<<endl;
        cout<<"MOTHER TONGUE="<<moto<<endl;
        cout<<"YOU WILL GET THE CALL WITHIN 2 DAYS TO PAY THE FEES AND GET FEE RECEIPT"<<endl;

    }
    else if(percent<80 && tmarks>145)
    {
        cout<<"There are still chances to get the addmission"<<endl;
        cout<<"You may still get the addmission in college"<<endl;
    }
    else if(percent>80 && tmarks>145)
    {
        cout<<"There are chances to get the addmission"<<endl;
        cout<<"You may wait for few days as there is a hope"<<endl;
    }
    else if(percent<80 && tmarks<145)
    {
        cout<<"There are low chances to get the addmission"<<endl;
        cout<<"You may still wait or try in the other college"<<endl;
    }

}

main()
{
    Student s1;
    s1.setdata();
    s1.getdata();
}
