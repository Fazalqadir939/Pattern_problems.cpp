// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A
#include<iostream>
using namespace std;
main()
{
    char n = 'G';
    char r = 'G';
    char p3 = 'G';

    for (int i = 0;i<7;i++)
    {
        char t = r;
        for (char c= 'A';c<=n;c++)
        {
            cout <<" " <<c;
        }
        for (int j = 1;j<=i;j++)
        {
            cout << "  ";
        }
        for (int p=2;p<=i;p++)
        {
            cout << "  ";
        }
        for (;t>='A';t--)
        {
            if (t=='G')
            {

            }
            else{
                cout <<" " <<t;
            }
        }
       // n--;
        r--;
        n--;
        cout << endl;
    }
    n++;
    //cout << n;

    for (int i =0;i<7;i++)
    {
        for (char j = 'A';j<=n;j++)
        {
            cout << " "<< j ;
        }
        for (int j = 7;j>=i+2;j--)
        {
            cout << "  ";
        }
        for (int p=4;p>=i;p--)
        {
            cout << "  ";
        }
        n++;
        cout << endl;
    }
}
