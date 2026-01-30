#include <stdio.h>
struct vector
{
    int i;
    int j;
};

int main()
{
    struct vector v = {2, 4};
    struct vector c = {6, 3};
    int sumofvector = (v.i + c.i);
    int sumofvector1 = (v.j + c.j);
    printf("the sum of vector is %di + %dj", sumofvector, sumofvector1);
    return 0;
}

// #include <stdio.h>
// struct vector{
//     int i;
//     int j;
// };

// struct vector sumVector(struct vector v1,struct vector v2){
//     struct vector v3= {v1.i + v2.i ,v1.j + v2.j};
//     return v3;

// }

// int main ()
// {
//     struct vector v1 ={2,4};
//     struct vector v2 ={9,5};
//     struct vector v3 = sumVector(v1,v2);
//     printf("the value of vector v3 is %di + %dj", v3.i,v3.j);
//     return 0;
// }
