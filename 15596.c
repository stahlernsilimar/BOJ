long long sum(int *a, int n)
{
  long long i;
  long long total;

  i = 0;
  total = 0;
  while (i < n)
  {
    total = total + a[i];
    i++;
  }
  return (total);
}
