# include <stdio.h>


	//int intA[50]={0,1,1,2,2,1,0,2,1,1,1,3,2,3,2,2,2,4,3,2,1,0,0,0,0,2,1,1,2,2,1,1,0};
int isFib(unsigned long i){
        int fib0;
        int fib1;
	int fib;
	while(i<fib){
		fib0=fib1;
		fib1=fib;
		fib=fib0+fib1;
	}
	if(i==fib)return 2;
	else{return -1;}
}
int hundred(int intA[], int i){
	int returnVal=0;
	int first = i/100;
	if(first!=0)returnVal=intA[first]+2;
	int nextSec=i-first*100;
	if(nextSec>=20){
		int sec=nextSec/10;
		if(sec!=0)returnVal+=intA[sec+18];
		int last=nextSec-sec*10;
		returnVal+=intA[last];
	}
	else if(nextSec>0 && nextSec<20){
		returnVal+=intA[nextSec];
	}
	//printf("%d /n",sec);
	return returnVal;
}

int count_vowels(unsigned long num){
	char *ss[50]={"zErO","One","twO","thrEE","fOUr","fIvE","sIx","sEvEn","Eight","ninE"\
	,"tEn","ElEvEn","twElvE","thErtEEn","fOrtEEn","fiftEEn","sixtEEn","sEvEntEEn",\
	"EightEEn","nintEEn","twEnty","thirty","fOrty","fifty","sixty","sEvEnty","Eighty",\
	"ninty","hUndrEd","thOUsand","milliOn","billiOn","and"};
	//printf("the num is: %ld \n",num);
	int returnVal=0;
	int intA[50]={0,2,1,2,2,2,1,2,2,2,1,3,2,3,3,3,3,4,4,3,1,1,1,1,1,2,1,1,2,3,3,3,0};
	if(num==1000000000){
		returnVal=4;
	}if(num>=1000000 && num<1000000000){
		int firstThr=num/1000000;
		returnVal+=hundred(intA,firstThr);
		returnVal+=3;
		num-=firstThr*1000000;
	}if(num>=1000 && num<1000000){
		printf("this function worked! \n");
		int secThr=num/1000;
		returnVal+=hundred(intA,secThr);
		//printf("%d \n",returnVal);
		returnVal+=3;
		num-=secThr*1000;
		//printf("%d \n",returnVal);
	}if(num>=0&&num<1000){
		int thrThr=num;
		returnVal+=hundred(intA,thrThr);
	}if(num>1000000000){printf("your enter is wrong! try again!");}
	return returnVal;
}
unsigned int count_ones(long n){
	int countOne[64];
	int returnVal=0;
	int bit;
	for(int i=0;i<=63;i++){
		countOne[i]=0;
	}
	if(n<0){
		countOne[0]=1;
		n=n*(-1);
	}
	int x=0;
	for (int i=63;i>=1;i--){
		bit=n%2;
		n/=2;
		countOne[i]=bit;
		if(n==0) break;
	}
	for(int i=0;i<=63;i++){
		if(countOne[i]==1)returnVal+=1;
		printf("%d",countOne[i]);
	}printf("is the binary type\n it have %d 1s",returnVal);
	return returnVal;
}
long a4_minus_b4(int a, int b){
	long a_4=a*a*a*a;
	long b_4=b*b*b*b;
	return a_4-b_4;
}

int main(){
	int oneHun=200;
	long num;
	int a,b;
	int intA[50]={0,1,1,2,2,1,0,2,1,1,1,3,2,3,2,2,2,4,3,2,1,0,0,0,0,2,1,1,2,2,1,1,0};
	printf("please enter a number, lets count the Velum: ");
	scanf("%ld",&num);
	printf("the number of Velum is: %d \n",count_vowels(num));
	printf("please enter a number for binary");
	scanf("%ld",&num);
	count_ones(num);
	printf("please enter a number a: ");
	scanf("%d",&a);
	printf("please enter a number b: ");
	scanf("%d",&b);
	printf("so this is the number of a_4-b_4: %ld", a4_minus_b4(a,b));
	return 0;
}







                /*char temp[255]={0};
                int digit=0;
                sprintf(temp,"%d",a );
                for(int i;temp[i];i++ ){
                        digit++;
                }
                if(digit>10) {print("The numb is wrong"); break}
                else if();*/
