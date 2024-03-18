#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <time.h>

void brosok(int mass1[6], int* n)
{
    srand(time(0));
    for (int i = 0; i < *n; i++) {
        mass1[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void output1(int* mass, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", mass[i]);
    }
}
void points(int mass[6], int* points, int* n)
{
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0, newpoints = 0;
    for (int i = 0; i < *n; i++) {
        if (mass[i] == 1) { k1 += 1; }
        if (mass[i] == 2) { k2 += 1; }
        if (mass[i] == 3) { k3 += 1; }
        if (mass[i] == 4) { k4 += 1; }
        if (mass[i] == 5) { k5 += 1; }
        if (mass[i] == 6) { k6 += 1; }
    }
    //1
    if (k1 == 3) { newpoints += 100; *n = *n - 3; }
    if (k1 == 4) { newpoints += 200; *n = *n - 4; }
    if (k1 == 5) { newpoints += 1000; *n = 5; }
    if (k1 == 1) { newpoints += 10; *n = *n - 1; }
    if (k1 == 2) { newpoints += 20; *n = *n - 2; }
    //2
    if (k2 == 3) { newpoints += 20; *n = *n - 3; }
    if (k2 == 4) { newpoints += 40; *n = *n - 4; }
    if (k2 == 5) { newpoints += 200; *n = 5; }
    //3
    if (k3 == 3) { newpoints += 30; *n = *n - 3; }
    if (k3 == 4) { newpoints += 60; *n = *n - 4; }
    if (k3 == 5) { newpoints += 300; *n = 5; }
    //4
    if (k4 == 3) { newpoints += 40; *n = *n - 3; }
    if (k4 == 4) { newpoints += 80; *n = *n - 4; }
    if (k4 == 5) { newpoints += 400; *n = 5; }
    //5
    if (k5 == 3) { newpoints += 50; *n = *n - 3; }
    if (k5 == 4) { newpoints += 100; *n = *n - 4; }
    if (k5 == 5) { newpoints += 500; *n = 5; }
    if (k5 == 1) { newpoints += 5; *n = *n - 1; }
    if (k5 == 2) { newpoints += 10; *n = *n - 2; }
    //6
    if (k6 == 3) { newpoints += 60; *n = *n - 3; }
    if (k6 == 4) { newpoints += 120; *n = *n - 4; }
    if (k6 == 5) { newpoints += 600; *n = 5; }
    //другие комбинации
    if (k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) { newpoints += 110; *n = 5; }
    if (k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1 && k6 == 1) { newpoints += (-5); *n = 5; }
    if (*n == 0)
    {
        *n = 5;
    }
    if ((*points < 200 || *points >= 300) && (*points < 600 || *points >= 700))
    {
        *points += newpoints;
    }
    if (*points >= 200 && *points < 300) {
        printf("\nвы находитесь в яме(200 - 300), чтобы выбраться вам надо за ваш ход набрать %d и больше очков\n", 300 - *points);
        if (newpoints >= 300 - *points)
        {
            *points += newpoints;
            printf("\nвы выбрались из ямы\n");
        }
    }
    if (*points >= 600 && *points < 700) {
        printf("\nвы находитесь в яме(600 - 700), чтобы выбраться вам надо за ваш ход набрать %d и больше очков\n", 700 - *points);
        if (newpoints >= 700 - *points)
        {
            *points += newpoints;
            printf("\nвы выбрались из ямы\n");
        }
    }
}
int main()
{
    setlocale(LC_ALL, "");
    int mass1[6], mass2[6];
    int vibor_igry, vibor, vibor1, vibor111, vibor2, vibor3, vibor4, vibor5, points_all = 0, points_all1 = 0, points1 = 0, points2 = 0, points3 = 0, points4 = 0, points5 = 0, n = 5;
    int vibor_1, vibor11, vibor22, vibor33, vibor44, vibor55;
    printf("\n1 - против пк\n2 - против игрока2\n");
    scanf_s("%d", &vibor_igry);
    if (vibor_igry == 2) {
        printf("начать игру ?\n1-да\n2-нет\n"); scanf_s("%d", &vibor);
        do {
            if (vibor == 1) {
                while (1) {
                    points1 = 0;
                    points2 = 0;
                    points3 = 0;
                    points4 = 0;
                    points5 = 0;
                    printf("\n\nход игрока1\n\n");
                    printf("\n1 - бросить кубики\n");
                    scanf_s("%d", &vibor111);
                    if (vibor111 == 1) {
                        brosok(mass1, &n);
                        output1(mass1, &n);
                        points(mass1, &points1, &n);
                        printf("\n%d - очки игрока1\n", points1);
                        if (points1 > 0)
                        {
                            printf("\n1 - бросить кубики\n2 - записать очки\n");
                            scanf_s("%d", &vibor1);
                            if (vibor1 == 1)
                            {
                                brosok(mass1, &n);
                                output1(mass1, &n);
                                points(mass1, &points2, &n);
                                printf("\n%d - очки игрока1\n", points2);
                                if (points2 > 0)
                                {
                                    printf("\n1 - бросить кубики\n2 - записать очки\n");
                                    scanf_s("%d", &vibor2);
                                    if (vibor2 == 1) {
                                        brosok(mass1, &n);
                                        output1(mass1, &n);
                                        points(mass1, &points3, &n);
                                        printf("\n%d - очки игрока1\n", points3);
                                        if (points3 > 0)
                                        {
                                            printf("\n1 - бросить кубики\n2 - записать очки\n");
                                            scanf_s("%d", &vibor3);
                                            if (vibor3 == 1) {
                                                brosok(mass1, &n);
                                                output1(mass1, &n);
                                                points(mass1, &points4, &n);
                                                printf("\n%d - очки игрока1\n", points4);
                                                if (points4 > 0)
                                                {
                                                    printf("\n1 - бросить кубики\n2 - записать очки\n");
                                                    scanf_s("%d", &vibor4);
                                                    if (vibor4 == 1) {
                                                        brosok(mass1, &n);
                                                        output1(mass1, &n);
                                                        points(mass1, &points5, &n);
                                                        printf("\n%d - очки\n", points5);
                                                        if (points5 > 0)
                                                        {
                                                            if ((points_all >= 0 && points_all < 200) || (points_all >= 300 && points_all < 600) || (points_all >= 700)) {
                                                                points_all = points_all + points1 + points2 + points3 + points4 + points5;
                                                            }
                                                            if (points_all >= 200 && points_all < 300) {
                                                                if ((points1 + points2 + points3 + points4 + points5) < 300 - points_all)
                                                                {
                                                                    points_all = points_all;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                                }
                                                                else {
                                                                    points_all = points_all + points1 + points2 + points3 + points4 + points5;
                                                                }
                                                            }
                                                            if (points_all >= 600 && points_all < 700) {
                                                                if ((points1 + points2 + points3 + points4 + points5) < 700 - points_all)
                                                                {
                                                                    points_all = points_all;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                                }
                                                                else {
                                                                    points_all = points_all + points1 + points2 + points3 + points4 + points5;
                                                                }
                                                            }

                                                            printf("\nВСЕГО ОЧКОВ У ИГРОКА1 - %d\n", points_all);
                                                        }
                                                        if (points5 == 0)
                                                        {
                                                            printf("\nОЧКИ ИГРОКА1 ЗА ХОД - 0\n");
                                                            break;
                                                        }
                                                    }
                                                    if (vibor4 == 2) {
                                                        if ((points_all >= 0 && points_all < 200) || (points_all >= 300 && points_all < 600) || (points_all >= 700)) {
                                                            points_all = points_all + points1 + points2 + points3 + points4;
                                                        }
                                                        if (points_all >= 200 && points_all < 300) {
                                                            if ((points1 + points2 + points3 + points4) < 300 - points_all)
                                                            {
                                                                points_all = points_all;
                                                                printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                            }
                                                            else {
                                                                points_all = points_all + points1 + points2 + points3 + points4;
                                                            }
                                                        }
                                                        if (points_all >= 600 && points_all < 700) {
                                                            if ((points1 + points2 + points3 + points4) < 700 - points_all)
                                                            {
                                                                points_all = points_all;
                                                                printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                            }
                                                            else {
                                                                points_all = points_all + points1 + points2 + points3 + points4;
                                                            }
                                                        }
                                                        printf("\nВСЕГО ОЧКОВ У ИГРОКА1 - %d\n", points_all);
                                                        break;
                                                    }
                                                }
                                                if (points4 == 0)
                                                {
                                                    printf("\nОЧКИ ИГРОКА1 ЗА ХОД - 0\n");
                                                    break;
                                                }
                                            }
                                            if (vibor3 == 2) {
                                                if ((points_all >= 0 && points_all < 200) || (points_all >= 300 && points_all < 600) || (points_all >= 700)) {
                                                    points_all = points_all + points1 + points2 + points3;
                                                }
                                                if (points_all >= 200 && points_all < 300) {
                                                    if ((points1 + points2 + points3) < 300 - points_all)
                                                    {
                                                        points_all = points_all;
                                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                    }
                                                    else {
                                                        points_all = points_all + points1 + points2 + points3;
                                                    }
                                                }
                                                if (points_all >= 600 && points_all < 700) {
                                                    if ((points1 + points2 + points3) < 700 - points_all)
                                                    {
                                                        points_all = points_all;
                                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                    }
                                                    else {
                                                        points_all = points_all + points1 + points2 + points3;
                                                    }
                                                }
                                                printf("\nВСЕГО ОЧКОВ У ИГРОКА1 - %d\n", points_all);
                                                break;
                                            }
                                        }
                                        if (points3 == 0)
                                        {
                                            printf("\nОЧКИ ИГРОКА1 ЗА ХОД - 0\n");
                                            break;
                                        }
                                    }
                                    if (vibor2 == 2) {
                                        if ((points_all >= 0 && points_all < 200) || (points_all >= 300 && points_all < 600) || (points_all >= 700)) {
                                            points_all = points_all + points1 + points2;
                                        }
                                        if (points_all >= 200 && points_all < 300) {
                                            if ((points1 + points2) < 300 - points_all)
                                            {
                                                points_all = points_all;
                                                printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                            }
                                            else {
                                                points_all = points_all + points1 + points2;
                                            }
                                        }
                                        if (points_all >= 600 && points_all < 700) {
                                            if ((points1 + points2) < 700 - points_all)
                                            {
                                                points_all = points_all;
                                                printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                            }
                                            else {
                                                points_all = points_all + points1 + points2;
                                            }
                                        }
                                        printf("\nВСЕГО ОЧКОВ У ИГРОКА1 - %d\n", points_all);
                                        break;
                                    }
                                }
                                if (points2 == 0)
                                {
                                    printf("\nОЧКИ ИГРОКА1 ЗА ХОД - 0\n");
                                    break;
                                }
                            }
                            if (vibor1 == 2) {
                                if ((points_all >= 0 && points_all < 200) || (points_all >= 300 && points_all < 600) || (points_all >= 700)) {
                                    points_all = points_all + points1;
                                }
                                if (points_all >= 200 && points_all < 300) {
                                    if ((points1) < 300 - points_all)
                                    {
                                        points_all = points_all;
                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                    }
                                    else {
                                        points_all = points_all + points1;
                                    }
                                }
                                if (points_all >= 600 && points_all < 700) {
                                    if ((points1) < 700 - points_all)
                                    {
                                        points_all = points_all;
                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                    }
                                    else {
                                        points_all = points_all + points1;
                                    }
                                }
                                printf("\nВСЕГО ОЧКОВ У ИГРОКА1 - %d\n", points_all);
                                break;
                            }
                        }
                        if (points1 == 0)
                        {
                            printf("\nОЧКИ ИГРОКА1 ЗА ХОД - 0\n");
                            break;
                        }
                    }
                }
                n = 5;
                points1 = 0;
                points2 = 0;
                points3 = 0;
                points4 = 0;
                points5 = 0;
                while (1) {
                    points1 = 0;
                    points2 = 0;
                    points3 = 0;
                    points4 = 0;
                    points5 = 0;
                    printf("\n\nход игрока 2\n\n");
                    printf("\n1 - бросить кубики\n");
                    scanf_s("%d", &vibor_1);
                    if (vibor_1 == 1) {
                        brosok(mass2, &n);
                        output1(mass2, &n);
                        points(mass2, &points1, &n);
                        printf("\n%d - очки игрока2\n", points1);
                        if (points1 > 0)
                        {
                            printf("\n1 - бросить кубики\n2 - записать очки\n");
                            scanf_s("%d", &vibor11);
                            if (vibor11 == 1)
                            {
                                brosok(mass2, &n);
                                output1(mass2, &n);
                                points(mass2, &points2, &n);
                                printf("\n%d - очки игрока2\n", points2);
                                if (points2 > 0)
                                {
                                    printf("\n1 - бросить кубики\n2 - записать очки\n");
                                    scanf_s("%d", &vibor22);
                                    if (vibor22 == 1) {
                                        brosok(mass2, &n);
                                        output1(mass2, &n);
                                        points(mass2, &points3, &n);
                                        printf("\n%d - очки игрока2\n", points3);
                                        if (points3 > 0)
                                        {
                                            printf("\n1 - бросить кубики\n2 - записать очки\n");
                                            scanf_s("%d", &vibor33);
                                            if (vibor33 == 1) {
                                                brosok(mass2, &n);
                                                output1(mass2, &n);
                                                points(mass2, &points4, &n);
                                                printf("\n%d - очки игрока2\n", points4);
                                                if (points4 > 0)
                                                {
                                                    printf("\n1 - бросить кубики\n2 - записать очки\n");
                                                    scanf_s("%d", &vibor44);
                                                    if (vibor44 == 1) {
                                                        brosok(mass2, &n);
                                                        output1(mass2, &n);
                                                        points(mass2, &points5, &n);
                                                        printf("\n%d - очки игрока2\n", points5);
                                                        if (points5 > 0)
                                                        {
                                                            if ((points_all1 >= 0 && points_all1 < 200) || (points_all1 >= 300 && points_all1 < 600) || (points_all1 >= 700)) {
                                                                points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                            }
                                                            if (points_all1 >= 200 && points_all1 < 300) {
                                                                if ((points1 + points2 + points3 + points4 + points5) < 300 - points_all1)
                                                                {
                                                                    points_all1 = points_all1;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                                }
                                                                else {
                                                                    points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                                }
                                                            }
                                                            if (points_all1 >= 600 && points_all1 < 700) {
                                                                if ((points1 + points2 + points3 + points4 + points5) < 700 - points_all1)
                                                                {
                                                                    points_all1 = points_all1;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                                }
                                                                else {
                                                                    points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                                }
                                                            }
                                                            printf("\nВСЕГО ОЧКОВ У ИГРОКА2 - %d\n", points_all1);
                                                        }
                                                        if (points5 == 0)
                                                        {
                                                            printf("\nОЧКИ ИГРОКА2 ЗА ХОД - 0\n");
                                                            break;
                                                        }
                                                    }
                                                    if (vibor44 == 2) {
                                                        if ((points_all1 >= 0 && points_all1 < 200) || (points_all1 >= 300 && points_all1 < 600) || (points_all1 >= 700)) {
                                                            points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                        }
                                                        if (points_all1 >= 200 && points_all1 < 300) {
                                                            if ((points1 + points2 + points3 + points4) < 300 - points_all1)
                                                            {
                                                                points_all1 = points_all1;
                                                                printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                            }
                                                            else {
                                                                points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                            }
                                                        }
                                                        if (points_all1 >= 600 && points_all1 < 700) {
                                                            if ((points1 + points2 + points3 + points4) < 700 - points_all1)
                                                            {
                                                                points_all1 = points_all1;
                                                                printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                            }
                                                            else {
                                                                points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                            }

                                                        }
                                                        printf("\nВСЕГО ОЧКОВ У ИГРОКА2 - %d\n", points_all1);
                                                        break;
                                                    }
                                                }
                                                if (points4 == 0)
                                                {
                                                    printf("\nОЧКИ ИГРОКА2 ЗА ХОД - 0\n");
                                                    break;
                                                }
                                            }
                                            if (vibor33 == 2) {
                                                if ((points_all1 >= 0 && points_all1 < 200) || (points_all1 >= 300 && points_all1 < 600) || (points_all1 >= 700)) {
                                                    points_all1 = points_all1 + points1 + points2 + points3;
                                                }
                                                if (points_all1 >= 200 && points_all1 < 300) {
                                                    if ((points1 + points2 + points3) < 300 - points_all1)
                                                    {
                                                        points_all1 = points_all1;
                                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                    }
                                                    else {
                                                        points_all1 = points_all1 + points1 + points2 + points3;
                                                    }
                                                }
                                                if (points_all1 >= 600 && points_all1 < 700) {
                                                    if ((points1 + points2 + points3) < 700 - points_all1)
                                                    {
                                                        points_all1 = points_all1;
                                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                    }
                                                    else {
                                                        points_all1 = points_all1 + points1 + points2 + points3;
                                                    }

                                                }
                                                printf("\nВСЕГО ОЧКОВ У ИГРОКА2 - %d\n", points_all1);
                                                break;
                                            }
                                        }
                                        if (points3 == 0)
                                        {
                                            printf("\nОЧКИ ИГРОКА2 ЗА ХОД - 0\n");
                                            break;
                                        }
                                    }
                                    if (vibor22 == 2) {
                                        if ((points_all1 >= 0 && points_all1 < 200) || (points_all1 >= 300 && points_all1 < 600) || (points_all1 >= 700)) {
                                            points_all1 = points_all1 + points1 + points2;
                                        }
                                        if (points_all1 >= 200 && points_all1 < 300) {
                                            if ((points1 + points2) < 300 - points_all1)
                                            {
                                                points_all1 = points_all1;
                                                printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                            }
                                            else {
                                                points_all1 = points_all1 + points1 + points2;
                                            }
                                        }
                                        if (points_all1 >= 600 && points_all1 < 700) {
                                            if ((points1 + points2) < 700 - points_all1)
                                            {
                                                points_all1 = points_all1;
                                                printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                            }
                                            else {
                                                points_all1 = points_all1 + points1 + points2;
                                            }

                                        }
                                        printf("\nВСЕГО ОЧКОВ У ИГРОКА2 - %d\n", points_all1);
                                        break;
                                    }
                                }
                                if (points2 == 0)
                                {
                                    printf("\nОЧКИ ИГРОКА2 ЗА ХОД - 0\n");
                                    break;
                                }
                            }
                            if (vibor11 == 2) {
                                if ((points_all1 >= 0 && points_all1 < 200) || (points_all1 >= 300 && points_all1 < 600) || (points_all1 >= 700)) {
                                    points_all1 = points_all1 + points1;
                                }
                                if (points_all1 >= 200 && points_all1 < 300) {
                                    if ((points1) < 300 - points_all1)
                                    {
                                        points_all1 = points_all1;
                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                    }
                                    else {
                                        points_all1 = points_all1 + points1;
                                    }
                                }
                                if (points_all1 >= 600 && points_all1 < 700) {
                                    if ((points1) < 700 - points_all1)
                                    {
                                        points_all1 = points_all1;
                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                    }
                                    else {
                                        points_all1 = points_all1 + points1;
                                    }

                                }
                                printf("\nВСЕГО ОЧКОВ У ИГРОКА2 - %d\n", points_all1);
                                break;
                            }
                        }
                        if (points1 == 0)
                        {
                            printf("\nОЧКИ ИГРОКА2 ЗА ХОД - 0\n");
                            break;
                        }
                    }
                }
                n = 5;
                points1 = 0;
                points2 = 0;
                points3 = 0;
                points4 = 0;
                points5 = 0;
            }
        } while (points_all <= 1000 || points_all1 <= 1000);
    }
}
