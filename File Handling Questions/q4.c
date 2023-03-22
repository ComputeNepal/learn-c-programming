// writing details of students into a file using fwrite and fread for inbuilt to get formatted output
#include <stdio.h>
void students(int);
typedef struct Student {
  char name[10];
  int marks;
  char phone[10];
  int roll_num;
} Student;

int main() {
  int len;
  printf("Enter how many students are to be used:\n");
  scanf("%d", &len);
  students(len);
  return 0;
}
void students(int len) {
  Student std[len];
  FILE *fp = fopen("students.dat", "w");
  for (int i = 0; i < len; i++) {
    printf("For student no [%d]\n", i + 1);
    printf("enter name:");
    scanf("%s", std[i].name);
    printf("enter marks:");
    scanf("%d", &std[i].marks);
    printf("enter phone:");
    scanf("%s", std[i].phone);
    printf("enter roll_num:");
    scanf("%d", &std[i].roll_num);
    printf("-----------------------\n");
    printf("-----------------------\n");
    fwrite(&std[i], sizeof(Student), 1, fp);
  }
  fclose(fp);
  printf("sucessfully wrote data into the file\n");
  printf("-----------------------\n");
  printf("-----------------------\n");

  // to read from a file
  fp = fopen("students.dat", "r");
  for (int i = 0; i < len; i++) {
    fread(&std[i], sizeof(Student), 1, fp);
    printf("Name:%s\n", std[i].name);
    printf("Phone:%s\n", std[i].phone);
    printf("Marks:%d\n", std[i].marks);
    printf("Roll:%d\n", std[i].roll_num);
    printf("---------------------------\n");
  }
}
