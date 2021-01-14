#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], int* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%d", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
int start;
int reps;

float areaOfCircle(float r){
  return M_PI*r*r;
}


void userInput(){
  char input[256];
  printf("\ninput lower: ");
  while (1){
    fgets(input, 256, stdin);
    if ((sscanf(input, "%d", &start) == 1) && (start > 0)) break;
    printf("\nnot a valid number. Make sure you are using an integer and your number is positive\ninput lower: ");
  }
  printf("\ninput upper: ");
  while (1){
    fgets(input, 256, stdin);
    if ((sscanf(input, "%d", &reps) == 1) && (reps > start)) break;
    printf("\nnot a valid number. Make sure you are using an integer and your upper input is greater than your lower input\ninput upper: ");
  }
  reps = reps - start + 1;
  for (int i = 0; i < reps; i++){
    printf("\narea of circle for %d is %f\n",start+i,areaOfCircle(start+i));
  }
}



int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  if (argc != 3){
    printf("could not find 3 arguements\n");
    userInput();
    return 1;
  }

  int arg1;
  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1){
    printf("first arguement was not integer\n");
    userInput();
    return 1;
  }

  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1){
    printf("second arguement was not integer\n");
    userInput();
    return 1;
  }

  int start;
  int reps;

  sscanf(argv[1], "%d", &start);
  sscanf(argv[2], "%d", &reps);
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);
  reps = reps - start + 1;
  printf("input lower: %d\ninput upper: %d\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
  
  for (int i = 0; i < reps; i++){
    printf("area of circle for %d is %f\n",start+i,areaOfCircle(start+i));
  }


  
}
