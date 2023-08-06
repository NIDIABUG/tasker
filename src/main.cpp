#include "../inputValidator/inputValidator.h"
#include <iostream>
#include <string>
/*
        Add a task to the tasker list
        View the tasker list
        Mark tasks as completed
        Delete tasks from the list
*/
const int MAX_TASK = 32;

struct Task {
    std::string description;
    bool isComplete = false;
    int id;
};
void addTask(Task task[], int taskNum) {
}
void viewTask(Task task[], int taskNum) {
}
void markTaskComplete(Task task[], int taskNum) {
}
void deleteTask(Task task[], int taskNum) {
}

int main() {
    Task task[MAX_TASK];
    int taskNum = 0;
    bool isRunning = true;

    while(isRunning) {
        std::string input;
        std::cout << "Welcome to the Tasker!"
                  << "\n1. Add a Task"
                  << "\n2. View a Task"
                  << "\n3. Mark Task as Complete"
                  << "\n4. Delete a Task"
                  << "\n0. Exit\n";

        std::getline(std::cin, input);
        if(!isNumber(input) || input.length() > 1)
            continue;
        const int parsedInput = std::stoi(input);
        switch(parsedInput) {
            case 0:
                return 0;
            case 1:
                addTask(task, taskNum);
            case 2:
                viewTask(task, taskNum);
            case 3:
                markTaskComplete(task, taskNum);
            case 4:
                deleteTask(task, taskNum);
            default:
                continue;
        }
    }
}