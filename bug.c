int main() {
  int i = 0;
  while (i < 10) {
    printf("%d ", i++);
    if (i == 5) {
      goto end;
    }
  }
  end:
  printf("\n");
  return 0;
}