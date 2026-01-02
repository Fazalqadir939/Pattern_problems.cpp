// 1
// 232
// 34543
// 4567654
// 567898765
#include<iostream>
using namespace std;
main()
{
    int n =1;
    int k =1;
    for (int i =1;i<=5;i++)  
    {
        for (int j = k;j<=n;j++)
        {
            cout << j;
        }
        for (int l =n-1;l>=k;l--)
        {
            cout << l;
        }
        cout << endl;
        k++;
        n+=2;
    }
}
