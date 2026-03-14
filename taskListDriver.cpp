#include <iostream>
#include "taskListArrayHeader.h"
//#include "taskListPtrHeader.h"
using namespace std;

int main()
{
   taskList userList;
   int choice;

    do
    {
        printMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                userList.addTask();
                break;

            case 2:
                userList.deleteTask();
                break;

            case 3:
                userList.printNum();
                cout << endl;
                break;

            case 4:
                cout << endl;
                userList.printTasks();
                cout << endl;
                break;

            case 5:
                cout << endl;
                userList.printRev();
                break;
                
            default:
                return 0;
        }
    } while (choice < 6);
    
    return 0;
}