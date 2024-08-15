#include <stdio.h>
#define C_SIZE 50
union Info
{ char name[C_SIZE];
char address[C_SIZE];
};
int main()
{
    union Info person;
    while (1)
    {
        printf("Enter the name of the person (Enter 'exit' to stop): ");
        scanf("%s", person.name);
        if (strcmp(person.name, "exit") == 0)
        {
            printf("Exiting...\n");
            break;
        }
        printf("Name of the person: %s\n", person.name);
    }
    return 0;
}
