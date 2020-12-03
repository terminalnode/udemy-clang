#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
  char * item_name;
  int quantity;
  float price;
  float amount;
};

void read_item(struct Item * pitem);
void print_item(struct Item * pitem);

int main() {
  struct Item * pitem = (struct Item *) malloc(sizeof(struct Item));
  read_item(pitem);
  print_item(pitem);

  return 0;
}

void read_item(struct Item * pitem) {
  pitem->item_name = (char *) malloc(36 * sizeof(char));
  printf("Item name: ");
  scanf(" ");
  fgets(pitem->item_name, 36, stdin);

  printf("Item quantity: ");
  scanf("%d", &pitem->quantity);

  printf("Item price: ");
  scanf("%f", &pitem->price);

  printf("Item amount: ");
  scanf("%f", &pitem->amount);
}

void print_item(struct Item * pitem) {
  printf(
      "<Item item_name='%s', quantity=%d, price=%f, amount=%f>\n",
      pitem->item_name,
      pitem->quantity,
      pitem->price,
      pitem->amount
  );
}
