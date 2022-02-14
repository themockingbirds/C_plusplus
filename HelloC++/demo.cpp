#include <iostream>
#include <stdlib.h>
#include <iomanip>
#define max 100

using namespace std;

class Emp
{
private:
    string name, designation;
    int code, yoe, age;

public:
    void set_data();
    void tb_header();
    void display();
    void edit_data();
};

void Emp::set_data()
{
    cout << "\nEnter follwoing recrods -\n";
    cout << left;
    cout << setw(25) << "\t\t Code : ";
    cin >> code;
    cout << setw(25) << "\t\t Name : ";
    cin >> name;
    cout << setw(25) << "\t\t Age : ";
    cin >> age;
    cin.clear();
    cout << setw(25) << "\t\t Year Of Exprience : ";
    cin >> yoe;
    cout << setw(25) << "\t\t Designation : " << setw(20);
    cin >> designation;
    cout << endl;
}

void tb_header()
{
    cout << left;
    cout << setw(5) << "Code" << setw(18) << "Name" << setw(5) << "age" << setw(15) << "Designation"
         << "Year Of Exprience\n";
    cout << "----------------------------------------------------------------------\n\n";
}
void Emp::display()
{
    cout << left;
    cout << setw(5) << code << setw(18) << name << setw(5) << age << setw(15) << designation << yoe << endl;
}
/*
void edit_data()
{
    int ch,code;
    do
    {
        cout << "\n<-------------MODIFY MENU ------------->";
        cout << "\n   What do u want to modify..??\n    1) Name\n    2) Code\n    3) Age\n    4) Designation\n  5) Year Of Exprience 6) Exit\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cin.ignore();
            cout << "\nName : ";
            cin.getline(name, 50);
            break;

        case 2:
            cout << "Code : ";
            cin >> code;
            break;

        case 3:
            cout << "Age : ";
            cin >> age;
            break;

        case 4:
            cout << "Designation : ";
            cin >> desination;
            break;

        case 5:
            cout << "Year Of Exprience : ";
            cin >> yoe;
            break;

        case 6:
            break;

        default:
            cout << "\nEnter VALID Choice..!!\n";
        }
    } while (ch != 10);

    cout << "\nData Modified Successfully..!!\n";
}
*/
int main()
{
    system("clear");
    int roll, age, yoe, code;
    char choice;
    int ch;
    string name, designation;
    Emp emp[max];
    int no_of_rec = 0, n, i;

    do
    {
        cout << "\n\n";
        cout << "\t" << setw(15) << "Menu\n";
        cout << "\t" << setw(30) << setfill('-') << "-" << endl;
        cout << setfill(' ') << "\t1. Build Master Table\n";
        cout << "\t2. List a Table\n";
        cout << "\t3. Insert New Entry\n";
        cout << "\t4. Delete Old Entry\n";
        cout << "\t5. Edit an Entry\n";
        cout << "\t6. Seach for a record\n";
        cout << "\t7. Sort Enteries\n";
        cout << "\t8. Exit\n\n";
        cout << "\t" << setw(30) << setfill('-') << "-" << endl;
        cout<<setfill(' ');
        // cout << "\t------------------------------\n";
        cout << "\n\n\tChoice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            do
            {
                cout << "\nEnter No. of Records : ";
                cin >> n;
                if (n < 1)
                    cout << "\nEnter VALID Nunber..!!\n";
                if (n > max)
                    cout << "\nMaximum number of records is " << max << " ONLY..!!\n";
            } while (n > max || n < 0);
            for (i = 0; i < n; i++)
            {
                emp[i].set_data();
                no_of_rec++;
            }
            break;

        case 2:
            if (!n)
                cout << "\nData Base EMPTY..!!\n";
            else
            {
                cout << endl
                     << endl;
                tb_header();
                for (i = 0; i < n; i++)
                {
                    emp[i].display();
                }
                cout << "\n\nTotal No of Recrod : " << no_of_rec;
                cout << "\nPress enter to contine : ";
            }
            break;

        case 3:

            break;

        case 4:
            // delete_data();
            break;

        case 5:
            // edit_data();
            break;

        case 6:
            // search_data();
            break;

        case 7:
            // sort_data();
            break;

        case 8:
            exit(0);
            break;

        default:
            cout << "Invalid Input\n\n Press \"enter\" to continue..";
            getchar();
        }
    } while (1);
}
