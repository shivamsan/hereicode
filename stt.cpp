#include<iostream>
using namespace std;
#define SIZE
class Stack   {
	 private :
		  int top;
		  int ST[SIZE];
	 public :
  		  Stack();
		  void push(int X);
		  int pop();
		  int peek();
		  int isEmpty();
		  int isFull();
		  char* infix_postfix(char[]);
		  int priority(char c);
		  void postfix_eval(char[]);
		  int cal(int,int,char);
};
Stack :: Stack()
{
	 top = -1;
	 for(int i=0;i<SIZE;i++)
		ST[i]=0;
}
int Stack :: isEmpty()
{
	 if(top == -1)
		  return 1;
	 else
		  return 0;
}
int Stack :: isFull()
{
	 if(top == SIZE-1)
		  return 1;
	 else
		  return 0;
}
void Stack :: push(int X)   {
	 if(!isFull())  {
		  top++;
		  ST[top]=X;
	 }
	 else
		  cout<<"\nStack Overflow !! Error!!";
}
int Stack :: pop()     {
	 if(!isEmpty()) 	 {
		 int X = 0;
		 X = ST[top];
		top--;
		return X;
	}
	else
		  cout<<"\nStack Underflow !! Error!!";
}
int Stack :: peek()
{
	 int X;
	 if(top==-1)
		X=-1;
	 else
		X = ST[top];
	return X;
}
char* Stack::infix_postfix(char infix[SIZE]) 
{
     char postfix[SIZE],c;
     int j=0;
	/*Scan the infix input string/stream left to right*/
     for(int i=0;infix[i]!='\0';i++) 
     { 
/* If the current input token is an operand, simply append it to the output string*/
	if(isalnum(infix[i]))
	     postfix[j++]=infix[i];
	else	
	{
	/* If the current input token is '(', push it onto the stack */
	     if(isEmpty()||infix[i]=='(')
	     {
		push(infix[i]);
							
	     }
		else if(infix[i]==')‘)    
		{
/* If the current input token is ')', pop off all operators and append them to the output string until a '(' is popped; discard the '('. */
		      c=pop();
		      while(c!='(‘)   
		      {
			postfix[j++]=c;
			c=pop();
		      }
		}
/* If the current input token is an operator, pop off all operators that have equal or higher precedence and append them to the output string; push the operator onto the stack. */
		else if(priority(peek()) < priority(infix[i])) 
		       push(infix[i]);
						
	     else 
	     {
	              while(!isEmpty() && priority(peek()) >= priority(infix[i]))   			            postfix[j++]=pop();
		 push(Str[i]);
	       }
	}
        }
/*If the end of the input string is found, pop all operators and append them to the output string. */
        while(!isEmpty())	
	postfix[j++]=pop();

       postfix[j]='\0';
       return postfix;
}
int Stack::priority( char c)
{
	 int i=-1;
	 if(c=='+'||c=='-')
		 i=1;
	 else if(c=='*'||c=='/')
		 i=2;
	 else if(c=='^')
		 i=3;
	 else if(c==')')
		i=0;
	 return(i);
}
void Stack::postfix_eval(char postfix[15])
{
	if(isalpha(postfix[0]))
		cout<<"\nInvalid Expression!";
	else
	{
		for(int i=0;postfix[i]!='\0';i++)
		{
			if(isdigit(postfix[i]))
				push((postfix[i])-48);
			else
			{
				int op2=pop();
				int op1=pop();
				int res=cal(postfix[i],op1,op2);
				push(res);
			}
		}
		cout<<pop();
	}
}
int Stack::cal(char optr,int op1,int op2)  
{
	int res=0;
	switch(optr)	
	{
		case '+': res=op1+op2;
			break;
		case '-': res=op1-op2;
			break;
		case '*‘: res=op1*op2;
			break;
		case '/': res=op1/op2;
			break;
	}
	return res;
}