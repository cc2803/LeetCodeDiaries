#include <iostream>
using namespace std;

int main() {
    
    int a=30;
    int *aptr = &a;
    int **dptr = &aptr;
    
    cout<<a<<endl; //prints direct value of "a", i.e 30
    cout<<aptr<<endl; //prints address of "a", "aptr" variable stores address of variable "a"
    cout<<dptr<<endl; //prints address of pointer "aptr", i.e, whatever value is stored in just "aptr", (NOT *aptr)
    cout<<*aptr<<endl;//DE-REFERENCING of aptr, value pointed by aptr is printed = a = 30
    cout<<*dptr<<endl;//DE-REFERENCING of dptr, value pointed by dptr is printed = aptr = address of a
    cout<<**dptr<<endl;//Double DE-REFERENCING of dptr, first dptr points at aptr, next aptr points at a, hence output is value of a = 30
    
    return 0;
}