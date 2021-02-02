#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int *ptr1, *ptr2;
    ptr1 = (int *) malloc (5* sizeof(int));
    ptr2 = (int *) calloc(5, sizeof(int));
    if(ptr1 == NULL && ptr2 == NULL){
        cout<<"Memory is not alllocated"<<endl;
    }
    else{
        cout<<"Memory is allocated"<<endl;

        /*free(ptr1);
        cout<<"Memory is being free"<<endl;
        */

       ptr1 = realloc(ptr1 , 50);
       cout<<"Memory reallocation successfull"<<endl;
    }



    return 0;
}
