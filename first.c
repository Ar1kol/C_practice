#include <stdio.h>
#include <math.h>
#define MAX 5

int main()
{
    // printf("Name   : Alexandra Abramov  \n");
    // printf("DOB    : July 14, 1975    \n");
    // printf("Mobile : 99-9999999999  \n");

    // if (__STDC_VERSION__ >= 201710L)
    //     printf("We are using C18!\n");
    // else if (__STDC_VERSION__ >= 201112L)
    //     printf("We are using C11!\n");
    // else if (__STDC_VERSION__ >= 199901L)
    //     printf("We are using C99!\n");
    // else
    //     printf("We are using C89/C90!\n");

    // for (int i = 0; i < 7; i++)
    // {
    //     if (i == 0)
    //     {
    //         printf("#####\n");
    //     }
    //     else if (i == 3)
    //     {
    //         printf("####\n");
    //     }
    //     else
    //     {
    //         printf("#\n");
    //     }
    // }

    //     for (int i = 0; i < 9; i++)
    // {
    //     if (i == 0 || i == 8)
    //     {
    //         printf("    ######\n");
    //     }
    //     else if (i == 1 || i == 7)
    //     {
    //        printf("  ##\t  ##\n");
    //     }
    //     else
    //     {
    //         printf(" #\n");
    //     }
    // }

    // char char1 = 'X';
    // char char2 = 'M';
    // char char3 = 'L';

    // printf("The reverse of %c%c%c is %c%c%c\n",
    //        char1, char2, char3,
    //        char3, char2, char1);

    // int height = 7;
    // int width = 5;
    // printf("Perimeter of the rectangle = %d inches\n", 2*(height + width));
    // printf("Area of the rectangle = %d square inches\n", (height*width));

    // float radius;
    // scanf("%f", &radius);

    // printf("Perimeter of the Circle = %f square inches\n", (radius * radius * M_PI) );
    // printf("Area of the Circle = %f square inches\n", (2 * radius * M_PI));

    // int a = 125, b = 12345;
    // long ax = 1234567890;
    // short s = 4043;
    // float x = 2.13459;
    // double dx = 1.1415927;
    // char c = 'W';
    // unsigned long ux = 2541567890;

    // printf("a + c = %d\n", a + c);
    // printf("x + c = %f\n", x + c);
    // printf("dx + x = %f\n", dx + x);
    // printf("((int) dx) + ax = %ld\n", ((int) dx) + ax);
    // printf("a + x = %f\n", a + x);
    // printf("s + b = %d\n", s + b);
    // printf("ax + b = %ld\n", ax + b);
    // printf("s + c = %d\n", s + c);
    // printf("ax + c = %ld\n", ax + c);
    // printf("ax + ux = %u\n", ax + ux);

    // int num;
    // scanf("%d", &num);
    // int years, weeks, days;
    // years = num / 365;
    // weeks = (num - years * 365) / 7;
    // days = num - years * 365 - weeks * 7;

    // printf("Years: %d\n", years);
    // printf("Weeks: %d\n", weeks);
    // printf("Days: %d\n", days);

    // int num1, num2;
    // printf("Input the first integer: ");
    // scanf("%d", &num1);
    // printf("Input the second integer: ");
    // scanf("%d", &num2);

    // printf("Sum of the above two integers = %d", num1 * num2);

    // double  w1, a1, w2, a2;
    // printf("Weight - Item1: ");
    // scanf("%lf", &w1);
    // printf("No. of item1:");
    // scanf("%lf", &a1);
    // printf("Weight - Item2: ");
    // scanf("%lf", &w2);
    // printf("No. of item2:");
    // scanf("%lf", &a2);

    // double  avg = (w1 * a1 + w2 * a2)/(a1 + a2);

    // printf("Average Value = %lf", avg);

    // char id[10];
    // float hours, hour_salary;

    // printf("Input the Employees ID(Max. 10 chars): ");
    // scanf("%s", &id);
    // printf("Input the working hrs: ");
    // scanf("%f", &hours);
    // printf("Salary amount/hr: ");
    // scanf("%f", &hour_salary);

    // printf("Employees ID = %s\n", id);
    // printf("Salary = U$ %.2f\n", hours * hour_salary);

    // int num1, num2, num3, max;

    // printf("Input the first integer: ");
    // scanf("%d", &num1);
    // printf("Input the second integer: ");
    // scanf("%d", &num2);
    // printf("Input the third integer: ");
    // scanf("%d", &num3);

    // if (num1 > num2 && num1 > num3)
    // {
    //     max = num1;
    // }
    // else if (num2 > num1 && num2 > num3)
    // {
    //     max = num2;
    // }
    // else
    // {
    //     max = num3;
    // }

    // printf("Maximum value of three integers: %d", max);

    // int distance;
    // float spent_fuel;
    // printf("Input total distance in km: ");
    // scanf("%d", &distance);
    // printf("Input total fuel spent in liters: ");
    // scanf("%f", &spent_fuel);

    // printf("Average consumption (km/lt) %.3f", distance / spent_fuel);

    // int x1, x2, y1, y2;

    // printf("Input x1: ");
    // scanf("%d", &x1);
    // printf("Input y1: ");
    // scanf("%d", &y1);
    // printf("Input x2: ");
    // scanf("%d", &x2);
    // printf("Input y2: ");
    // scanf("%d", &y2);

    // double distance = sqrt((double)((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2)));

    // printf("Distance between the said points: %.4f", distance);

    // int notes, note100, note50, note20, note10, note5, note2;
    // printf("Input the amount: ");
    // scanf("%d", &notes);
    // printf("There are: \n");

    // note100 = notes / 100;
    // notes -= note100 * 100;
    // note50 = notes / 50;
    // notes -= note50 * 50;
    // note20 = notes / 20;
    // notes -= note20 * 20;
    // note10 = notes / 10;
    // notes -= note10 * 10;
    // note5 = notes / 5;
    // notes -= note5 * 5;
    // note2 = notes / 2;
    // notes -= note2 * 2;

    // printf("%d Note(s) of 100.00\n", note100);
    // printf("%d Note(s) of 50.00\n", note50);
    // printf("%d Note(s) of 20.00\n", note20);
    // printf("%d Note(s) of 10.00\n", note10);
    // printf("%d Note(s) of 5.00\n", note5);
    // printf("%d Note(s) of 2.00\n", note2);
    // printf("%d Note(s) of 1.00\n", notes);

    // integer to hours, minutes, seconds//

    // int s, m, h;
    // printf("Input seconds: ");
    // scanf("%d", &s);
    // h = s / 3600;
    // s %= 3600;
    // m = s / 60;
    // s %= 60;
    // printf("There are: \n");
    // printf("H:M:S - %d:%d:%d\n", h, m, s);

    // integer to years, months, days//

    // int d, m, y;
    // printf("Input no. of days: ");
    // scanf("%d", &d);
    // y = d / 365;
    // d %= 365;
    // m = d / 30;
    // d %= 30;
    // printf("%d Year(s)\n", y);
    // printf("%d Month(s)\n", m);
    // printf("%d Day(s)\n", d);

    // int p, q, r, s;

    // printf("Input the first integer: ");
    // scanf("%d", &p);
    // printf("Input the second integer: ");
    // scanf("%d", &q);
    // printf("Input the third integer: ");
    // scanf("%d", &r);
    // printf("Input the fourth integer: ");
    // scanf("%d", &s);

    // if ((p % 2 == 0) && (q > r) && (q > 0) && (r > 0) && (s > 0) && (s > p) && ((r + s) > (p + q)))
    // {
    //     printf("Correct values\n");
    // }
    // else
    // {
    //     printf("Wrong values\n");
    // }

    // Quadratic equation //

    // float a, b, c, D;

    // printf("Input the first number(a): ");
    // scanf("%f", &a);
    // printf("Input the second number(b): ");
    // scanf("%f", &b);
    // printf("Input the third number(c): ");
    // scanf("%f", &c);

    // if ((b * b - 4 * a * c) < 0 || a == 0)
    // {
    //     printf("Impossible calculate");
    // }
    // else
    // {
    //     D = sqrt(b * b - 4 * a * c);
    //     printf("Root1 = %.5f\n", (-b + D) / (2 * a));
    //     printf("Root2 = %.5f\n", (-b - D) / (2 * a));
    // }

    // int num;
    // printf("Input an integer: ");
    // scanf("%d", &num);
    // if (num >= 0 && num <= 20)
    // {
    //     printf("Range [0, 20]\n");
    // }
    // else if (num >= 21 && num <= 40)
    // {
    //     printf("Range (25,50]\n");
    // }
    // else if (num >= 41 && num <= 60)
    // {
    //     printf("Range (50,75]\n");
    // }
    // else if (num > 61 && num <= 80)
    // {

    //     printf("Range (61,80]\n");
    // }
    // else
    // {
    //     printf("Outside the range\n");
    // }

    // printf("Range []");

    // int num[5], sum;
    // printf("Input the first number: ");
    // scanf("%d", &num[0]);
    // printf("Input the second number: ");
    // scanf("%d", &num[1]);
    // printf("Input the third number: ");
    // scanf("%d", &num[2]);
    // printf("Input the fourth number: ");
    // scanf("%d", &num[3]);
    // printf("Input the fifth number: ");
    // scanf("%d", &num[4]);

    // for (int i = 0; i < 5; i++)
    // {
    //     if (num[i] % 2 != 0)
    //     {
    //         sum += num[i];
    //     }
    // }

    // printf("Sum of all odd values: %d\n", sum);

    // float a, b, c ;

    // printf("Input the first number: ");
    // scanf("%f", &a);
    // printf("Input the second number: ");
    // scanf("%f", &b);
    // printf("Input the third number: ");
    // scanf("%f", &c);

    // if (a + b > c && a + c > b && b + c > a)
    // {
    //     printf("Perimeter = %.1f\n", (a + b + c));
    // }
    // else{
    //     printf("Not possible to create a triangle..!");
    // }

    // int num1, num2;

    // printf("Input the first number: ");
    // scanf("%d", &num1);
    // printf("Input the second number: ");
    // scanf("%d", &num2);

    // if (num1 == 0 || num2 == 0 || (num1 % num2 != 0 && num2 % num1 != 0))
    // {
    //     printf("Not Multiplied!\n");
    // }
    // else
    // {
    //     printf("Multiplied!\n");
    // }

    // int mno;
    // printf("\nInput a number between 1 to 12 to get the month name: ");
    // scanf("%d", &mno);
    // switch(mno) {
    // 	case 1 : printf("January\n"); break;
    // 	case 2 : printf("February\n"); break;
    // 	case 3 : printf("March\n"); break;
    // 	case 4 : printf("April\n"); break;
    // 	case 5 : printf("May\n"); break;
    // 	case 6 : printf("June\n"); break;
    // 	case 7 : printf("July\n"); break;
    // 	case 8 : printf("August\n"); break;
    // 	case 9 : printf("September\n"); break;
    // 	case 10 : printf("October\n"); break;
    // 	case 11 : printf("November\n"); break;
    // 	case 12 : printf("December\n"); break;
    // 	default : printf("Input a number between 1 to 12.");
    // }

    // printf("Even numbers between 1 to 50 (inclusive):\n");
    // for (int i = 2; i <= 50; i +=2)
    // {
    //     printf("%d ", i);
    // }

    // int num[5], count_n = 0, count_p = 0, sum_odd;
    // float avg ;
    // printf("Input the first number: ");
    // scanf("%d", &num[0]);
    // printf("Input the second number: ");
    // scanf("%d", &num[1]);
    // printf("Input the third number: ");
    // scanf("%d", &num[2]);
    // printf("Input the fourth number: ");
    // scanf("%d", &num[3]);
    // printf("Input the fifth number: ");
    // scanf("%d", &num[4]);

    // for (int i = 0; i < 5; i++)
    // {
    //     if (num[i] > 0)
    //     {
    //         count_p++;
    //         avg += num[i];
    //         if (num[i] % 2 == 0)
    //         {
    //            sum_odd += num[i];
    //         }

    //     }
    //     else
    //         count_n++;
    // }

    // printf("Number of positive numbers: %d\n", count_p);
    // printf("Number of negative numbers: %d\n", count_n);
    // printf("Average value of the said positive numbers: %.2f\n", avg /count_p);
    // printf("Sum of all odd values: %.d\n", sum_odd);

    // int num;
    // printf("Input an integer: ");
    // scanf("%d", &num);
    // if (num > 0 && num % 2 == 0)
    // {
    //     printf("Positive Even\n");
    // }
    // else if (num > 0 && num % 2 != 0)
    // {
    //     printf("Positive Odd\n");
    // }
    // else if (num < 0 && num % 2 != 0)
    // {
    //     printf("Negative Odd\n");
    // }
    // else if (num < 0 && num % 2 == 0)
    // {
    //     printf("Negative Even\n");
    // }
    // else
    // {
    //     printf("Positive\n");
    // }

    // int num;
    // printf("Input an integer: ");
    // scanf("%d", &num);
    // for (int i = 0; i < 100; i++)
    // {
    //     if (i % num == 3)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // int num[MAX], max, num_pos;
    // printf("Input 5 integers:\n");
    // scanf("%d\n", &num[0]);
    // scanf("%d\n", &num[1]);
    // scanf("%d\n", &num[2]);
    // scanf("%d\n", &num[3]);
    // scanf("%d\n", &num[4]);

    // for (int i = 0; i < 5; i++)
    // {
    //     if (max < num[i] || i == 0)
    //     {
    //         max = num[i];
    //         num_pos = i;
    //     }
    // }

    // printf("Highest value: %d\n", max);
    // printf("Position: %d\n", num_pos + 1);

    // int num1, num2, sum = 0;

    // printf("Input first number of the pair: ");
    // scanf("%d", &num1);
    // printf("Input second number of the pair: ");
    // scanf("%d", &num2);
    // if (num1 > num2)
    // {
    //     int temp = num1;
    //     num1 = num2;
    //     num2 = temp;
    // }
    // for (int i = num1; i < num2; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         if (sum == 0)
    //         {
    //             printf("List of odd numbers: %d\n", i);
    //             sum += i;
    //         }
    //         else
    //         {
    //             printf("%d\n", i);
    //             sum += i;
    //         }
    //     }
    // }
    // printf("Sum = %d\n", sum);

    // int num1, num2, sum_not17;

    // printf("Input first number of the pair: ");
    // scanf("%d", &num1);
    // printf("Input second number of the pair: ");
    // scanf("%d", &num2);
    // if (num1 > num2)
    // {
    //     int temp = num1;
    //     num1 = num2;
    //     num2 = temp;
    // }
    // for (int i = num1; i <= num2; i++)
    // {
    //     if (i % 17 != 0)
    //     {
    //         sum_not17 += i;
    //     }
    //     if (i % 7 == 2 || i % 7 == 3)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // printf("Sum: %d\n", sum_not17);

    // int num;

    // printf("Input number of lines: ");
    // scanf("%d", &num);
    // for (int i = 1; i <= num * 3; i++)
    // {
    //     printf("%d ", i);
    //     if (i % 3 == 0)
    //     {
    //         printf("\n");
    //     }

    // }

    // int num;

    // printf("Input number of lines: ");
    // scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {

    //     printf("%d %d %d\n", i, i * i, i * i * i);
    // }

    // return (0);

    // int num_l, num_c;

    // printf("Input number of lines: ");
    // scanf("%d", &num_l);
    // printf("Number of characters in a line: ");
    // scanf("%d", &num_c);
    // for (int i = 0; i < num_c * num_l; i += num_c)
    // {
    //     for (int j = 1; j <= num_c; j++)
    //     {
    //         printf("%d ", j + i);
    //     }

    //     printf("\n");
    // }

    // int marks[99], m, i, a=0, total=0;
    // float f;
    // printf("Input Mathematics marks (0 to terminate): ");
    // for(i = 0; ; i++)
    // {
    // 	scanf("%d", &marks[i]);
    // 	if(marks[i] <= 0) {
    // 	break;
    // 	}
    // 	a++;
    // 	total += marks[i];
    // }
    // f = (float)total/(float)a;
    // printf("Average marks in Mathematics: %.2f\n", f);

    // float S;
    // for (int i = 1; i <= 50; i++)
    // {
    //     S += ((float)1 / i);
    // }
    // printf("Value of S: %.2f", S);

    // double s=0, j=1, d, i;

    // for(i=1; i<=7; i+=2){

    // 	d = (i/j);
    // 	s += d;
    // 	j = j*2;
    // }
    // printf("Value of sum: %.2f", s);

    // int num;

    // printf("Input an integer: ");
    // scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         printf("%d\n", i);
    //     }

    // }

    // int nums[7];

    // printf("Input the 5 members of the array: \n");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &nums[i]);
    //     if (nums[i] == 0 || nums[i] < 0)
    //     {
    //         nums[i] = 100;
    //     }
    // }
    // printf("Array values are:\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("n[%d] = %d\n", i, nums[i]);
    // }

    // int nums[7];

    // printf("Input the first number of the array: ");
    // scanf("%d", &nums[0]);
    // printf("n[0] = %d\n", nums[0]);
    // for (int i = 1; i < 5; i++)
    // {
    //     nums[i] = nums[i - 1] * 3;
    //     printf("n[%d] = %d\n", i, nums[i]);
    // }

    // float nums[5];

    // printf("Input the 5 members of the array: \n");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%f", &nums[i]);
    //     if (nums[i] < 5)
    //     {
    //         printf("A[%d] = %.1f\n", i, nums[i]);
    //     }
    // }

    // int nums[MAX];

    // printf("Input the 5 members of the array: \n");
    // for (int i = MAX - 1; i >= 0; i--)
    // {
    //     scanf("%d", &nums[i]);
    // }
    // printf("Array values are:\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("n[%d] = %d\n", i, nums[i]);
    // }
    // return (0);

    // int len, min, index;
    // printf("Input the length of the array: \n");
    // scanf("%d", &len);
    // int nums[len];
    // if (len > 0)
    // {
    //     for (int i = 0; i < len; i++)
    //     {
    //         scanf("%d", &nums[i]);
    //         if (i == 0 || nums[i] < min)
    //         {
    //             min = nums[i];
    //             index = i;
    //         }
    //     }
    //     printf("Smallest Value: %d\n", min);
    //     printf("Position of the element:  %d\n", index);
    // }

    // int p,r,t,int_amt;
    // printf("Input principle, Rate of interest & time to find simple interest: \n");
    // scanf("%d%d%d",&p,&r,&t);
    // int_amt=(p*r*t)/100;
    // printf("Simple interest = %d",int_amt);
    // return 0;


    char string[10];
    printf("Enter the string: ");
    scanf("%s", string);
    printf("\n %s",string);


    return (0);
}
