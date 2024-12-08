int main() {
  int i = 0;
  while (i < 10) {
    printf("%d ", i++);
    if (i == 5) {
      break; // Exit the loop gracefully
    }
  }
  printf("\n");
  return 0;
}