#include <stdio.h>


typedef struct 
{
    char name[25];
    float gpa;
} Student ;

int main()
{
    Student student1 = {"SpongeBob", 3.00};
    Student student2 = {"Patrick", 2.50};
    Student student3 = {"Sandy", 4.00};
    Student student4 = {"SquidWard", 2.00};

    Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]);i++)
    {
     printf("%-12s\t : %.2f\n",students[i].name,students[i].gpa);
    }
    return 0;
}