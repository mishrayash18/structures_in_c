// #include <stdio.h>
// #include <string.h>
// struct studetails {
//     char name[10];
//     int rno;
//     int marks;
// };

// int main() {
//     struct studetails s1;
//     strcpy(s1.name, "yash");
//     s1.rno = 609;
//     s1.marks = 90;
//     printf("name: %s\n", s1.name);
//     printf("roll_no: %d\n", s1.rno);
//     printf("marks:%d\n", s1.marks);
    
//     return 0;
// }





// #include <stdio.h>
// #include <string.h>
// struct employee {
//     char name[10];
//     int id;
//     int salary;
// };

// int main() {
//     struct employee e1;
//     strcpy(e1.name, "yash");
//     e1.id=609;
//     e1.salary=1000;

//     int arr[]

// }





// #include <stdio.h>
// #include <string.h>

// void b_entry(char title[20],char author[20],int price) {
    
//     struct book {
//         char title[20];
//         char author[20];
//         int price;
//     };

//     struct book b1;
//     strcpy(b1.title, title);
//     strcpy(b1.author, author);
//     b1.price = price;
    
//     printf("title: %s\n", b1.title);
//     printf("author: %s\n", b1.author);
//     printf("price:%d\n", b1.price);
  
//     return ;
// }

// int main() {
//     b_entry("abcd","xyz",500);
//     return 0;
// }






// //  ARRAY OF STRUCTURES
// #include <stdio.h>
// struct employee {
//     int id;
//     char name[15];
//     int salary;
// };

// int main() {
//     int n;
//     struct employee arr[10];
//     printf("enter the number of employees: ");
//     scanf("%d", &n);
//     printf("enter the details of %d employee: ",3);
//     for (int i=0;i<n;i++) {
//         scanf("%d",&arr[i].id);
//         scanf("%s",&arr[i].name);
//         scanf("%d",&arr[i].salary);
//     }

//     for (int i=0;i<n;i++) {
//         printf("the id of %d is %d\n",i+1,arr[i].id);
//         printf("the name of %d is %s\n",i+1,arr[i].name);
//         printf("the salary of %d is %d\n\n",i+1,arr[i].salary);
//     }
//     return 0;
// }






