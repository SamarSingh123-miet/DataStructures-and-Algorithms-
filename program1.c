#include <stdio.h> 
#include <stdlib.h> 
#define MAXSIZE 1000
int list[MAXSIZE], size;
void create() { 
    int i;
    printf("Enter the size of the list:");
    scanf("%d", &size);
    if (size > MAXSIZE) { 
        printf("List overflow!!");
    }
     else  {
        printf("Enter list elements:\n");
        scanf("%d", &list[i]);
     }
}
void display() { 
    if (size == 0)
     { 
        printf("The list is empty!");
     }
     else { 
     printf("The list elements are:\n");
     int i;
     for (i=0; i<size; i++) { 
        printf("%d", list[i]);
     }
     printf("\n");

     }
     
}
void insert()
{ 
    if (size == 0)
     { 
        printf("List is empty!");
     }
     else { 
        int pos, value;
        printf("Enter position where you want to insert new elements:");
        scanf("%d", &pos);
        printf("Enter value to insert:");
        scanf("%d", &value);
        if (pos > 0 && pos <=size) { 
            for (i=size; i>=pos; i--) {
                list[i] = list[i-1];
                list[pos-1] = value;
                size++;
                printf("Element added.");
            }
            else { 
                printf("Invalid position\n");
            }
        }
     }
}
void delete()  {
    if (size == 0) { 
        printf("Enter position of the element you want to add:");
        scanf("%d", &pos);
        if (pos > 0 && pos <= size) { 
            for (int i=pos-1; i<size; i++) { 
                list[i] = list[i+1];
                size--;
                printf("Element deleted!!!\n");
            }
        }
        else { 
            printf("Invalid Position!!\n");
        }
    }
}
void search() { 
    if (size == 0) {
        printf("The list is empty\n");
    }
    else { 
        int val, i;
        printf("Enter the value to be searched:");
        scanf("%d", &val);
        for (int i=0; i<size; i++) { 
            if (list[i] == val) 
            break;
        }
        if (i==size)
        { 
            printf("Element not found");
        }
        else { 
            printf("Element found");
        }
    }
}
void main() {
    create();
    insert();
    delete();
    display();
    search();
}