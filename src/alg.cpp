// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int w = 0;
  int i = 0;
  while (i < size) {
    if (value == arr[i])
      ++w;
  ++i;
  }
  return w;
}
