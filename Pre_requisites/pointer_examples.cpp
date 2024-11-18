#include <iostream>
using namespace std;

int main() {
    
    int a=30;
    int *aptr = &a;
    int **dptr = &aptr;

    int array[5]={10,200,38,40,450};

    cout<<a<<endl; //prints direct value of "a", i.e 30
    cout<<aptr<<endl; //prints address of "a", "aptr" variable stores address of variable "a"
    cout<<dptr<<endl; //prints address of pointer "aptr", i.e, whatever value is stored in just "aptr", (NOT *aptr)
    cout<<*aptr<<endl;//DE-REFERENCING of aptr, value pointed by aptr is printed = a = 30
    cout<<*dptr<<endl;//DE-REFERENCING of dptr, value pointed by dptr is printed = aptr = address of a
    cout<<**dptr<<endl;//Double DE-REFERENCING of dptr, first dptr points at aptr, next aptr points at a, hence output is value of a = 30
    
    cout<<*(array)<<endl; // accessing array elements via pointers, here, it points to index 0,i.e 1st element (10)
    cout<<*(array+3)<<endl; // 0+3=3rd index, or 4th element accessed, i.e 40
    return 0;
}