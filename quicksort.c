#include <stdio.h>

//2010105019
void quick_sort(int a[],int f, int b)
{
        int tmp;
        int pivot = a[b];
        int s = f, e = b;
        if (b - f < 1)
                return;

        while (1)
        {

                while (1)
                {
                        if (a[f] > pivot)
                        {
                                break;
                        }
                        f++;
                }


                while (1)
                {
                        if (a[b] < pivot)
                        {
                                break;
                        }
                        b--;
                }

                if (f >= b)
                {
                        break;
                }


                tmp = a[f];
                a[f] = a[b];
                a[b] = tmp;
                f++;
                b--;


        }
        tmp = a[f];
        a[f] = a[e];
        a[e] = tmp;

        quick_sort(a,s, f - 1);
        quick_sort(a,f + 1, e);
}

int main()
{
        int a[5];
        int i, j;
        int pivot;
        int front, back;

        for (i = 0; i < 5; i++)
                scanf("%d", &a[i]);

        front = 0;
        back = 5 - 1;

        quick_sort(a, front, back);


        for (i = 0; i < 5; i++)
        {
                printf("%d\n", a[i]);
        }

        return 0;
}
