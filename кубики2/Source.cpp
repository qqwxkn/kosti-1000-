#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <time.h>

void brosok(int mass1[6], int mass2[6])
{
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        mass1[i] = rand() % (6 - 1 + 1) + 1;
    }
    for (int i = 0; i < 5; i++) {
        mass2[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void brosok1(int mass11[6], int mass22[6])
{
    srand(time(0));
    for (int i = 0; i < 4; i++) {
        mass11[i] = rand() % (6 - 1 + 1) + 1;
    }
    for (int i = 0; i < 4; i++) {
        mass22[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void brosok2(int mass11[6], int mass22[6])
{
    srand(time(0));
    for (int i = 0; i < 3; i++) {
        mass11[i] = rand() % (6 - 1 + 1) + 1;
    }
    for (int i = 0; i < 3; i++) {
        mass22[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void brosok3(int mass11[6], int mass22[6])
{
    srand(time(0));
    for (int i = 0; i < 2; i++) {
        mass11[i] = rand() % (6 - 1 + 1) + 1;
    }
    for (int i = 0; i < 2; i++) {
        mass22[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void brosok4(int mass11[6], int mass22[6])
{
    srand(time(0));
    for (int i = 0; i < 1; i++) {
        mass11[i] = rand() % (6 - 1 + 1) + 1;
    }
    for (int i = 0; i < 1; i++) {
        mass22[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void points11(int mass1[6], int* points1)
{
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0;
    for (int i = 0; i < 5; i++) {
        if (mass1[i] == 1) { k1 += 1; }
        if (mass1[i] == 2) { k2 += 1; }
        if (mass1[i] == 3) { k3 += 1; }
        if (mass1[i] == 4) { k4 += 1; }
        if (mass1[i] == 5) { k5 += 1; }
        if (mass1[i] == 6) { k6 += 1; }
    }
    //1
    if (k1 == 3) { *points1 += 100; }
    if (k1 == 4) { *points1 += 200; }
    if (k1 == 5) { *points1 += 1000; }
    if (k1 == 1 && ((k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) == 0)) { *points1 += 10; }
    if (k1 == 2) { *points1 += 20; }
    //2
    if (k2 == 3) { *points1 += 20; }
    if (k2 == 4) { *points1 += 40; }
    if (k2 == 5) { *points1 += 200; }
    //3
    if (k3 == 3) { *points1 += 30; }
    if (k3 == 4) { *points1 += 60; }
    if (k3 == 5) { *points1 += 300; }
    //4
    if (k4 == 3) { *points1 += 40; }
    if (k4 == 4) { *points1 += 80; }
    if (k4 == 5) { *points1 += 400; }
    //5
    if (k5 == 3) { *points1 += 50; }
    if (k5 == 4) { *points1 += 100; }
    if (k5 == 5) { *points1 += 500; }
    if (k5 == 1) { *points1 += 5; }
    if (k5 == 2) { *points1 += 10; }
    //6
    if (k6 == 3) { *points1 += 60; }
    if (k6 == 4) { *points1 += 120; }
    if (k6 == 5) { *points1 += 600; }
    //другие комбинации
    if (k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) { *points1 += 120; }
    if (k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1 && k6 == 1) { *points1 += 245; }
    if (*points1 >= 200 && *points1 < 300) {
        printf("\nвы попали в яму, чтобы выбраться вам надо за ваш ход набрать %d и больше очков\n", 300 - *points1);
        if (*points1+= 300 - *points1 >= 300 - *points1)
        {
            printf("\nвы проскочили яму\n");
        }
    }
}
void points22(int mass2[6], int* points2)
{
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0;
    for (int i = 0; i < 5; i++) {
        if (mass2[i] == 1) { k1 += 1; }
        if (mass2[i] == 2) { k2 += 1; }
        if (mass2[i] == 3) { k3 += 1; }
        if (mass2[i] == 4) { k4 += 1; }
        if (mass2[i] == 5) { k5 += 1; }
        if (mass2[i] == 6) { k6 += 1; }
    }
    //1
    if (k1 == 3) { *points2 += 100; }
    if (k1 == 4) { *points2 += 200; }
    if (k1 == 5) { *points2 += 1000; }
    if (k1 == 1 && ((k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) == 0)) { *points2 += 10; }
    if (k1 == 2) { *points2 += 20; }
    //2
    if (k2 == 3) { *points2 += 20; }
    if (k2 == 4) { *points2 += 40; }
    if (k2 == 5) { *points2 += 200; }
    //3
    if (k3 == 3) { *points2 += 30; }
    if (k3 == 4) { *points2 += 60; }
    if (k3 == 5) { *points2 += 300; }
    //4
    if (k4 == 3) { *points2 += 40; }
    if (k4 == 4) { *points2 += 80; }
    if (k4 == 5) { *points2 += 400; }
    //5
    if (k5 == 3) { *points2 += 50; }
    if (k5 == 4) { *points2 += 100; }
    if (k5 == 5) { *points2 += 500; }
    if (k5 == 1) { *points2 += 5; }
    if (k5 == 2) { *points2 += 10; }
    //6
    if (k6 == 3) { *points2 += 60; }
    if (k6 == 4) { *points2 += 120; }
    if (k6 == 5) { *points2 += 600; }
    //другие комбинации
    if (k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) { *points2 += 120; }
    if (k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1 && k6 == 1) { *points2 += 245; }
}
int main()
{
    setlocale(LC_ALL, "");
    int mass1[6], mass2[6];
    int vibor, vibor3, points1 = 0, points2 = 0, vibor1, vibor2, vibor4;
    printf("начать игру ?\n1-да\n2-нет\n"); scanf_s("%d", &vibor);
    if (vibor == 1) {
        brosok(mass1, mass2);
        printf("ваш бросок: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", mass1[i]);
        }
        printf("\n");
        printf("бросок пк: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", mass2[i]);
        }
        points11(mass1, &points1);
        points22(mass2, &points2);
        printf("\nваши очки - %d", points1);
        printf("\nочки пк - %d\n", points2);
    }
    if (vibor == 2) {
        return 1;
    }
    if (points1 == points2) {
        printf("\nвыпало одинаковое количество очков\n");
        printf("1 - кинуть кубики\n2 - закончить игру\n");
        scanf_s("%d", &vibor3);
        if (vibor3 == 1) {
            do {
                points1 = 0;
                points2 = 0;
                brosok(mass1, mass2);
                points11(mass1, &points1);
                points11(mass2, &points2);
            } while (points1 == points2);
            printf("ваш бросок: ");
            for (int i = 0; i < 5; i++) {
                printf("%d ", mass1[i]);
            }
            printf("\n");
            printf("бросок пк: ");
            for (int i = 0; i < 5; i++) {
                printf("%d ", mass2[i]);
            }
            printf("\nваши очки - %d", points1);
            printf("\nочки пк - %d\n", points2);
        }
        if (vibor3 == 2) {
            return 1;
        }
    }
    if (points1 > points2) {
        printf("\nу вас очков больше, вы бросаете первым\n");
        printf("1 - играть дальше\n2 - заверишть игру\n");
        scanf_s("%d", &vibor2);
        if (vibor2 == 1) 
        {
            points1 = 0;
            points2 = 0;
            while (1)
            {
                printf("\n1 - бросить кубик\n2 - завершить игру\n");
                scanf_s("%d", &vibor1);
                if (vibor1 == 1)
                {
                    brosok(mass1, mass2);
                    points11(mass1, &points1);
                    points22(mass2, &points2);
                    printf("ваш бросок: ");
                    for (int i = 0; i < 5; i++) {
                        printf("%d ", mass1[i]);
                    }
                    printf("\nваши очки - %d", points1);
                    if (points1 < 50) {
                        printf("\nвы набрили меньше 50 очков, <открыть игру не получилось>\n");
                        points1 = 0;
                    }
                    printf("\n");
                    printf("\nбросок пк: ");
                    for (int i = 0; i < 5; i++) {
                        printf("%d ", mass2[i]);
                    }
                    printf("\nочки пк - %d\n", points2);
                    if (points2 < 50) {
                        printf("\nпк набрал меньше 50 очков, <открыть игру не получилось>\n");
                        points2 = 0;
                    }
                }
                if (points1 >= 1000) {
                    printf("\n\nвы победили!!\n\n");
                    break;
                }
                if (points2 >= 1000) {
                    printf("\n\nвы проиграли!!\n\n");
                    break;
                }
                if (vibor1 == 2) {
                    break;
                }
            }
        }
        if (vibor2 == 2)
        {
            return 1;
        }
    }
    if (points1 < points2)
    {
        printf("\nу пк очков больше, вы бросаете вторым\n");
        printf("1 - играть дальше\n2 - заверишть игру\n");
        scanf_s("%d", &vibor2);
        if (vibor2 == 1) {
            points1 = 0;
            points2 = 0;
            while (1)
            {
                brosok(mass1, mass2);
                points22(mass2, &points2);
                printf("\nбросок пк: ");
                for (int i = 0; i < 5; i++) {
                    printf("%d ", mass2[i]);
                }
                printf("\nочки пк - %d\n", points2);
                if (points2 < 50) {
                    printf("\nпк набрал меньше 50 очков, <открыть игру не получилось>\n");
                    points2 = 0;
                }
                printf("\n1 - бросить кубик: \n2 - завершить игру: \n");
                scanf_s("%d", &vibor1);
                if (vibor1 == 1) {
                    points11(mass1, &points1);
                    printf("ваш бросок: ");
                    for (int i = 0; i < 5; i++) {
                        printf("%d ", mass1[i]);
                    }
                    printf("\nваши очки - %d\n", points1);
                    if (points1 < 50) {
                        printf("\nвы набрили меньше 50 очков, <открыть игру не получилось>\n");
                        points1 = 0;
                    }
                }
                if (points1 >= 1000) {
                    printf("\n\nвы победили!!\n\n");
                    break;
                }
                if (points2 >= 1000) {
                    printf("\n\nвы проиграли!!\n\n");
                    break;
                }
                if (vibor1 == 2)
                {
                    break;
                }
            }
        }
        if (vibor2 == 2)
        {
            return 1;
        }
    }
}