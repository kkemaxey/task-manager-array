//Kanayo Egwuekwe-Maxey
//This is the header file for the task list program with array implementaion
//This will include the class and the neccessary functions
#ifndef TASKLISTARRAYHEADER_H
#define TASKLISTARRAYHEADER_H
using namespace std;

class taskList
{
    private:
        static const int MAX_SIZE = 10;
        string list[MAX_SIZE];
        int EoL;

    public:
        taskList();
        ~taskList();

        void addTask();
        void deleteTask();
        void printNum();
        void printTasks();
        void printRev();
};

void printMenu();
void error();

#endif