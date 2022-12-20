/* VOID POINTERS IN C */
/* void pointers in c is a pointer, which 
   can point to any type of data. void pointers
   must be typecasted into appropriiate types
   before dereferencing. */
   /* Syntax:
   void  *pointer_name */
   
  //output--> // 6487564   
              //6487563
              //10
              //z
   #include<stdio.h>
   void main()
   {
   	int a=10;
   	char ch ='z';
   	void *p,*q;
   	p=&a;
   	q=&ch;
   	printf("%d\n",p);
   	printf("%d\n",q);
   	printf("%d\n",*(int *)p);
   	printf("%c\n",*(char *)q);
   } 
