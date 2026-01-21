#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[256];
    int complete;
}Task;

void viewTasks(Task *tasks, int *amount) {
    for(int i = 0; i < *amount; i++) {
        printf("Task %d\n", i + 1);
        printf("Name: %s\n", tasks[i].name);
        printf("Is completed: %s\n", (tasks[i].complete == 1) ? "True" : "False");
    }
}

void complete(Task *tasks, int *amount) {
    int temp;
    int choice;
    for(int i = 0; i < *amount; i++) {
        printf("Task %d:\n", i + 1);
        printf("Name: %s\n", tasks[i].name);
        printf("Is completed: %s\n", (tasks[i].complete == 1) ? "True" : "False");
    }
    printf("Complete (1) or uncomplete (2): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("What task do you want completed: ");
            scanf("%d", &temp);
            tasks[temp - 1].complete = 1;
            break;
        case 2:
            printf("What task do you want uncompleted: ");
            scanf("%d", &temp);
            tasks[temp - 1].complete = 0;
            break;
        default:
            printf("Invalid option!");
            break;

    }
}

void addTask(Task *tasks, int *amount, int maxSize) {
    if (*amount >= maxSize) {
        printf("Task limit reached!\n");
        return;
    }
    char temp[256];
    printf("\nWhat do you want the task to be: ");
    scanf(" %[^\n]", temp);
    strcpy(tasks[*amount].name, temp);
    tasks[*amount].complete = 0;
    (*amount)++;
}
void delete(Task *tasks, int *amount) {
    int choice;
    printf("What task do you want to delete: ");
    scanf("%d", &choice);
    for(int i = choice - 1; i < *amount - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    (*amount)--;
    printf("Task %d deleted\n", choice);
}



int main() {
    int choice = 0;
    int maxSize;
    int amount = 0;
    printf("How many tasks will you make: ");
    scanf("%d", &maxSize);
    Task *tasks = malloc(maxSize * sizeof(Task));
    if(tasks == NULL) {
        printf("Failed to allocate memory!");
        return 1;
    }
    while(choice != 5) {
        printf("*** %d %s ***", amount, (amount == 1) ? "Task" : "Tasks");
        printf("\n1. Add a task\n");
        printf("2. View all tasks\n");
        printf("3. Edit a task\n");
        printf("4. Delete a task\n");
        printf("5. Exit\n");
        printf("What do you want to do: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addTask(tasks, &amount, maxSize); break;
            case 2: viewTasks(tasks, &amount); break;
            case 3: complete(tasks, &amount); break;
            case 4: delete(tasks, &amount); break;
            case 5: break;
            default: printf("Not an option!"); break;
        }
    }
    free(tasks);

    return 0;
}
