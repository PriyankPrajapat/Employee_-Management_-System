#include<iostream>
#include<conio.h>
using namespace std;
int i=0;//global variable
struct Employee
{
int id;
float salary;
string address,name,phone,department;
}E[25];
void insert()
{
    system("cls");//use for clean up
    cout<<"\n\n .....INSERT EMPLOYEE RECORD.....";
    cout<<"\n\n ENTER EMPLOYEE ID -> ";
    cin>>E[i].id;
    cout<<"\n\n ENTER EMPLOYEE NAME -> ";
    cin.ignore();// ignore or clear one or more characters from the input buffer
    getline(cin,E[i].name);
    cout<<"\n\n ENTER EMPLOYEE ADDRESS -> ";
    getline(cin,E[i].address);
    cout<<"\n\n ENTER EMPLOYEE PHONE NO. -> ";
    cin>>E[i].phone;
    cout<<"\n\n ENTER EMPLOYEE DEPARTMENT -> ";
    cin.ignore();
    getline(cin,E[i].department);
    cout<<"\n\n ENTER EMPLOYEE SALARY -> ";
    cin>>E[i].salary;
    i++;
    cout<<"\n\n ****EMPLOYEE RECORD INSERTED****";
}
void search()
{
    system("cls");
    cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
    if(i==0)
    {
        cout<<"\n\n DATA BASE IS EMPTY";
    }
    else{
        int t_id,found=0;
        cout<<"\n\n ENTER EMPLOYEE ID FOR SEARCH -> ";
        cin>>t_id;
        for(int a=0;a<i;a++)
        {

            if(t_id==E[a].id)
            {
                cout<<"\n\n EMPLOYEE NAME-> "<<E[a].name;
                cout<<"\n\n EMPLOYEE ADDRESS-> "<<E[a].address;
                cout<<"\n\n EMPLOYEE PHONE NO.-> "<<E[a].phone;
                cout<<"\n\n EMPLOYEE DEPARTMENT-> "<<E[a].department;
                cout<<"\n\n EMPLOYEE SALARY-> "<<E[a].salary;
                found++;
            }
        }
        if(found==0)
        {

            cout<<"\n\n EMPLOYEE IS NOT FOUND ";

        }
    }
}
void update()
{
    system("cls");
    cout<<"\n\nEMPLOYEE MANAGEMENT SYSTEM";
    if(i==0)
    {
        cout<<"\n\n DATA BASE IS EMPTY";
    }
    else{
        int t_id,found=0;
        cout<<"\n\n ENTER EMPLOYEE ID FOR UPDATE -> ";
        cin>>t_id;
        for(int a=0;a<i;a++)
        {

            if(t_id==E[a].id)
            {
                cout<<"\n\n ENTER EMPLOYEE NAME-> ";
                cin.ignore();
                getline(cin,E[a].name);
                cout<<"\n\n ENTER EMPLOYEE ADDRESS-> ";
                getline(cin,E[a].address);
                cout<<"\n\n ENTER EMPLOYEE PHONE NO.-> ";
                cin>>E[a].phone;
                cout<<"\n\n ENTER EMPLOYEE DEPARTMENT-> ";
                cin.ignore();
                getline(cin,E[a].department);
                cout<<"\n\n ENTER EMPLOYEE SALARY-> ";
                cin>>E[a].salary;
                cout<<"\n\n ****RECORD UPDATE SUCCESSFULLY****";
                found++;
            }
        }
        if(found==0)
        {

            cout<<"\n\n EMPLOYEE IS NOT FOUND ";

        }
    }
}
void del()
{
    system("cls");
    cout<<"\n\nEMPLOYEE MANAGEMENT SYSTEM";
    if(i==0)
    {
        cout<<"\n\n DATA BASE IS EMPTY";
    }
    else{
        int t_id,found=0;
        cout<<"\n\n ENTER EMPLOYEE ID FOR DELETE -> ";
        cin>>t_id;
        for(int a=0;a<i;a++)
        {

            if(t_id==E[a].id)
            {
                for(int k=a;k<i-1;k++)
                {
                    E[k].id = E[k+1].id;
                    E[k].name = E[k+1].name;
                    E[k].address = E[k+1].address;
                    E[k].phone = E[k+1].phone;
                    E[k].department = E[k+1].department;
                    E[k].salary = E[k+1].salary;
                }
                i--;
                    cout<<"\n\n ****RECORD DELETE SUCCESSFULLY****";

                 found++;
                 break;
            }
        }
        if(found==0)
        {

            cout<<"\n\n EMPLOYEE IS NOT FOUND ";

        }
    }
}
 void show()
{
    system("cls");
    cout<<"\n\nEMPLOYEE MANAGEMENT SYSTEM";
    if(i==0)
    {
        cout<<"\n\n DATA BASE IS EMPTY";
    }
    else{
        for(int a=0;a<i;a++)
        {
                cout<<"\n\n EMPLOYEE ID-> "<<E[a].id;
                cout<<"\n\n EMPLOYEE NAME-> "<<E[a].name;
                cout<<"\n\n EMPLOYEE ADDRESS-> "<<E[a].address;
                cout<<"\n\n EMPLOYEE PHONE NO.-> "<<E[a].phone;
                cout<<"\n\n EMPLOYEE DEPARTMENT-> "<<E[a].department;
                cout<<"\n\n EMPLOYEE SALARY-> "<<E[a].salary;
                cout<<"\n\n---------------------------------";

        }
        }
}



int main()
{
    p:
    system("cls");
    int choice;
cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
cout<<"\n\n 1- INSERT EMPLOYEE";
cout<<"\n\n 2- SEARCH EMPLOYEE";
cout<<"\n\n 3- UPDATE EMPLOYEE";
cout<<"\n\n 4- DELETE EMPLOYEE";
cout<<"\n\n 5- SHOW ALL EMPLOYEE";
cout<<"\n\n 6- EXIT";
cout<<"\n\n ENTER YOUR CHOICE ->";
cin>>choice;
switch(choice)
{
    case 1:
    insert();
    break;
    case 2:
        search();
    break;
    case 3:
        update();
    break;
    case 4:
        del();
    break;
    case 5:
        show();
    break;
    case 6:
    exit(0);
    default:
    cout<<"\n\n INVALID OPTION..PLEASE TRY AGAIN";
}
getch();
goto p;
}
