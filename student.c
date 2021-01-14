#include <stdio.h>



// student structure
//struct Student...
struct Student {
  char firstName[50];
  char lastName[50];
  int age;
  int studentID;
};

void printStudent(struct Student* student)
{
  printf("Student: %s ", student->firstName);
  printf("%s\n", student->lastName);
  printf("age: %d\n", student->age);
  printf("id: %d\n", student->studentID);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for (int i = 0; i<num; i++){
    printf("----- student -----\n",students[num]);
    printStudent(&students[i]);
  }
}


int main()
{

  // an array of students
  int numStudents = 0;
  //xxx students;
  struct Student student[5];
  char input[256];

  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit: ");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q')
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(student, numStudents);
      continue;
    }
    else if (c == 'a')
    {

      // enter first name
      printf("\nFirst name: ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", student[numStudents].firstName);
      // enter last name
      printf("Last name: ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", student[numStudents].lastName);
      // enter age
      printf("Enter age: ");
      fgets(input, 256, stdin);
      sscanf(input, "%d", &student[numStudents].age);
      // enter id
      printf("Enter id: ");
      fgets(input, 256, stdin);
      sscanf(input, "%d", &student[numStudents].studentID);

      // add to number of students
      numStudents++;
    }
  }
  printf("\nGoodbye!\n");
}

