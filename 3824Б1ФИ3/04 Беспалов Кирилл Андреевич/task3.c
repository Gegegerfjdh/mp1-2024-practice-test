// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
size_t task3(char *s)
{
  int cnt=0;
  for(int i=0;i!='\0';i++)
  {
      if (s[i]>='a' && s[i]<='z') cnt++;
  }
  return cnt;
}
