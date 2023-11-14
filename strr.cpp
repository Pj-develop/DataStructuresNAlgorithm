
#include<bits/stdc++.h>
using namespace std;
#define MAX 256

int main()
{
  char arr[20];

  cout<<"Various ways of taking string as an input "<<endl;

  cout<<"\n\nUsing scanf(\"%s\", arr);\n";
  cout<<"Enter Input, method 1 : ";
  scanf("%s", arr);
  cout<<"Input 1: "<<arr<<endl;
  fflush(stdin);

  cout<<"\n\nUsing scanf(\"%[^\\n]\", &arr);\n";
  cout<<"Enter Input, method 2 : ";
  scanf("%[^\n]", &arr);
  cout<<"Input 2: "<<arr<<endl;
  fflush(stdin);


  cout<<"\n\nUsing scanf(\"%[^\\n]%*c\", &arr);\n";
  cout<<"Enter Input, method 3 : ";
  scanf("%[^\n]%*c", &arr);
  cout<<"Input 3: "<<arr<<endl;
  fflush(stdin);

  cout<<"\n\nUsing  scanf(\"%[^\\n]s\", &arr);\n";
  cout<<"Enter Input, method 4 : ";
  scanf("%[^\n]s", &arr);
  cout<<"Input 4: "<<arr<<endl;
  fflush(stdin);

  cout<<"\n\nUsing  gets(arr);\n";
  cout<<"Enter Input, method 5 : ";
  gets(arr);
  cout<<"Input 5: "<<arr<<endl;

  //Again taking input from gets() to show there is no need for fflush here
  cout<<"\n\nUsing gets(arr);\n";
  cout<<"Enter Input, same as method 5 : ";
  gets(arr);
  cout<<"Input : "<<arr<<endl;

  //IMP TO NOTE : No need for fflush(stdin)
  cout<<"\n\nUsing scanf(\"%s\", arr);\n";
  cout<<"Enter Input, same as method 1 : ";
  scanf("%s", arr);
  cout<<"Input : "<<arr<<endl;
  fflush(stdin);

  cout<<"\n\nUsing fgets(str, MAX_LIMIT, stdin);\n";
  cout<<"Enter Input, method 6 : ";
  //syntax: fgets(str, MAX_LIMIT, stdin); or char *fgets(char *str, int size, FILE *stream)
  fgets(arr, 20, stdin);
  cout<<"Input 6: "<<arr<<endl;

  return 0;
}

/*
Various ways of taking string as an input
Using scanf("%s", arr);
Enter Input, method 1 : abc def
Input 1: abc
Using scanf("%[^\n]", &arr);
Enter Input, method 2 : ghi jkl
Input 2: ghi jkl
Using scanf("%[^\n]%*c", &arr);
Enter Input, method 3 : mno pqr
Input 3: mno pqr
Using  scanf("%[^\n]s", &arr);
Enter Input, method 4 : stu vwx
Input 4: stu vwx
Using  gets(arr);
Enter Input, method 5 : yzi amn
Input 5: yzi amn
Using gets(arr);
Enter Input, same as method 5 : hello wello
Input : hello wello
Using scanf("%s", arr);
Enter Input, same as method 1 : how are u
Input : how
Using fgets(str, MAX_LIMIT, stdin);
Enter Input, method 6 : hey coder
Input 6: hey coder
*/