// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
int gmd(int a, int b) {

    if (a == 0 | b == 0)
    {
        return 1;

    }

    if (a >= b)
    {
        if (a % b == 0) {

            return b;
        }
        else {

            return  gmd(b, a % b);

        }
    }
    else {

        return gmd(b, a);
    }

}

int main(void) {


    int a, b, k;
    char c = 's';

    while (c != 'q') {

        printf("please enter two numbers\n");
        if ((scanf_s("%d %d", &a, &b)) != 2)
        {
            printf("c a b %c%d%d\n", c, a, b);
        }

        k = gmd(a, b);
        printf("The greatest commond divide of %d and %d is: %d\n", a, b, k);

        while ((c = getchar()) == '\n' || (getchar()) == ' ')
        {

            printf("enter q to quit\n");
            printf("enter any key to continue\n");

            if ((c = getchar()) == '\n') {

                break;

            }
            else if (c == 'q') {


                return 0;

            }
            else {
                char d = getchar();
                break;

            }
        }

    }

    return 0;
}