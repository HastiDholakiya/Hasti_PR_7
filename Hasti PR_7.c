#include<stdio.h>

int add (int h,int p)
{ 
    return h+p;
}
int sub (int h,int p)
{ 
    return h-p;
}
int mul (int h,int p)
{ 
    return h*p;
}
int div (int h,int p)
{ 
    return h/p;
}
int mod (int h,int p)
{ 
    return h%p;
}
void main()
{
    int a,b;
    int choice;
    
    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);
    
    do{
    printf("Press 1 for + ...\n");
    printf("Press 2 for - ...\n");
    printf("Press 3 for * ...\n");
    printf("Press 4 for / ...\n");
    printf("Press 5 for % ...\n");
    printf("Press 0 for the exit...\n");
    
    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    switch(choice)
    {
    	case 1:
    		 printf("Sum of a & b is %d\n",add(a,b));
    		 break;
	
    	case 2:
    		 printf("substraction of a & b is %d\n",sub(a,b));
    		 break;
	
    	case 3:
    		 printf("Multiplication of a & b is %d\n",mul(a,b));
    		 break;
	
    	case 4:
    		 printf("Divison of a & b is %d\n",div(a,b));
    		 break;
	
    	case 5:
    		 printf("Modulo of a & b is %d\n",mod(a,b));
    		 break;
    
	choice ++;
		 
	}

     }while(choice!=0); 

    
}


/*
Enter a : 5
Enter b : 10
Press 1 for + ...
Press 2 for - ...
Press 3 for * ...
Press 4 for / ...
Press 5 for ..
Press 0 for the exit...
Enter your choice : 1
Sum of a & b is 15
Press 1 for + ...
Press 2 for - ...
Press 3 for * ...
Press 4 for / ...
Press 5 for ..
Press 0 for the exit...
Enter your choice : 2
substraction of a & b is -5
Press 1 for + ...
Press 2 for - ...
Press 3 for * ...
Press 4 for / ...
Press 5 for ..
Press 0 for the exit...
Enter your choice : 3
Multiplication of a & b is 50
Press 1 for + ...
Press 2 for - ...
Press 3 for * ...
Press 4 for / ...
Press 5 for ..
Press 0 for the exit...
Enter your choice : 4
Divison of a & b is 0
Press 1 for + ...
Press 2 for - ...
Press 3 for * ...
Press 4 for / ...
Press 5 for ..
Press 0 for the exit...
Enter your choice : 5
Modulo of a & b is 5
Press 1 for + ...
Press 2 for - ...
Press 3 for * ...
Press 4 for / ...
Press 5 for ..
Press 0 for the exit...
Enter your choice : 0
*/



