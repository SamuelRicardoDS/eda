

unsigned long int fib[81];

long int fibonacci(int n) {
  if ((n <=2) && fib[n] == 0) {
    fib[n] = 1;
  } else if (fib[n] == 0) {
    fib[n] = fibonacci(n -2) + fibonacci(n-1);
  }
  return fib[n];
}


