#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    int arra[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            arra[i][j] = arra[j][i];
        }
    }
    cout<<".";
    return 0;
}