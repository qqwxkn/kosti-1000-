#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <time.h>

void brosok(int mass1[6], int *n)
{
    srand(time(0));
    for (int i = 0; i < *n; i++) {
        mass1[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void brosok1(int mass1[6], int* n)
{
    srand(time(0) + 1);
    for (int i = 0; i < *n; i++) {
        mass1[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void brosok2(int mass1[6], int* n)
{
    srand(time(0) + 2);
    for (int i = 0; i < *n; i++) {
        mass1[i] = rand() % (6 - 1 + 1) + 1;
    }
}
void output1(int* mass, int *n)
{
    for (int i = 0; i < *n; i++)
    {
        if (mass[i] == 1)
        {
            printf(".-------.\n");
            printf("|       |\n");
            printf("|   *   |\n");
            printf("|       |\n");
            printf("'-------'\n");
        }
        if (mass[i] == 2)
        {
            printf(".-------.\n");
            printf("| *     |\n");
            printf("|       |\n");
            printf("|     * |\n");
            printf("'-------'\n");
        }
        if (mass[i] == 3)
        {
            printf(".-------.\n");
            printf("| *     |\n");
            printf("|   *   |\n");
            printf("|     * |\n");
            printf("'-------'\n");
        }
        if (mass[i] == 4)
        {
            printf(".-------.\n");
            printf("| *   * |\n");
            printf("|       |\n");
            printf("| *   * |\n");
            printf("'-------'\n");
        }
        if (mass[i] == 5)
        {
            printf(".-------.\n");
            printf("| *   * |\n");
            printf("|   *   |\n");
            printf("| *   * |\n");
            printf("'-------'\n");
        }
        if (mass[i] == 6)
        {
            printf(".-------.\n");
            printf("| *   * |\n");
            printf("| *   * |\n");
            printf("| *   * |\n");
            printf("'-------'\n");
        }
    }
}
void points(int mass[6], int* points, int *n)
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
    if (k1 == 5) { newpoints += 1000;*n = 5; }
    if (k1 == 1) { newpoints += 10; *n = *n - 1; }
    if (k1 == 2) { newpoints += 20; *n = *n - 2; }
    //2
    if (k2 == 3) { newpoints += 20;*n = *n - 3; }
    if (k2 == 4) { newpoints += 40;*n = *n - 4; }
    if (k2 == 5) { newpoints += 200; *n = 5; }
    //3
    if (k3 == 3) { newpoints += 30; *n = *n - 3; }
    if (k3 == 4) { newpoints += 60; *n = *n - 4; }
    if (k3 == 5) { newpoints += 300; *n = 5; }
    //4
    if (k4 == 3) { newpoints += 40; *n = *n - 3; }
    if (k4 == 4) { newpoints += 80; *n = *n - 4;}
    if (k4 == 5) { newpoints += 400; *n = 5;}
    //5
    if (k5 == 3) { newpoints += 50;*n = *n - 3; }
    if (k5 == 4) { newpoints += 100; *n = *n - 4;}
    if (k5 == 5) { newpoints += 500; *n = 5;}
    if (k5 == 1) { newpoints += 5; *n = *n - 1;}
    if (k5 == 2) { newpoints += 10; *n = *n - 2;}
    //6
    if (k6 == 3) { newpoints += 60;*n = *n - 3; }
    if (k6 == 4) { newpoints += 120; *n = *n - 4;}
    if (k6 == 5) { newpoints += 600; *n = 5;}
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
}
int main()
{
    setlocale(LC_ALL, "");
    int mass1[6], mass2[6];
    int vibor_igry = 0, vibor, vibor1, vibor111, vibor2, vibor3, vibor4, vibor5, points_all = 0, points_all1 = 0, points1 = 0, points2 = 0, points3 = 0, points4 = 0, points5 = 0, n = 5, score1 = 0, score2 = 0;
    int vibor_1, vibor11, vibor22, vibor33, vibor44, viborka1, viborka2, points_viborka1 = 0, points_viborka2 = 0, k = 0, k1 = 0, bolt1 = 0, bolt2 = 0, vibor21, vibor23;
    printf("\n\nИгра в кости 1000 (классика,без бочки)\n\n");
    do {
        printf("\nрежимы игры:\n");
        printf("\n1 - против пк\n2 - против игрока2\n");
        printf("\nвыберите режим игры: ");
        scanf_s("%d", &vibor_igry);
    } while (vibor_igry > 2 || vibor_igry < 1);
    printf("\n");
    while (score1 <= 1000 || score2 <= 1000)
    {
        if (vibor_igry == 1) 
        {
            printf("\n1 - играть\n2 - завершить\n"); scanf_s("%d", &vibor);
            if (vibor == 1) {
                printf("\nсейчас будет произведен бросок кубиков по очереди, у кого очков больше тот и начинает\n");
                brosok(mass2, &n);
                output1(mass2, &n);
                points(mass2, &points_viborka2, &n);
                printf("\n%d - очки пк\n", points_viborka2);
                n = 5;
                printf("\n1 - бросить кубики\n2 - завершить игру\n");
                scanf_s("%d", &viborka1);
                if (viborka1 == 1) {
                    brosok(mass1, &n);
                    output1(mass1, &n);
                    points(mass1, &points_viborka1, &n);
                    printf("\n%d - ваши очки\n", points_viborka1);
                    n = 5;
                }
                if (viborka1 == 2) {
                    break;
                }
                if(viborka1 > 2 || viborka1 < 1)
                {
                    do {
                        printf("\n1 - бросить кубики\n2 - завершить игру\n");
                        scanf_s("%d", &viborka1);
                    } while (viborka1 > 2 || viborka1 < 1);
                }
                
            }
            else {
                break;
            }
            if (points_viborka1 == points_viborka2) {
                printf("\nвыпало одинаковое количество очков\n1-бросить кубики еще раз\n");
                while (points_viborka2 == points_viborka1) {
                    brosok(mass2, &n);
                    output1(mass2, &n);
                    points(mass2, &points_viborka2, &n);
                    printf("\n%d - очки пк\n", points_viborka2);
                    n = 5;
                    printf("\n1 - бросить кубики\n2 - завершить игру\n");
                    scanf_s("%d", &viborka2);
                    if (viborka2 == 1) {
                        brosok(mass1, &n);
                        output1(mass1, &n);
                        points(mass1, &points_viborka1, &n);
                        printf("\n%d - ваши очки\n", points_viborka1);
                        n = 5;
                    }
                    else {
                        break;
                    }
                }
            }
            if (points_viborka1 > points_viborka2)
            {
                printf("\nу вас очков больше, вы начинаетe первым\n");
                do {
                    if (vibor == 1) {
                        printf("\n1 - продолжить\n2 - завершить игру\n");
                        scanf_s("%d", &vibor21);
                        if (vibor21 == 2) {
                            break;
                        }
                        printf("\n\nваш ход\n\n");
                        while (1) {
                            points1 = 0;
                            points2 = 0;
                            points3 = 0;
                            points4 = 0;
                            points5 = 0;
                            printf("\n1 - бросить кубики\n");
                            scanf_s("%d", &vibor111);
                            if (vibor111 == 1) {
                                brosok(mass1, &n);
                                output1(mass1, &n);
                                points(mass1, &points1, &n);
                                printf("\n%d - ваши очки\n", points1);
                                if (points1 > 0)
                                {
                                    printf("\n1 - бросить кубики\n2 - записать очки\n");
                                    scanf_s("%d", &vibor1);
                                    if (vibor1 == 1)
                                    {
                                        brosok(mass1, &n);
                                        output1(mass1, &n);
                                        points(mass1, &points2, &n);
                                        printf("\n%d - ваши очки\n", points2);
                                        if (points2 > 0)
                                        {
                                            printf("\n1 - бросить кубики\n2 - записать очки\n");
                                            scanf_s("%d", &vibor2);
                                            if (vibor2 == 1) {
                                                brosok(mass1, &n);
                                                output1(mass1, &n);
                                                points(mass1, &points3, &n);
                                                printf("\n%d - ваши очки\n", points3);
                                                if (points3 > 0)
                                                {
                                                    printf("\n1 - бросить кубики\n2 - записать очки\n");
                                                    scanf_s("%d", &vibor3);
                                                    if (vibor3 == 1) {
                                                        brosok(mass1, &n);
                                                        output1(mass1, &n);
                                                        points(mass1, &points4, &n);
                                                        printf("\n%d - ваши очки\n", points4);
                                                        if (points4 > 0)
                                                        {
                                                            printf("\n1 - бросить кубики\n2 - записать очки\n");
                                                            scanf_s("%d", &vibor4);
                                                            if (vibor4 == 1) {
                                                                brosok(mass1, &n);
                                                                output1(mass1, &n);
                                                                points(mass1, &points5, &n);
                                                                printf("\n%d - ваши очки\n", points5);
                                                                if (points5 > 0)
                                                                {
                                                                    points_all = points_all + points1 + points2 + points3 + points4 + points5;
                                                                }
                                                                if (points5 == 0)
                                                                {
                                                                    if (points_all != 0) {
                                                                        points_all = 0;
                                                                    }
                                                                    break;
                                                                }
                                                            }
                                                            if (vibor4 == 2) {
                                                                if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                                    points_all = points_all + points1 + points2 + points3 + points4;
                                                                }
                                                                if (score1 >= 200 && score1 < 300) {
                                                                    if ((points1 + points2 + points3 + points4) < 300 - score1)
                                                                    {
                                                                        points_all = points_all;
                                                                        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 300 \n");
                                                                    }
                                                                    else {
                                                                        points_all = points_all + points1 + points2 + points3 + points4;
                                                                    }
                                                                }
                                                                if (score1 >= 600 && score1 < 700) {
                                                                    if ((points1 + points2 + points3 + points4) < 700 - score1)
                                                                    {
                                                                        points_all = points_all;
                                                                        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 700 \n");
                                                                    }
                                                                    else {
                                                                        points_all = points_all + points1 + points2 + points3 + points4;
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        if (points4 == 0)
                                                        {
                                                            if (points_all != 0) {
                                                                points_all = 0;
                                                            }
                                                            break;
                                                        }
                                                    }
                                                    if (vibor3 == 2) {
                                                        if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                            points_all = points_all + points1 + points2 + points3;
                                                        }
                                                        if (score1 >= 200 && score1 < 300) {
                                                            if ((points1 + points2 + points3) < 300 - score1)
                                                            {
                                                                points_all = points_all;
                                                                printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 300 \n");
                                                            }
                                                            else {
                                                                points_all = points_all + points1 + points2 + points3;
                                                            }
                                                        }
                                                        if (score1 >= 600 && score1 < 700) {
                                                            if ((points1 + points2 + points3) < 700 - score1)
                                                            {
                                                                points_all = points_all;
                                                                printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 700 \n");
                                                            }
                                                            else {
                                                                points_all = points_all + points1 + points2 + points3;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                }
                                                if (points3 == 0)
                                                {
                                                    if (points_all != 0) {
                                                        points_all = 0;
                                                    }
                                                    break;
                                                }
                                            }
                                            if (vibor2 == 2) {
                                                if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                    points_all = points_all + points1 + points2;
                                                }
                                                if (score1 >= 200 && score1 < 300) {
                                                    if ((points1 + points2) < 300 - score1)
                                                    {
                                                        points_all = points_all;
                                                        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 300 \n");
                                                    }
                                                    else {
                                                        points_all = points_all + points1 + points2;
                                                    }
                                                }
                                                if (score1 >= 600 && score1 < 700) {
                                                    if ((points1 + points2) < 700 - score1)
                                                    {
                                                        points_all = points_all;
                                                        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 700 \n");;
                                                    }
                                                    else {
                                                        points_all = points_all + points1 + points2;
                                                    }
                                                }
                                                break;
                                            }
                                        }
                                        if (points2 == 0)
                                        {
                                            if (points_all != 0) {
                                                points_all = 0;
                                            }
                                            break;
                                        }
                                    }
                                    if (vibor1 == 2) {
                                        if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                            points_all = points_all + points1;
                                        }
                                        if (score1 >= 200 && score1 < 300) {
                                            if ((points1) < 300 - score1)
                                            {
                                                points_all = points_all;
                                                printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 300 \n");
                                            }
                                            else {
                                                points_all = points_all + points1;
                                            }
                                        }
                                        if (score1 >= 600 && score1 < 700) {
                                            if ((points1) < 700 - score1)
                                            {
                                                points_all = points_all;
                                                printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 700 \n");
                                            }
                                            else {
                                                points_all = points_all + points1;
                                            }
                                        }
                                        break;
                                    }
                                }
                                if (points1 == 0)
                                {
                                    if (points_all != 0) {
                                        points_all = 0;
                                    }
                                    break;
                                }
                            }
                        }
                        score1 = score1 + points_all;
                        if (points_all == 0 && k == 1) {
                            bolt1++;
                        }
                        if (score1 < 50 && k == 0) {
                            printf("\nвам открыть игру не удалось\n");
                            score1 = 0;
                        }
                        if (score1 >= 50 || k == 1) {
                            k = 1;
                            printf("\nвсего у вас за ход очков - %d\n", points_all);
                            printf("\nобщее кол-во ваших очков - %d\n", score1);
                            printf("\nкол-во болтов у вас - %d\n", bolt1);
                        }
                        if (score1 > score2 && score1 - points_all < score2) {
                            printf("\nвы выполнили обгон\nу пк снято 50 очков\n");
                            score2 = score2 - 50;
                        }
                        points_all = 0;
                        if (bolt1 == 3)
                        {
                            printf("\nу вас - 3 болта, у вас будут вычтены 100 очков\n");
                            score1 = score1 - 100;
                            printf("\nтекущее кол-во ваших очков - %d\n", score1);
                            bolt1 = 0;
                        }
                        if (score1 == 555) {
                            score1 = 0;
                            printf("вы попали на самосвал, с вас сняты все очки\nтекущее кол-во очков - %d\n", score1);
                        }
                        printf("\n1 - продолжить\n");
                        scanf_s("%d", &vibor5);
                        n = 5;
                        points1 = 0;
                        points2 = 0;
                        points3 = 0;
                        points4 = 0;
                        points5 = 0;
                        printf("\n\nход пк\n\n");
                        while (1) {
                            points1 = 0;
                            points2 = 0;
                            points3 = 0;
                            points4 = 0;
                            points5 = 0;
                            brosok1(mass2, &n);
                            output1(mass2, &n);
                            points(mass2, &points1, &n);
                            printf("\n%d - пк\n", points1);
                            if (points1 >= 50) {
                                if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                    points_all1 = points_all1 + points1;
                                }
                                if (score2 >= 200 && score2 < 300) {
                                    if ((points1) < 300 - score2)
                                    {
                                        points_all1 = points_all1;
                                        printf("\nпк находится в яме, чтобы выбраться ему надо за ход переступить 300 \n");
                                    }
                                    else {
                                        points_all1 = points_all1 + points1;
                                    }
                                }
                                if (score2  >= 600 && score2 < 700) {
                                    if ((points1) < 700 - score2)
                                    {
                                        points_all1 = points_all1;
                                        printf("\nпк находится в яме, чтобы выбраться ему надо за ход переступить 700 \n");
                                    }
                                    else {
                                        points_all1 = points_all + points1;
                                    }
                                }
                                break;
                            }
                            if (points1 > 0) {
                                brosok2(mass2, &n);
                                output1(mass2, &n);
                                points(mass2, &points2, &n);
                                printf("\n%d - пк\n", points2);
                                if (points2 > 0)
                                {
                                    if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                        points_all1 = points_all1 + points1 + points2;
                                    }
                                    if (score2 >= 200 && score2 < 300) {
                                        if ((points1 + points2) < 300 - score2)
                                        {
                                            points_all1 = points_all1;
                                            printf("\nпк находится в яме, чтобы выбраться ему надо за ход переступить 300 \n");
                                        }
                                        else {
                                            points_all1 = points_all1 + points1 + points2;
                                        }
                                    }
                                    if (score2 >= 600 && score2 < 700) {
                                        if ((points1 + points2) < 700 - score2)
                                        {
                                            points_all1 = points_all1;
                                            printf("\nпк находится в яме, чтобы выбраться ему надо за ход переступить 700 \n");
                                        }
                                        else {
                                            points_all1 = points_all + points1 + points2;
                                        }
                                    }
                                    break;
                                }
                                if (points2 == 0)
                                {
                                    if (points_all1 != 0) {
                                        points_all1 = 0;
                                    }
                                    break;
                                }
                            }
                            if (points1 == 0)
                            {
                                if (points_all1 != 0) {
                                    points_all1 = 0;
                                }
                                break;
                            }
                        }
                        score2 = score2 + points_all1;
                        if (points_all1 == 0 && k1 == 1) {
                            bolt2++;
                        }
                        if (score2 < 30 && k1 == 0) {
                            printf("\nпк открыть игру не удалось\n");
                            score2 = 0;
                        }
                        if (score2 >= 30 || k1 == 1) {
                            k1 = 1;
                            printf("\nвсего за ход очков у пк - %d\n", points_all1);
                            printf("\nобщее кол-во очков пк - %d\n", score2);
                            printf("\nкол-во болтов у пк - %d\n", bolt2);
                        }
                        if (score2 > score1 && score2 - points_all1 < score1) {
                            printf("\n\nпк выполнил обгон\nу вас снято 50 очков\n\n");
                            score1 = score1 - 50;
                        }
                        points_all1 = 0;
                        if (bolt2 == 3)
                        {
                            printf("\nу пк - 3 болта, у него будут вычтены 100 очков\n");
                            score2 = score2 - 100;
                            printf("\nтекущее кол-во очков пк - %d\n", score2);
                            bolt2 = 0;
                        }
                        if (score2 == 555) {
                            score2 = 0;
                            printf("пк попал на самосвал, с него сняты все очки\nтекущее кол-во очков - %d\n", score2);
                        }
                        n = 5;
                        points1 = 0;
                        points2 = 0;
                        points3 = 0;
                        points4 = 0;
                        points5 = 0;
                    }
                } while (score1 <= 1000 || score2 <= 1000);
                if (score1 > 1000) {
                    printf("\nвы победили\n");
                }
                if (score2 > 1000) {
                    printf("\nвы проиграли\n");
                }
            }
            if (points_viborka1 < points_viborka2)
            {
                printf("\nу пк очков больше, вы ходите вторым\n");
                do {
                    if (vibor == 1) {
                        printf("\nход пк\n");
                        while (1) {
                            points1 = 0;
                            points2 = 0;
                            points3 = 0;
                            points4 = 0;
                            points5 = 0;
                            brosok1(mass2, &n);
                            output1(mass2, &n);
                            points(mass2, &points1, &n);
                            printf("\n%d - пк\n", points1);
                            if (points1 >= 50) {
                                if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                    points_all1 = points_all1 + points1;
                                }
                                if (score2 >= 200 && score2 < 300) {
                                    if ((points1) < 300 - score2)
                                    {
                                        points_all1 = points_all1;
                                        printf("\nпк находится в яме, чтобы выбраться ему надо за ход переступить 300 \n");
                                    }
                                    else {
                                        points_all1 = points_all1 + points1;
                                    }
                                }
                                if (score2 >= 600 && score2 < 700) {
                                    if ((points1) < 700 - score2)
                                    {
                                        points_all1 = points_all1;
                                        printf("\nпк находится в яме, чтобы выбраться ему надо за ход переступить 700 \n");
                                    }
                                    else {
                                        points_all1 = points_all + points1;
                                    }
                                }
                                break;
                            }
                            if (points1 > 0) {
                                brosok2(mass2, &n);
                                output1(mass2, &n);
                                points(mass2, &points2, &n);
                                printf("\n%d - пк\n", points2);
                                if (points2 > 0)
                                {
                                    if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                        points_all1 = points_all1 + points1 + points2;
                                    }
                                    if (score2 >= 200 && score2 < 300) {
                                        if ((points1 + points2) < 300 - score2)
                                        {
                                            points_all1 = points_all1;
                                            printf("\nпк находится в яме, чтобы выбраться ему надо за ход переступить 300 \n");
                                        }
                                        else {
                                            points_all1 = points_all1 + points1 + points2;
                                        }
                                    }
                                    if (score2 >= 600 && score2 < 700) {
                                        if ((points1 + points2) < 700 - score2)
                                        {
                                            points_all1 = points_all1;
                                            printf("\nпк находится в яме, чтобы выбраться ему надо за ход переступить 700 \n");
                                        }
                                        else {
                                            points_all1 = points_all + points1 + points2;
                                        }
                                    }
                                    break;
                                }
                                if (points2 == 0)
                                {
                                    if (points_all1 != 0) {
                                        points_all1 = 0;
                                    }
                                    break;
                                }
                            }
                            if (points1 == 0)
                            {
                                if (points_all1 != 0) {
                                    points_all1 = 0;
                                }
                                break;
                            }
                        }
                        score2 = score2 + points_all1;
                        if (points_all1 == 0 && k1 == 1) {
                            bolt2++;
                        }
                        if (score2 < 30 && k1 == 0) {
                            printf("\nпк открыть игру не удалось\n");
                            score2 = 0;
                        }
                        if (score2 >= 30 || k1 == 1) {
                            k1 = 1;
                            printf("\nвсего за ход очков у пк - %d\n", points_all1);
                            printf("\nобщее кол-во очков пк - %d\n", score2);
                            printf("\nкол-во болтов у пк - %d\n", bolt2);
                        }
                        if (score2 > score1 && score2 - points_all1 < score1) {
                            printf("\n\nпк выполнил обгон\nу вас снято 50 очков\n\n");
                            score1 = score1 - 50;
                        }

                        points_all1 = 0;
                        if (bolt2 == 3)
                        {
                            printf("\nу пк - 3 болта, у него будут вычтены 100 очков\n");
                            score2 = score2 - 100;
                            printf("\nтекущее кол-во очков пк - %d\n", score2);
                            bolt2 = 0;
                        }
                        if (score2 == 555) {
                            score2 = 0;
                            printf("пк попал на самосвал, с него сняты все очки\nтекущее кол-во очков - %d\n", score2);
                        }
                        n = 5;
                        points1 = 0;
                        points2 = 0;
                        points3 = 0;
                        points4 = 0;
                        points5 = 0;
                        printf("\n1 - продолжить\n2 - завершить игру\n");
                        scanf_s("%d", &vibor21);
                        if (vibor21 == 2) {
                            break;
                        }
                        printf("\nваш ход\n");
                        while (1) {
                            points1 = 0;
                            points2 = 0;
                            points3 = 0;
                            points4 = 0;
                            points5 = 0;
                            printf("\n1 - бросить кубики\n");
                            scanf_s("%d", &vibor111);
                            if (vibor111 == 1) {
                                brosok(mass1, &n);
                                output1(mass1, &n);
                                points(mass1, &points1, &n);
                                printf("\n%d - ваши очки\n", points1);
                                if (points1 > 0)
                                {
                                    printf("\n1 - бросить кубики\n2 - записать очки\n");
                                    scanf_s("%d", &vibor1);
                                    if (vibor1 == 1)
                                    {
                                        brosok(mass1, &n);
                                        output1(mass1, &n);
                                        points(mass1, &points2, &n);
                                        printf("\n%d - ваши очки\n", points2);
                                        if (points2 > 0)
                                        {
                                            printf("\n1 - бросить кубики\n2 - записать очки\n");
                                            scanf_s("%d", &vibor2);
                                            if (vibor2 == 1) {
                                                brosok(mass1, &n);
                                                output1(mass1, &n);
                                                points(mass1, &points3, &n);
                                                printf("\n%d - ваши очки\n", points3);
                                                if (points3 > 0)
                                                {
                                                    printf("\n1 - бросить кубики\n2 - записать очки\n");
                                                    scanf_s("%d", &vibor3);
                                                    if (vibor3 == 1) {
                                                        brosok(mass1, &n);
                                                        output1(mass1, &n);
                                                        points(mass1, &points4, &n);
                                                        printf("\n%d - ваши очки\n", points4);
                                                        if (points4 > 0)
                                                        {
                                                            printf("\n1 - бросить кубики\n2 - записать очки\n");
                                                            scanf_s("%d", &vibor4);
                                                            if (vibor4 == 1) {
                                                                brosok(mass1, &n);
                                                                output1(mass1, &n);
                                                                points(mass1, &points5, &n);
                                                                printf("\n%d - ваши очки\n", points5);
                                                                if (points5 > 0)
                                                                {
                                                                    points_all = points_all + points1 + points2 + points3 + points4 + points5;
                                                                }
                                                                if (points5 == 0)
                                                                {
                                                                    if (points_all != 0) {
                                                                        points_all = 0;
                                                                    }
                                                                    break;
                                                                }
                                                            }
                                                            if (vibor4 == 2) {
                                                                if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                                    points_all = points_all + points1 + points2 + points3 + points4;
                                                                }
                                                                if (score1 >= 200 && score1 < 300) {
                                                                    if ((points1 + points2 + points3 + points4) < 300 - score1)
                                                                    {
                                                                        points_all = points_all;
                                                                        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 300 \n");
                                                                    }
                                                                    else {
                                                                        points_all = points_all + points1 + points2 + points3 + points4;
                                                                    }
                                                                }
                                                                if (score1 >= 600 && score1 < 700) {
                                                                    if ((points1 + points2 + points3 + points4) < 700 - score1)
                                                                    {
                                                                        points_all = points_all;
                                                                        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 700 \n");
                                                                    }
                                                                    else {
                                                                        points_all = points_all + points1 + points2 + points3 + points4;
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        if (points4 == 0)
                                                        {
                                                            if (points_all != 0) {
                                                                points_all = 0;
                                                            }
                                                            break;
                                                        }
                                                    }
                                                    if (vibor3 == 2) {
                                                        if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                            points_all = points_all + points1 + points2 + points3;
                                                        }
                                                        if (score1 >= 200 && score1 < 300) {
                                                            if ((points1 + points2 + points3) < 300 - score1)
                                                            {
                                                                points_all = points_all;
                                                                printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 300 \n");
                                                            }
                                                            else {
                                                                points_all = points_all + points1 + points2 + points3;
                                                            }
                                                        }
                                                        if (score1 >= 600 && score1 < 700) {
                                                            if ((points1 + points2 + points3) < 700 - score1)
                                                            {
                                                                points_all = points_all;
                                                                printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 700 \n");
                                                            }
                                                            else {
                                                                points_all = points_all + points1 + points2 + points3;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                }
                                                if (points3 == 0)
                                                {
                                                    if (points_all != 0) {
                                                        points_all = 0;
                                                    }
                                                    break;
                                                }
                                            }
                                            if (vibor2 == 2) {
                                                if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                    points_all = points_all + points1 + points2;
                                                }
                                                if (score1 >= 200 && score1 < 300) {
                                                    if ((points1 + points2) < 300 - score1)
                                                    {
                                                        points_all = points_all;
                                                        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 300 \n");
                                                    }
                                                    else {
                                                        points_all = points_all + points1 + points2;
                                                    }
                                                }
                                                if (score1 >= 600 && score1 < 700) {
                                                    if ((points1 + points2) < 700 - score1)
                                                    {
                                                        points_all = points_all;
                                                        printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 700 \n");;
                                                    }
                                                    else {
                                                        points_all = points_all + points1 + points2;
                                                    }
                                                }
                                                break;
                                            }
                                        }
                                        if (points2 == 0)
                                        {
                                            if (points_all != 0) {
                                                points_all = 0;
                                            }
                                            break;
                                        }
                                    }
                                    if (vibor1 == 2) {
                                        if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                            points_all = points_all + points1;
                                        }
                                        if (score1 >= 200 && score1 < 300) {
                                            if ((points1) < 300 - score1)
                                            {
                                                points_all = points_all;
                                                printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 300 \n");
                                            }
                                            else {
                                                points_all = points_all + points1;
                                            }
                                        }
                                        if (score1 >= 600 && score1 < 700) {
                                            if ((points1) < 700 - score1)
                                            {
                                                points_all = points_all;
                                                printf("\nвы находитесь в яме, чтобы выбраться вам надо за ход переступить 700 \n");
                                            }
                                            else {
                                                points_all = points_all + points1;
                                            }
                                        }
                                        break;
                                    }
                                }
                                if (points1 == 0)
                                {
                                    if (points_all != 0) {
                                        points_all = 0;
                                    }
                                    break;
                                }
                            }
                        }
                        score1 = score1 + points_all;
                        if (points_all == 0 && k == 1) {
                            bolt1++;
                        }
                        if (score1 < 50 && k == 0) {
                            printf("\nвам открыть игру не удалось\n");
                            score1 = 0;
                        }
                        if (score1 >= 50 || k == 1) {
                            k = 1;
                            printf("\nвсего у вас за ход очков - %d\n", points_all);
                            printf("\nобщее кол-во ваших очков - %d\n", score1);
                            printf("\nкол-во болтов у вас - %d\n", bolt1);
                        }
                        if (score1 > score2 && score1 - points_all < score2) {
                            printf("\nвы выполнили обгон\nу пк снято 50 очков\n");
                            score2 = score2 - 50;
                        }
                        points_all = 0;
                        if (bolt1 == 3)
                        {
                            printf("\nу вас - 3 болта, у вас будут вычтены 100 очков\n");
                            score1 = score1 - 100;
                            printf("\nтекущее кол-во ваших очков - %d\n", score1);
                            bolt1 = 0;
                        }
                        if (score1 == 555) {
                            score1 = 0;
                            printf("вы попали на самосвал, с вас сняты все очки\nтекущее кол-во очков - %d\n", score1);
                        }
                        printf("\n1 - продолжить\n");
                        scanf_s("%d", &vibor5);
                        n = 5;
                        points1 = 0;
                        points2 = 0;
                        points3 = 0;
                        points4 = 0;
                        points5 = 0;
                    }
                } while (score1 <= 1000 || score2 <= 1000);
                if (score1 > 1000) {
                    printf("\nвы победили\n");
                }
                if (score2 > 1000) {
                    printf("\nвы проиграли\n");
                }
            }

        }
        if (vibor_igry == 2) 
        {
            printf("\n1 - играть\n2 - завершить\n"); scanf_s("%d", &vibor);
            if (vibor == 1)
        {
            printf("\nсейчас будт произведен бросок кубиков по очереди, у кого очков больше тот и начинает\n");
            printf("\n1 - бросить первым\n");
            scanf_s("%d", &viborka1);
            brosok(mass1, &n);
            output1(mass1, &n);
            points(mass1, &points_viborka1, &n);
            printf("\n%d - очки игрока1\n", points_viborka1);
            n = 5;
            printf("\n1 - бросить вторым\n");
            scanf_s("%d", &viborka2);
            brosok(mass2, &n);
            output1(mass2, &n);
            points(mass2, &points_viborka2, &n);
            printf("\n%d - очки игрока2\n", points_viborka2);
            n = 5;
        }
            else {
                break;
            }
            if (points_viborka1 == points_viborka2)
        {
            printf("\nвыпало одинаковое количество очков\n1-бросить кубики еще раз\n");
            while (points_viborka2 == points_viborka1) {
                printf("\n1 - бросить первым\n");
                scanf_s("%d", &viborka1);
                brosok(mass1, &n);
                output1(mass1, &n);
                points(mass1, &points_viborka1, &n);
                printf("\n%d - очки игрока1\n", points_viborka1);
                n = 5;
                printf("\n1 - бросить вторым\n");
                scanf_s("%d", &viborka2);
                brosok(mass2, &n);
                output1(mass2, &n);
                points(mass2, &points_viborka2, &n);
                printf("\n%d - очки игрока2\n", points_viborka2);
                n = 5;
            }
        }
            if (points_viborka1 > points_viborka2)
        {
                printf("\nу игрока1 очков больше, он начинает первым\n");
                do {
                if (vibor == 1) {
                    printf("\n1 - продолжить\n2 - завершить игру\n");
                    scanf_s("%d", &vibor21);
                    if (vibor21 == 2) {
                        break;
                    }
                    printf("\n\nход игрока1\n\n");
                    while (1) {
                        points1 = 0;
                        points2 = 0;
                        points3 = 0;
                        points4 = 0;
                        points5 = 0;
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
                                                                points_all = points_all + points1 + points2 + points3 + points4 + points5;
                                                            }
                                                            if (points5 == 0)
                                                            {
                                                                if (points_all != 0) {
                                                                    points_all = 0;
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        if (vibor4 == 2) {
                                                            if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                                points_all = points_all + points1 + points2 + points3 + points4;
                                                            }
                                                            if (score1 >= 200 && score1 < 300) {
                                                                if ((points1 + points2 + points3 + points4) < 300 - score1)
                                                                {
                                                                    points_all = points_all;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                                }
                                                                else {
                                                                    points_all = points_all + points1 + points2 + points3 + points4;
                                                                }
                                                            }
                                                            if (score1 >= 600 && score1 < 700) {
                                                                if ((points1 + points2 + points3 + points4) < 700 - score1)
                                                                {
                                                                    points_all = points_all;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                                }
                                                                else {
                                                                    points_all = points_all + points1 + points2 + points3 + points4;
                                                                }
                                                            }
                                                            break;
                                                        }
                                                    }
                                                    if (points4 == 0)
                                                    {
                                                        if (points_all != 0) {
                                                            points_all = 0;
                                                        }
                                                        break;
                                                    }
                                                }
                                                if (vibor3 == 2) {
                                                    if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                        points_all = points_all + points1 + points2 + points3;
                                                    }
                                                    if (score1 >= 200 && score1 < 300) {
                                                        if ((points1 + points2 + points3) < 300 - score1)
                                                        {
                                                            points_all = points_all;
                                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                        }
                                                        else {
                                                            points_all = points_all + points1 + points2 + points3;
                                                        }
                                                    }
                                                    if (score1 >= 600 && score1 < 700) {
                                                        if ((points1 + points2 + points3) < 700 - score1)
                                                        {
                                                            points_all = points_all;
                                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                        }
                                                        else {
                                                            points_all = points_all + points1 + points2 + points3;
                                                        }
                                                    }
                                                    break;
                                                }
                                            }
                                            if (points3 == 0)
                                            {
                                                if (points_all != 0) {
                                                    points_all = 0;
                                                }
                                                break;
                                            }
                                        }
                                        if (vibor2 == 2) {
                                            if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                points_all = points_all + points1 + points2;
                                            }
                                            if (score1 >= 200 && score1 < 300) {
                                                if ((points1 + points2) < 300 - score1)
                                                {
                                                    points_all = points_all;
                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                }
                                                else {
                                                    points_all = points_all + points1 + points2;
                                                }
                                            }
                                            if (score1 >= 600 && score1 < 700) {
                                                if ((points1 + points2) < 700 - score1)
                                                {
                                                    points_all = points_all;
                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                }
                                                else {
                                                    points_all = points_all + points1 + points2;
                                                }
                                            }
                                            break;
                                        }
                                    }
                                    if (points2 == 0)
                                    {
                                        if (points_all != 0) {
                                            points_all = 0;
                                        }
                                        break;
                                    }
                                }
                                if (vibor1 == 2) {
                                    if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                        points_all = points_all + points1;
                                    }
                                    if (score1 >= 200 && score1 < 300) {
                                        if ((points1) < 300 - points_all)
                                        {
                                            points_all = points_all;
                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                        }
                                        else {
                                            points_all = points_all + points1;
                                        }
                                    }
                                    if (score1 >= 600 && score1 < 700) {
                                        if ((points1) < 700 - points_all)
                                        {
                                            points_all = points_all;
                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                        }
                                        else {
                                            points_all = points_all + points1;
                                        }
                                    }
                                    break;
                                }
                            }
                            if (points1 == 0)
                            {
                                if (points_all != 0) {
                                    points_all = 0;
                                }
                                break;
                            }
                        }
                    }
                    score1 = score1 + points_all;
                    if (points_all == 0 && k == 1) {
                        bolt1++;
                    }
                    if (score1 < 50 && k == 0) {
                        printf("\nигроку1 открыть игру не удалось\n");
                        score1 = 0;
                    }
                    if (score1 >= 50 || k == 1) {
                        k = 1;
                        printf("\nвсего за ход очков у игрока1 - %d\n", points_all);
                        printf("\nобщее кол-во очков игрока1 - %d\n", score1);
                        printf("\nкол-во болтов у игрока1 - %d\n", bolt1);
                    }
                    if (score1 > score2 && score1 - points_all < score2) {
                        printf("\nвыполнен обгон игроком1\nу игрока2 снято 50 очков\n");
                        score2 = score2 - 50;
                    }
                    points_all = 0;
                    if (bolt1 == 3)
                    {
                        printf("\nу игрока1 - 3 болта, у него будут вычтены 100 очков\n");
                        score1 = score1 - 100;
                        printf("\nтекущее кол - во очков игрока1 - %d\n",score1);
                        bolt1 = 0;
                    }
                    if (score1 == 555) {
                        score1 = 0;
                        printf("игрок1 попал на самосвал, с него сняты все очки\nтекущее кол-во очков - %d\n", score1);
                    }
                    n = 5;
                    points1 = 0;
                    points2 = 0;
                    points3 = 0;
                    points4 = 0;
                    points5 = 0;
                    printf("\n1 - продолжить\n2 - завершить игру\n");
                    scanf_s("%d", &vibor23);
                    if (vibor23 == 2) {
                        break;
                    }
                    printf("\n\nход игрока 2\n\n");
                    while (1) {
                        points1 = 0;
                        points2 = 0;
                        points3 = 0;
                        points4 = 0;
                        points5 = 0;
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
                                                                if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                                                    points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                                }
                                                                if (score2 >= 200 && score2 < 300) {
                                                                    if ((points1 + points2 + points3 + points4 + points5) < 300 - score2)
                                                                    {
                                                                        points_all1 = points_all1;
                                                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                                    }
                                                                    else {
                                                                        points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                                    }
                                                                }
                                                                if (score2 >= 600 && score2 < 700) {
                                                                    if ((points1 + points2 + points3 + points4 + points5) < 700 - score2)
                                                                    {
                                                                        points_all1 = points_all1;
                                                                        printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                                    }
                                                                    else {
                                                                        points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                                    }
                                                                }
                                                            }
                                                            if (points5 == 0)
                                                            {
                                                                if (points_all1 != 0) {
                                                                    points_all1 = 0;
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        if (vibor44 == 2) {
                                                            if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                                                points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                            }
                                                            if (score2 >= 200 && score2 < 300) {
                                                                if ((points1 + points2 + points3 + points4) < 300 - score2)
                                                                {
                                                                    points_all1 = points_all1;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                                }
                                                                else {
                                                                    points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                                }
                                                            }
                                                            if (score2 >= 600 && score2 < 700) {
                                                                if ((points1 + points2 + points3 + points4) < 700 - score2)
                                                                {
                                                                    points_all1 = points_all1;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                                }
                                                                else {
                                                                    points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                                }

                                                            }
                                                            break;
                                                        }
                                                    }
                                                    if (points4 == 0)
                                                    {
                                                        if (points_all1 != 0) {
                                                            points_all1 = 0;
                                                        }
                                                        break;
                                                    }
                                                }
                                                if (vibor33 == 2) {
                                                    if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                                        points_all1 = points_all1 + points1 + points2 + points3;
                                                    }
                                                    if (score2 >= 200 && score2 < 300) {
                                                        if ((points1 + points2 + points3) < 300 - score2)
                                                        {
                                                            points_all1 = points_all1;
                                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                        }
                                                        else {
                                                            points_all1 = points_all1 + points1 + points2 + points3;
                                                        }
                                                    }
                                                    if (score2 >= 600 && score2 < 700) {
                                                        if ((points1 + points2 + points3) < 700 - score2)
                                                        {
                                                            points_all1 = points_all1;
                                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                        }
                                                        else {
                                                            points_all1 = points_all1 + points1 + points2 + points3;
                                                        }

                                                    }
                                                    break;
                                                }
                                            }
                                            if (points3 == 0)
                                            {
                                                if (points_all1 != 0) {
                                                    points_all1 = 0;
                                                }
                                                break;
                                            }
                                        }
                                        if (vibor22 == 2) {
                                            if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                                points_all1 = points_all1 + points1 + points2;
                                            }
                                            if (score2 >= 200 && score2 < 300) {
                                                if ((points1 + points2) < 300 - score2)
                                                {
                                                    points_all1 = points_all1;
                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                }
                                                else {
                                                    points_all1 = points_all1 + points1 + points2;
                                                }
                                            }
                                            if (score2 >= 600 && score2 < 700) {
                                                if ((points1 + points2) < 700 - score2)
                                                {
                                                    points_all1 = points_all1;
                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                }
                                                else {
                                                    points_all1 = points_all1 + points1 + points2;
                                                }

                                            }
                                            break;
                                        }
                                    }
                                    if (points2 == 0)
                                    {
                                        if (points_all1 != 0) {
                                            points_all1 = 0;
                                        }
                                        break;
                                    }
                                }
                                if (vibor11 == 2) {
                                    if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                        points_all1 = points_all1 + points1;
                                    }
                                    if (score2 >= 200 && score2 < 300) {
                                        if ((points1) < 300 - points_all1)
                                        {
                                            points_all1 = points_all1;
                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                        }
                                        else {
                                            points_all1 = points_all1 + points1;
                                        }
                                    }
                                    if (score2 >= 600 && score2 < 700) {
                                        if ((points1) < 700 - points_all1)
                                        {
                                            points_all1 = points_all1;
                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                        }
                                        else {
                                            points_all1 = points_all1 + points1;
                                        }

                                    }
                                    break;
                                }
                            }
                            if (points1 == 0)
                            {
                                if (points_all1 != 0) {
                                    points_all1 = 0;
                                };
                                break;
                            }
                        }
                    }
                    score2 = score2 + points_all1;
                    if (points_all1 == 0 && k1 == 1) {
                        bolt2++;
                    }
                    if (score2 < 50 && k1 == 0) {
                        printf("\nигроку2 открыть игру не удалось\n");
                        points_all1 = 0;
                    }
                    if (score2 >= 50 || k1 == 1) {
                        k1 = 1;
                        printf("\nвсего за ход очков у игрока2 - %d\n", points_all1);
                        printf("\nобщее кол-во очков игрока2 - %d\n", score2);
                        printf("\nкол-во болтов у игрока2 - %d\n", bolt2);
                    }
                    if (score2 > score1 && score2 - points_all1 < score1) {
                        printf("\n\nвыполнен обгон игроком2\nу игрока1 снято 50 очков\n\n");
                        score1 = score1 - 50;
                    }
                    points_all1 = 0;
                    if (bolt2 == 3)
                    {
                        printf("\nу игрока2 - 3 болта, у него будут вычтены 100 очков\n");
                        score2 = score2 - 100;
                        printf("\nтекущее кол - во очков игрока2 - %d\n", score2);
                        bolt2 = 0;
                    }
                    if (score2 == 555) {
                        score2 = 0;
                        printf("игрок2 попал на самосвал, с него сняты все очки\nтекущее кол-во очков - %d\n", score2);
                    }
                    n = 5;
                    points1 = 0;
                    points2 = 0;
                    points3 = 0;
                    points4 = 0;
                    points5 = 0;
                }
            } while (score1 <= 1000 || score2 <= 1000);
                if (score1 > 1000) {
                    printf("\nвы победили\n");
                }
                if (score2 > 1000) {
                    printf("\nвы проиграли\n");
                }
        }
            if (points_viborka2 > points_viborka1) 
        {
                printf("\nу игрока2 очков больше, он начинает первым\n");
                do {
                if (vibor == 1) {
                    printf("\n1 - продолжить\n2 - завершить игру\n");
                    scanf_s("%d", &vibor21);
                    if (vibor21 == 2) {
                        break;
                    }
                    printf("\n\nход игрока 2\n\n");
                    while (1) {
                        points1 = 0;
                        points2 = 0;
                        points3 = 0;
                        points4 = 0;
                        points5 = 0;
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
                                                                if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                                                    points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                                }
                                                                if (score2 >= 200 && score2 < 300) {
                                                                    if ((points1 + points2 + points3 + points4 + points5) < 300 - score2)
                                                                    {
                                                                        points_all1 = points_all1;
                                                                        printf("\nигрок2 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                                    }
                                                                    else {
                                                                        points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                                    }
                                                                }
                                                                if (score2 >= 600 && score2 < 700) {
                                                                    if ((points1 + points2 + points3 + points4 + points5) < 700 - score2)
                                                                    {
                                                                        points_all1 = points_all1;
                                                                        printf("\nигрок2 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                                    }
                                                                    else {
                                                                        points_all1 = points_all1 + points1 + points2 + points3 + points4 + points5;
                                                                    }
                                                                }
                                                            }
                                                            if (points5 == 0)
                                                            {
                                                                if (points_all1 != 0) {
                                                                    points_all1 = 0;
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        if (vibor44 == 2) {
                                                            if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                                                points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                            }
                                                            if (score2 >= 200 && score2 < 300) {
                                                                if ((points1 + points2 + points3 + points4) < 300 - score2)
                                                                {
                                                                    points_all1 = points_all1;
                                                                    printf("\nигрок2 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                                }
                                                                else {
                                                                    points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                                }
                                                            }
                                                            if (score2 >= 600 && score2 < 700) {
                                                                if ((points1 + points2 + points3 + points4) < 700 - score2)
                                                                {
                                                                    points_all1 = points_all1;
                                                                    printf("\nигрок2 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                                }
                                                                else {
                                                                    points_all1 = points_all1 + points1 + points2 + points3 + points4;
                                                                }

                                                            }
                                                            break;
                                                        }
                                                    }
                                                    if (points4 == 0)
                                                    {
                                                        if (points_all1 != 0) {
                                                            points_all1 = 0;
                                                        }
                                                        break;
                                                    }
                                                }
                                                if (vibor33 == 2) {
                                                    if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                                        points_all1 = points_all1 + points1 + points2 + points3;
                                                    }
                                                    if (score2 >= 200 && score2 < 300) {
                                                        if ((points1 + points2 + points3) < 300 - score2)
                                                        {
                                                            points_all1 = points_all1;
                                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                        }
                                                        else {
                                                            points_all1 = points_all1 + points1 + points2 + points3;
                                                        }
                                                    }
                                                    if (score2 >= 600 && score2 < 700) {
                                                        if ((points1 + points2 + points3) < 700 - score2)
                                                        {
                                                            points_all1 = points_all1;
                                                            printf("\nигрок2 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                        }
                                                        else {
                                                            points_all1 = points_all1 + points1 + points2 + points3;
                                                        }

                                                    }
                                                    break;
                                                }
                                            }
                                            if (points3 == 0)
                                            {
                                                if (points_all1 != 0) {
                                                    points_all1 = 0;
                                                }
                                                break;
                                            }
                                        }
                                        if (vibor22 == 2) {
                                            if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                                points_all1 = points_all1 + points1 + points2;
                                            }
                                            if (score2 >= 200 && score2 < 300) {
                                                if ((points1 + points2) < 300 - score2)
                                                {
                                                    points_all1 = points_all1;
                                                    printf("\nигрок2 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                }
                                                else {
                                                    points_all1 = points_all1 + points1 + points2;
                                                }
                                            }
                                            if (score2 >= 600 && score2 < 700) {
                                                if ((points1 + points2) < 700 - score2)
                                                {
                                                    points_all1 = points_all1;
                                                    printf("\nигрок2 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                }
                                                else {
                                                    points_all1 = points_all1 + points1 + points2;
                                                }

                                            }
                                            break;
                                        }
                                    }
                                    if (points2 == 0)
                                    {
                                        if (points_all1 != 0) {
                                            points_all1 = 0;
                                        }
                                        break;
                                    }
                                }
                                if (vibor11 == 2) {
                                    if ((score2 < 200) || (score2 >= 300 && score2 < 600) || (score2 >= 700)) {
                                        points_all1 = points_all1 + points1;
                                    }
                                    if (score2 >= 200 && score2 < 300) {
                                        if ((points1) < 300 - points_all1)
                                        {
                                            points_all1 = points_all1;
                                            printf("\nигрок2 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                        }
                                        else {
                                            points_all1 = points_all1 + points1;
                                        }
                                    }
                                    if (score2 >= 600 && score2 < 700) {
                                        if ((points1) < 700 - points_all1)
                                        {
                                            points_all1 = points_all1;
                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                        }
                                        else {
                                            points_all1 = points_all1 + points1;
                                        }

                                    }
                                    break;
                                }
                            }
                            if (points1 == 0)
                            {
                                if (points_all1 != 0) {
                                    points_all1 = 0;
                                };
                                break;
                            }
                        }
                    }
                    score2 = score2 + points_all1;
                    if (points_all1 == 0 && k1 == 1) {
                        bolt2++;
                    }
                    if (score2 < 50 && k1 == 0) {
                        printf("\nигроку2 открыть игру не удалось\n");
                        points_all1 = 0;
                    }
                    if (score2 >= 50 || k1 == 1) {
                        k1 = 1;
                        printf("\nвсего за ход очков у игрока2 - %d\n", points_all1);
                        printf("\nобщее кол-во очков игрока2 - %d\n", score2);
                        printf("\nкол-во болтов у игрока2 - %d\n", bolt2);
                    }
                    if (score2 > score1 && score2 - points_all1 < score1) {
                        printf("\n\nвыполнен обгон игроком2\nу игрока1 снято 50 очков\n\n");
                        score1 = score1 - 50;
                    }
                    points_all1 = 0;
                    if (bolt2 == 3)
                    {
                        printf("\nу игрока2 - 3 болта, у него будут вычтены 100 очков\n");
                        score2 = score2 - 100;
                        printf("\nтекущее кол - во очков игрока2 - %d\n", score2);
                        bolt2 = 0;
                    }
                    if (score2 == 555) {
                        score2 = 0;
                        printf("игрок2 попал на самосвал, с него сняты все очки\nтекущее кол-во очков - %d\n", score2);
                    }
                    n = 5;
                    points1 = 0;
                    points2 = 0;
                    points3 = 0;
                    points4 = 0;
                    printf("\n1 - продолжить\n2 - завершить игру\n");
                    scanf_s("%d", &vibor23);
                    if (vibor23 == 2) {
                        break;
                    }
                    printf("\nход игрока1\n");
                    while (1) {
                        points1 = 0;
                        points2 = 0;
                        points3 = 0;
                        points4 = 0;
                        points5 = 0;
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
                                                                points_all = points_all + points1 + points2 + points3 + points4 + points5;
                                                            }
                                                            if (points5 == 0)
                                                            {
                                                                if (points_all != 0) {
                                                                    points_all = 0;
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        if (vibor4 == 2) {
                                                            if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                                points_all = points_all + points1 + points2 + points3 + points4;
                                                            }
                                                            if (score1 >= 200 && score1 < 300) {
                                                                if ((points1 + points2 + points3 + points4) < 300 - score1)
                                                                {
                                                                    points_all = points_all;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                                }
                                                                else {
                                                                    points_all = points_all + points1 + points2 + points3 + points4;
                                                                }
                                                            }
                                                            if (score1 >= 600 && score1 < 700) {
                                                                if ((points1 + points2 + points3 + points4) < 700 - score1)
                                                                {
                                                                    points_all = points_all;
                                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                                }
                                                                else {
                                                                    points_all = points_all + points1 + points2 + points3 + points4;
                                                                }
                                                            }
                                                            break;
                                                        }
                                                    }
                                                    if (points4 == 0)
                                                    {
                                                        if (points_all != 0) {
                                                            points_all = 0;
                                                        }
                                                        break;
                                                    }
                                                }
                                                if (vibor3 == 2) {
                                                    if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                        points_all = points_all + points1 + points2 + points3;
                                                    }
                                                    if (score1 >= 200 && score1 < 300) {
                                                        if ((points1 + points2 + points3) < 300 - score1)
                                                        {
                                                            points_all = points_all;
                                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                        }
                                                        else {
                                                            points_all = points_all + points1 + points2 + points3;
                                                        }
                                                    }
                                                    if (score1 >= 600 && score1 < 700) {
                                                        if ((points1 + points2 + points3) < 700 - score1)
                                                        {
                                                            points_all = points_all;
                                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                        }
                                                        else {
                                                            points_all = points_all + points1 + points2 + points3;
                                                        }
                                                    }
                                                    break;
                                                }
                                            }
                                            if (points3 == 0)
                                            {
                                                if (points_all != 0) {
                                                    points_all = 0;
                                                }
                                                break;
                                            }
                                        }
                                        if (vibor2 == 2) {
                                            if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                                points_all = points_all + points1 + points2;
                                            }
                                            if (score1 >= 200 && score1 < 300) {
                                                if ((points1 + points2) < 300 - score1)
                                                {
                                                    points_all = points_all;
                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                                }
                                                else {
                                                    points_all = points_all + points1 + points2;
                                                }
                                            }
                                            if (score1 >= 600 && score1 < 700) {
                                                if ((points1 + points2) < 700 - score1)
                                                {
                                                    points_all = points_all;
                                                    printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                                }
                                                else {
                                                    points_all = points_all + points1 + points2;
                                                }
                                            }
                                            break;
                                        }
                                    }
                                    if (points2 == 0)
                                    {
                                        if (points_all != 0) {
                                            points_all = 0;
                                        }
                                        break;
                                    }
                                }
                                if (vibor1 == 2) {
                                    if ((score1 < 200) || (score1 >= 300 && score1 < 600) || (score1 >= 700)) {
                                        points_all = points_all + points1;
                                    }
                                    if (score1 >= 200 && score1 < 300) {
                                        if ((points1) < 300 - points_all)
                                        {
                                            points_all = points_all;
                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 300 \n");
                                        }
                                        else {
                                            points_all = points_all + points1;
                                        }
                                    }
                                    if (score1 >= 600 && score1 < 700) {
                                        if ((points1) < 700 - points_all)
                                        {
                                            points_all = points_all;
                                            printf("\nигрок1 находится в яме, чтобы выбраться надо за ход переступить 700 \n");
                                        }
                                        else {
                                            points_all = points_all + points1;
                                        }
                                    }
                                    break;
                                }
                            }
                            if (points1 == 0)
                            {
                                if (points_all != 0) {
                                    points_all = 0;
                                }
                                break;
                            }
                        }
                    }
                    score1 = score1 + points_all;
                    if (points_all == 0 && k == 1) {
                        bolt1++;
                    }
                    if (score1 < 50 && k == 0) {
                        printf("\nигроку1 открыть игру не удалось\n");
                        score1 = 0;
                    }
                    if (score1 >= 50 || k == 1) {
                        k = 1;
                        printf("\nвсего за ход очков у игрока1 - %d\n", points_all);
                        printf("\nобщее кол-во очков игрока1 - %d\n", score1);
                        printf("\nкол-во болтов у игрока1 - %d\n", bolt1);
                    }
                    if (score1 > score2 && score1 - points_all < score2) {
                        printf("\nвыполнен обгон игроком1\nу игрока2 снято 50 очков\n");
                        score2 = score2 - 50;
                    }
                    points_all = 0;
                    if (bolt1 == 3)
                    {
                        printf("\nу игрока1 - 3 болта, у него будут вычтены 100 очков\n");
                        score1 = score1 - 100;
                        printf("\nтекущее кол - во очков игрока1 - %d\n", score1);
                        bolt1 = 0;
                    }
                    if (score1 == 555) {
                        score1 = 0;
                        printf("игрок1 попал на самосвал, с него сняты все очки\nтекущее кол-во очков - %d\n", score1);
                    }
                    n = 5;
                    points1 = 0;
                    points2 = 0;
                    points3 = 0;
                    points4 = 0;
                    points5 = 0;
                }
            } while (score1 <= 1000 || score2 <= 1000);
                if (score1 > 1000) {
                    printf("\nвы победили\n");
                }
                if (score2 > 1000) {
                    printf("\nвы проиграли\n");
                }

            }
        }
    }
}


