
#include <stdio.h>



int main ()
{

    // Use sizeof() to know size
    // the data types
    printf("The size of int:%d\n",
           sizeof(int));
    printf("The size of char:%d\n",
           sizeof(char));
    printf("The size of float:%d\n",
           sizeof(float));
    printf("The size of double:%d",
           sizeof(double));

    return 0;
}

#include <stdio.h>
int main()
{
    float f1 = 5.5;
    int a;
    // Automatic type convertion from float to int
    a = f1;
    // Manual type convertion fron int to float
    float f2 = (float)a;

    printf("a:%d\n", a);
    printf("f1:%f\n", f1);
    printf("f2:%f", f2);
    return 0;
}

#include<stdio.h>

int main() {

int a = 1, b = 0;
int x = 5, y = 10;
printf("a=%d, b=%d\n", a, b);
printf("a && b = %d\n", a && b);
printf("a ll b = %d\n", a && b); 
printf("!a=%d, !b = %d\n", !a,!b);

printf("(x<y && y>0) = %d\n", (x<y&& y > 0 ));
printf("(x>y || x==5) = %d\n", (x>y|| x == 5 ));

return 0;


}
#include<stdio.h>

int main () {
       int x=10;

       int y=10 + ++x;

       printf("x=%d,y=%d\n",x,y);

       return 0;
}    


#include<stdio.h>

int main ()
{

       int x=2<<15;
       int y=1<<16;
       printf("%d\n",x);
       printf("%d\n",y);
       return 0;

       
       
}


#include<stdio.h>
int main() 
{
char ch;
printf("Enter a character\n");
scanf("%c", &ch);
if(ch=='a' || ch=='e' || ch=='1' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='0' || ch=='U')
{
printf("The character is a vowel\n");
}
else
{
printf("The character is a consonant\n");
}
return 0;
}





#include<stdio.h>
int main () {
       int a=120;
       printf("value of a is: %d\n", a);
       if(a>=100){
              if(a<200){
                     printf("Value of a is between 100 and 200\n");
              
              }
       
       else {
              printf("Value of a is more than 200\n");

       }
}
else{
       // executed if a<100
       printf("Value of a is less than 100\n");
}

return 0;
}

#include <stdio.h>

int main() {
    float physics, chemistry, biology, math, computer;
    float total, percentage;
    char grade;

    // Input marks
    printf("Enter marks out of 100 for the following subjects:\n");

    printf("Physics: ");
    scanf("%f", &physics);

    printf("Chemistry: ");
    scanf("%f", &chemistry);

    printf("Biology: ");
    scanf("%f", &biology);

    printf("Mathematics: ");
    scanf("%f", &math);

    printf("Computer: ");
    scanf("%f", &computer);

    // Calculate total and percentage
    total = physics + chemistry + biology + math + computer;
    percentage = (total / 500) * 100;

    // Determine grade
    if (percentage > 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage > 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Output results
    printf("\nTotal Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}


