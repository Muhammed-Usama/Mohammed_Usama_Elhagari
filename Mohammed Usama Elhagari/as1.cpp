#include <iostream>
using namespace std;
int a[40], i, pos, elm, t, wa, x, an;
int m; // stote postion in find method
int insert(int i, int pos, int elm, int t)
{
  cout << "Enter element to Insert :\n-\t ";
  cin >> elm;
  cout << "Enter Your Postion from 0 to " << t - 1 << ":\n-\t";
  cin >> pos;

  for (i = t - 1; i >= pos; i--)
  {

    a[i + 1] = a[i];
  }
  a[pos] = elm;
  t++;

  cout << "new array\n";
  for (i = 0; i < t; i++)
  {
    cout << a[i] << "\n";
  }
  return 0;
}
int find(int i, int pos, int elm, int t)
{
  cout << "Search By:\npostion->1\nnumber->2 \n-\t ";
  cin >> x;

  switch (x)
  {
  case 1:
    cout << "enter your position from 0 to " << t - 1 << " :\n-\t ";
    cin >> pos;
    cout << "Your number is : " << a[pos] << "\n";
    break;
  case 2:
    cout << "Enter Your number :\n-\t";
    cin >> elm;
    for (i = 0; i < t; i++)
    {
      if (a[i] == elm)
      {
        x = 1;
        m = i;
      }
    }

    if (x == 1)
    {
      cout << "Found and the postion of this number is : " << m << "\n";
    }
    else
    {
      cout << "[-]\tNOTFOUND\n";
    }
    break;
  default:
    cout << "[-]\tNOT VALID\n";
  }

  return 0;
}
int Delete(int i, int pos, int elm, int t)
{
  cout << "Enter your number that you need delete : \n-\t ";
  cin >> elm;
  for (i = 0; i < t; i++)
  {
    if (a[i] == elm)
    {
      m = i;
      for (i = m; i < t; i++)
      {
        a[i] = a[i + 1];
        t--;
      }
      cout << "New array :"
           << "\n";
      for (i = 0; i < t; i++)
      {
        cout << a[i] << "\n";
      }
    }
    else if (i == t - 1)
    {
      cout << "[-]\tthe value is not found\n";
    }
  }

  return 0;
}
int main()
{
  cout << " ____________ Mohammed Usama Elhagari __________ " << endl;
  cout << " ________ Assignment 1 ______ CE _____CSE111________ " << endl;
  cout << "Enter the size for array from 1 to 40:";
  cin >> t;
  cout << "Enter: " << t << " elemants \n";
  for (i = 0; i < t; i++)
  {
    cin >> a[i];
  }
  do
  {
    cout << "What do you Want?\nInsert->1\nfind->2 \nDelete->3\n-\t ";
    cin >> wa;
    switch (wa)
    {
    case 1:
      insert(i, pos, elm, t);
      break;
    case 2:
      find(i, pos, elm, t);
      break;
    case 3:
      Delete(i, pos, elm, t);
      break;
    default:
      cout << "[-]\t NOT VALID\n";
      break;
    }
    cout << "what do you want ?\nexit->0\nedit->1 \n-\t ";
    cin >> an;
  } while (an == 1);
  cout << "Thanks";

  return 0;
}