/* ASSIGNMENT 8
                QUESTION 2
 PROGRAM/FUNCTION TO FIND THE MINIMUM ELEMENT IN THE STACK
*/
 
#include<stdio.h>
#include<conio.h>

int stack1[30],stack2[30];
int top1=-1,top2=-1,size1,size2;

void pop1();
void pop2();
void push1(int);
void display1();
void push2();
void display2();
void minelement_stack();

int main()
 { 
     int times,i,j,val,time;
    printf("Enter how many values you want to enter into main stack\n");
    printf("OR Enter the size of main stack <= %d\n",30);
    scanf("%d",&size1);
    
    size2=size1;
    
    
    printf("enter how many times you want to push into main stack\n");
    printf("you can push %d times maximum only\n",size1);
	scanf("%d",&times);
	for(i=0;i<times;i++)
	{
		printf("\nenter value you want to push into main stack\n");
		scanf("%d",&val);
		push1(val);
		
		push2();
		
		printf("\nmain stack at this moment is\n");
		display1(); 
		
		printf("\nauxilary stack at this moment is\n");
		display2();
		
		 	
	} 
	
	printf("\nenter how many times you want to pop from main stack\n"); 
	scanf("%d",&time);
	for(j=0;j<time;j++)
	{
		pop1();
		
		pop2(); 
		
		printf("\n main stack at this moment is\n");
		display1();
		
		printf("\n auxilary  stack at this moment is\n");
		display2();    	
	} 
	
      minelement_stack();
    getch();
    return 0;
 }
 
 void push1(int x)
 {
       
	   if(top1==size1-1)
	   {
	   	  printf("overflow condition\n");
	   	  printf("stack is full,push cannot be done to main stack\n");
	   	  return;
	   }
	   else if(top1==-1)
	   {
	   	  top1=0;
	   	  stack1[top1]=x;
	   }
	   else
	   {
	   	  top1=top1+1;
	   	  stack1[top1]=x;
	   }  	
 } 
 
  void push2()
 {
       
	   if(top2==size2-1)
	   {
	   	  printf("overflow condition\n");
	   	  printf("auxilary stack is full,push cannot be done\n");
	   	  return;
	   }
	   
	   if(top2==-1)
	   {
	   	 top2=0;
	   	 stack2[top2]=stack1[top1];
	   }
	   else
	   {
	   	  if(stack1[top1]<stack2[top2])
	   	  {
	   	       top2=top2+1;
	   	       stack2[top2]=stack1[top1];
				    	
	    	 }
	      else
		  {
		  	 int x;
		  	 
		  	 x=stack2[top2];
		  	 top2=top2+1;
		  	 stack2[top2]=x;
		  	
			   }	 
	   	
	   }
	   	   
 }    
 
 
 void pop1()
 {
     int y;
     
     if(top1==-1)
     {
     	printf("stack is empty,pop cannot be done\n");
     	printf("underflow condition\n");
     	return ;
	 }
	 
	 y=stack1[top1];
	 top1=top1-1;
	 printf("\ndeleted item from main stack is %d",y); 	
 }   
 
  void pop2()
 {
     int y;
     
     if(top2==-1)
     {
     	printf("stack is empty,pop cannot be done\n");
     	printf("underflow condition\n");
     	return ;
	 }
	 
	 y=stack2[top2];
	 top2=top2-1;
	 printf("\ndeleted item from auxilary stack is %d",y); 	
 }  
 
 void display1()
 {
 	if(top1==-1)
     {
     	printf(" main stack is empty,display cannot be done\n");
     	printf("underflow condition\n");
     	return ;
	 }
	 
	 int i;
	 
	 for(i=0;i<=top1;i++)
	 {
	 	printf("%d ",stack1[i]);
	 }
	 
 }
 
 void display2()
 {
 	if(top2==-1)
     {
     	printf(" auxilary stack is empty,display cannot be done\n");
     	printf("underflow condition\n");
     	return ;
	 }
	 
	 int i;
	 
	 for(i=0;i<=top2;i++)
	 {
	 	printf("%d ",stack2[i]);
	 }
	 
 }
 
 void minelement_stack()
 {
 	
 	int x;
 	
 	x=stack2[top2];
 	
 	printf("\nminimum element in main stack is %d\n",x);
 	
 }
 
 
