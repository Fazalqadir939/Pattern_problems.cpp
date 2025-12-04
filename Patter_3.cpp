// +  +  +  +  1
// +  +  +  2  *
// +  +  3  *  *
// +  4  *  *  *
// 5  *  *  *  *
#include<iostream>
using namespace std;
main()
{
    int n =5;
    int l = 1;
    int k =4;
    for (int i = 1;i<=5;i++)
    {
        int j = 4;

        for (;j>=l;j--)
        {
            cout << " + ";
        }
       // cout << "K v " << k<<endl;
        l++;
        cout << " "<<i << " ";
        for ( int p =n-(k+1);p>0;p--)
        {
            cout << " * ";
        }
        k--;
        cout << endl;
    }
}
