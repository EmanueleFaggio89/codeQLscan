#include <cstring>
#include <cstdlib>

struct person { 
    int status; 
    char name[50]; 
};

person* allocatePerson() { 
    person* p = (person*)malloc(sizeof(person)); 
    p->status = 0; 
    return p; 
}

person* allocatePerson() { 
    person* p = (person*)malloc(sizeof(person)); 
    p->status = 0; 
    strcpy(p->name, "John"); 
    return p; 
}
