#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                swap(num[j], num[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

}