#include <iostream>

int main() {
  char line[50] = "AMO FAZER EXERCICIO NO URI";
  printf("<%s>\n", line);
  printf("<%30s>\n", line);
  printf("<%.20s>\n", line);
  printf("<%-20s>\n", line);
  printf("<%-30s>\n", line);
  printf("<%.30s>\n", line);
  printf("<%30.20s>\n", line);
  printf("<%-30.20s>\n", line);

  return 0;
}