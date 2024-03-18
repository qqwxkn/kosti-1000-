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
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0,newpoints=0;
    for (int i = 0; i < 5; i++) {
        if (mass1[i] == 1) { k1 += 1; }
        if (mass1[i] == 2) { k2 += 1; }
        if (mass1[i] == 3) { k3 += 1; }
        if (mass1[i] == 4) { k4 += 1; }
        if (mass1[i] == 5) { k5 += 1; }
        if (mass1[i] == 6) { k6 += 1; }
    }
    //1
    if (k1 == 3) { newpoints += 100; }
    if (k1 == 4) { newpoints += 200; }
    if (k1 == 5) { newpoints += 1000; }
    if (k1 == 1 && ((k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) == 0)) { newpoints += 10; }
    if (k1 == 2) { newpoints += 20; }
    //2
    if (k2 == 3) { newpoints += 20; }
    if (k2 == 4) { newpoints += 40; }
    if (k2 == 5) { newpoints += 200; }
    //3
    if (k3 == 3) { newpoints += 30; }
    if (k3 == 4) { newpoints += 60; }
    if (k3 == 5) { newpoints += 300; }
    //4
    if (k4 == 3) { newpoints += 40; }
    if (k4 == 4) { newpoints += 80; }
    if (k4 == 5) { newpoints += 400; }
    //5
    if (k5 == 3) { newpoints += 50; }
    if (k5 == 4) { newpoints += 100; }
    if (k5 == 5) { newpoints += 500; }
    if (k5 == 1) { newpoints += 5; }
    if (k5 == 2) { newpoints += 10; }
    //6
    if (k6 == 3) { newpoints += 60; }
    if (k6 == 4) { newpoints += 120; }
    if (k6 == 5) { newpoints += 600; }
    //другие комбинации
    if (k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) { newpoints += 120; }
    if (k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1 && k6 == 1) { newpoints += 245; }
    if ((*points1 < 200 || *points1 >= 300) && (*points1 < 600 || *points1 >= 700))
    {
        *points1 += newpoints;
    }
    if (*points1 >= 200 && *points1 < 300) {
        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ваш ход набрать %d и больше очков\n", 300 - *points1);
        if (newpoints >= 300 - *points1)
        {
            *points1 += newpoints;
            printf("\nвы выбрались из ямы\n");
        }
    }
    if (*points1 >= 600 && *points1 < 700) {
        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ваш ход набрать %d и больше очков\n", 700 - *points1);
        if (newpoints >= 700 - *points1)
        {
            *points1 += newpoints;
            printf("\nвы выбрались из ямы\n");
        }
    }

}
void points22(int mass2[6], int* points2)
{
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0, newpoints = 0;
    for (int i = 0; i < 5; i++) {
        if (mass2[i] == 1) { k1 += 1; }
        if (mass2[i] == 2) { k2 += 1; }
        if (mass2[i] == 3) { k3 += 1; }
        if (mass2[i] == 4) { k4 += 1; }
        if (mass2[i] == 5) { k5 += 1; }
        if (mass2[i] == 6) { k6 += 1; }
    }
    //1
    if (k1 == 3) { newpoints += 100; }
    if (k1 == 4) { newpoints += 200; }
    if (k1 == 5) { newpoints += 1000; }
    if (k1 == 1 && ((k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) == 0)) { newpoints += 10; }
    if (k1 == 2) { newpoints += 20; }
    //2
    if (k2 == 3) { newpoints += 20; }
    if (k2 == 4) { newpoints += 40; }
    if (k2 == 5) { newpoints += 200; }
    //3
    if (k3 == 3) { newpoints += 30; }
    if (k3 == 4) { newpoints += 60; }
    if (k3 == 5) { newpoints += 300; }
    //4
    if (k4 == 3) { newpoints += 40; }
    if (k4 == 4) { newpoints += 80; }
    if (k4 == 5) { newpoints += 400; }
    //5
    if (k5 == 3) { newpoints += 50; }
    if (k5 == 4) { newpoints += 100; }
    if (k5 == 5) { newpoints += 500; }
    if (k5 == 1) { newpoints += 5; }
    if (k5 == 2) { newpoints += 10; }
    //6
    if (k6 == 3) { newpoints += 60; }
    if (k6 == 4) { newpoints += 120; }
    if (k6 == 5) { newpoints += 600; }
    //другие комбинации
    if (k1 == 1 && k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1) { newpoints += 120; }
    if (k2 == 1 && k3 == 1 && k4 == 1 && k5 == 1 && k6 == 1) { newpoints += 245; }
    if ((*points2 < 200 || *points2 >= 300) && (*points2 < 600 || *points2 >= 700))
    {
        *points2 += newpoints;
    }
    if (*points2 >= 200 && *points2 < 300) {
        if (newpoints >= 300 - *points2)
        {
            *points2 += newpoints;
            printf("\nпк выбрался из ямы\n");
        }
    }
    if (*points2 >= 200 && *points2 < 300) {
        printf("\nпк находится в яме, чтобы выбраться ему надо за ход набрать %d и больше очков\n", 300 - *points2);
    }
    if (*points2 >= 600 && *points2 < 700) {
        printf("\nпк находитесь в яме, чтобы выбраться ему надо за ход набрать %d и больше очков\n", 700 - *points2);
        if (newpoints >= 700 - *points2)
        {
            *points2 += newpoints;
            printf("\nпк выбрался из ямы\n");
        }
    }
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