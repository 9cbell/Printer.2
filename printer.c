//Include standard files and other header files (aka h files to your other files).
#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char FileName[40];
    int pages;
    char cont[525];
} CopyJob;
typedef struct{
char username[20];
long PageCount;
} User;
typedef struct {
short name;
int quanty;
int total;
} PaperTray;

//Define the printer
struct Printer{
  char Name[32];
  PaperTray* TrayAddress[6];
  User* UserDB[3];
  int TPP;
};
int trayStatus(Printer p1, num){
  int quanty Printer->trays[num-1].quanty;
  return quanty;
}
int reloadTray(  ){
  return 0;
}

int printerStatus(){
  return 0;
}

int print(){
  return 1;
}

int main(){
  //make users
  User u1 = {"delano",0};
  User u2 = {"chuck",0};
  User u3 = {"Dillon", 0};
  //make copyJobs
  CopyJob cj1 = {"math",1, "Here the value of members of student1 will have for name, 14 for roll_no and 89 for marks. Similarly, the value of members of student2 will be for name, 10 for roll_no and 82 for marks."};
  CopyJob cj2 = {"health",2, "As we know student_3.name is an array so we can't just assign a string to it, that's why in line 37 a strcpy() function is used to assign a string to student_3.name."};
  CopyJob cj3 = {"battery",4,"We can use student1.name, student1.roll_no and student1.marks just as any other ordinary variables. They can be read, displayed, assigned values, used inside an expression, passed as arguments to functions etc."};
  CopyJob cj4 = {"physics",1, "Here the value of members of student1 will have for name, 14 for roll_no and 89 for marks. Similarly, the value of members of student2 will be for name, 10 for roll_no and 82 for marks."};
  CopyJob cj5 = {"english"2, "As we know student_3.name is an array so we can't just assign a string to it, that's why in line 37 a strcpy() function is used to assign a string to student_3.name."};
  CopyJob cj6 = {"history",4,"We can use student1.name, student1.roll_no and student1.marks just as any other ordinary variables. They can be read, displayed, assigned values, used inside an expression, passed as arguments to functions etc."};
  //make trays
  PaperTray t1 = {1, 1000, 1000};
  PaperTray t2 = {2, 1000, 1000};
  PaperTray t3 = {3, 2000, 2000};
  PaperTray t4 = {4, 2000, 2000};
  PaperTray t5 = {5, 2000, 2000};
  PaperTray t6 = {6, 2000, 2000};

  PaperTray trays[6] = {&t1,&t2,&t3,&t4,&t5,&t6};
  User Users[3] = {&u1,&u2,&u3};
  //make printert3
  Printer p1 = {"Lazor1", trays, 0,};
  Printer p2 = {"Lazor2", trays, 0,};
  Printer p3 = {"Teacher", trays, 0,};
  //begin printing 
  
  //print user page counts and total print page count.


  //print printer status


  //reload a tray


  //ask again for a printerStatus
}
