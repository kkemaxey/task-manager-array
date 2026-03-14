#include <iostream>
#include "taskListArrayHeader.h"
using namespace std;

//---------------------------------------------------------------------------------------------------------------------------------------------
// This function finds where the user wants to insert their task and moves every item in front of the desired location forward to add the task
//---------------------------------------------------------------------------------------------------------------------------------------------

void taskList::addTask()
{
    string taskName;
    int taskPos;
    cout << "Enter task name and its position -> ";
    cin >> taskName >> taskPos;

    if (EoL == MAX_SIZE || taskPos - 1 > EoL)
    {
        error();
    }
    else
    {
        for (int i = EoL-1; i >= taskPos-1; i--)
        {
            list[i+1] = list[i];
        }

        list[taskPos-1] = taskName;
        EoL++;
    }

    printNum();
    printTasks();
    printRev();
}


//------------------------------------------------------------------------------------------------
// This function takes in the position of the desired task to be deleted and overwrites that data
//------------------------------------------------------------------------------------------------

void taskList::deleteTask()
{
    int taskPos;
    cout << "Enter its position -> ";
    cin >> taskPos;

    if (taskPos-1 >= EoL || taskPos <= 0)
    {
        error();
    }
    else if (EoL == MAX_SIZE)
    {
        cout << endl << list[taskPos-1] << endl;
        EoL--;
    }
    else
    {
        cout << endl << list[taskPos-1] << endl;

        for (int i = taskPos-1; i < EoL; i++)
        {
            list[i] = list[i+1];
        }

        EoL--;
    }

    printNum();
    printTasks();
    printRev();
}


//-----------------------------------------------------------------------------------
// Using the End Of List variable, I print out the total number of tasks in the list
//-----------------------------------------------------------------------------------

void taskList::printNum()
{
    cout << endl << "Number of tasks = " << EoL << endl;
}


//------------------------------------------------------------
// Prints the tasks in order starting from the first position
//------------------------------------------------------------

void taskList::printTasks()
{
    for (int i = 0; i <= EoL-1; i++)
    {
        cout << i+1 << ":" << list[i] << " ";
    }

    cout << endl;
}


//---------------------------------------------------------
// Prints the tasks in reverse order starting from the end
//---------------------------------------------------------

void taskList::printRev()
{
    for (int i = EoL-1; i >= 0; i--)
    {
        cout << i+1 << ":" << list[i] << " ";
    }

    cout << endl << endl;
}


//---------------------------------------------
// Basic constructor for the private variables
//---------------------------------------------

taskList::taskList()
{
    EoL = 0;
}


//------------------------------
// Destructor for the variables
//------------------------------

taskList::~taskList()
{
    EoL = 0;
}


//-------------------------------------
// This literally just prints the menu
//-------------------------------------

void printMenu()
{
    cout << "1. Add task X to the list at a particular position p" << endl;
	cout << "2. Delete task X from the task list at position q" << endl;
	cout << "3. Print the number of tasks in the task list" << endl;
	cout << "4. Print all tasks in the task list in the order of position" << endl;
	cout << "5. Print all tasks in the task list in reverse order of position" << endl;
	cout << "6. Quit" << endl << endl;
    cout << "Choice -> ";
}


//-----------------------------------------
// This is a standard error print function
//-----------------------------------------

void error()
{
    cout << "ERROR! Invalid Request." << endl;
}