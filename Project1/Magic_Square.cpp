#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;


int main(void) {



    // prompt message
    bool flag = true;
    int n = 0;
    while (flag)
    {

        cout << "please enter an odd intger: " << endl;
        cin >> n;
        if (n % 2 == 1)
        {
            flag = false;
        }
    }
    cout << "n is : " << n << endl;
    cout << endl;
    // generate Magic square
    int magic_arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            magic_arr[i][j] = 0;

        }


    }

    int k = n * n;
    int num = 1;
    int y = n / 2;
    int x = 0;
    while (num <= n * n)
    {
        magic_arr[x][y] = num;
        int x_next = (x - 1 + n) % n;
        int y_next = (y + 1) % n;
        if (magic_arr[x_next][y_next])
        {
            x = (x + 1) % n;

        }
        else
        {

            x = x_next;
            y = y_next;

        }
        num++;

    }


    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            printf("%3d", magic_arr[i][j]);

        }
        cout << endl;
        cout << endl;

    }

    return 0;
}