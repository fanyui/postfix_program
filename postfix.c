//this is a postfix calculator developed by harisu fanyui
//smartsoft from smartlab
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "stack.h"
int main(){
stackinit(5);
	int i;
int temp;
	char buff[256];
printf("\t\t SMARTSOFT FROM SMARTLAB\n");
printf("enter your equation in postfix form to evaluate\n");
gets(buff);
//scanf("%s",buff);
for(i=0;buff[i]!='\0';i++){
	if (isdigit(buff[i]))
		stackpush((buff[i]-'0'));
	else if (buff[i]==' ')
		continue;
	else if (buff[i]=='+')
		stackpush(stackpop()+stackpop());
	else if (buff[i]=='-'){
		temp=stackpop();
		stackpush(stackpop()-temp);
	}
	else if (buff[i]=='*')
		stackpush(stackpop()*stackpop());
	else if (buff[i]=='/'){
		if ((temp=stackpop())==0)
			printf("division by zero not allowed\n");
		else stackpush(stackpop()/temp);
	}
		

	else printf("i did not understand you well\n");
}
printf("the answer is : %d\n",(int)stackpop());

return 0;
}
