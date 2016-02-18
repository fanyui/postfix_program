#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stringlenth(char *s);
void stringcopy(char *t,char *s);
int stringcompare(char *m,char *n);
void stringconcate(char *m,char *n);
int main(){
char str1[]="hello";
char str2[]="bros";
char *pointer;
char temp[12];
stringcopy(temp,"whow");
printf("%s\n",temp);
	printf("string length is %d\n",stringlength("manymoreyears"));

printf("string compare result is %d\n",stringcompare("abcde","abcdefg"));
stringconcate("hello","man");
//pointer=stringconcate(str1,str2);
//printf("%s",pointer);
//money=;
printf(" %s \n",strcat(str1,str2));
return 0;
}


//string length function that returns the length of a string passed into it 
int stringlength(char *s){
int n;
	for(n=0;*s!='\0';s++)
		n++;
	return n;
	}
//string copy function using pointers 
void stringcopy(char *t,char *s){
while(*s!='\0')
*t++=*s++;
*t='\0';
}

//string compare function using pointers
int stringcompare(char *m,char *n){
while(*m==*n){
*(m++);
*(n++);
if(*n=='\0')
return n-m;
}
}//i got a serious problem with this particular block of code it is not responding the way it is suppose to behave 
//i still have to debug a litlle longer to make sure it is working the correct way thanks to the way it is behaving
//string concatenate function developed using pointers
 void stringconcate(char *m,char *n){
	int i,x;
	char *store;
	while(*n!='\0'){
		*store++=*m++;
		i++;
	}
	for (;*n!='\0';store[i++]=*n)
		;
		store[i]='\0';
	printf("%s",store);
}
