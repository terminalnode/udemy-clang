#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
  char name[36];
  char hire_date[15];
  float salary;
};

int main() {
  struct Employee kung_knut = { "Kung Knut", "2020-01-01", 1.23 };
  struct Employee inputed;

  printf("Name: ");
  scanf(" ");
  fgets(inputed.name, 36, stdin);

  printf("Date: ");
  scanf("%s", inputed.hire_date);

  printf("Salary: ");
  scanf("%f", &inputed.salary);

  printf(
      "<Employee '%s', %s, %f>\n",
      kung_knut.name,
      kung_knut.hire_date,
      kung_knut.salary
  );

  printf(
      "<Employee '%s', %s, %f>\n",
      inputed.name,
      inputed.hire_date,
      inputed.salary
  );
}
