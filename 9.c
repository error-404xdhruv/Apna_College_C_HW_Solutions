
// Make a system that can store information of all students, teachers & staff of your college in the formof structures.

#include <stdio.h>
#include <stdlib.h>

struct student_info
{
    int roll ;
    char name [100] ;
};

struct teacher_info
{
    char name[100] ;
    char subject[100] ;
};

struct staff_info
{
    char name[100] ;
    char work [100] ;
};

int main(int argc, char const *argv[])
{
    struct student_info s1 = {21106032 , "Dhruv Yadav"} ;
    printf("%d\n%s\n", s1.roll , s1.name) ;

    // in a similar way the details of teachers and other staff and students can be stored
    return 0;
}
