#include "functions.h"
#include <stdio.h>
int isFib(unsigned long i) {
  // TODO: Add your function declaration here
	int fib0=1;
        int fib1=1;
        int fib=2;
        while(i>fib){
                fib0=fib1;
                fib1=fib;
                fib=fib0+fib1;
        }
        if(i==fib){return 2;}
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
        printf("%d",returnVal);
        //printf("%d /n",sec);
        return returnVal;
}

unsigned int count_vowels(unsigned long num) {
  // TODO: Add your function declaration here
        char *ss[50]={"zErO","OnE","twO","thrEE","fOUr","fIvE","sIx","sEvEn","EIght","nInE"\
        ,"tEn","ElEvEn","twElvE","thErtEEn","fOrtEEn","fIftEEn","sIxtEEn","sEvEntEEn",\
        "EIghtEEn","nIntEEn","twEnty","thIrty","fOrty","fIfty","sIxty","sEvEnty","EIghty",\
        "nInty","hUndrEd","thOUsAnd","mIllIOn","bIllIOn","and"};
        int returnVal=0;
        int intA[50]={0,2,1,2,2,2,1,2,2,2,1,3,2,3,3,3,3,4,4,3,1,1,1,1,1,2,2,1,2,3,3,3,0};
        if(num==1000000000){
                returnVal=4;
        }if(num>=1000000 && num<1000000000){
                int firstThr=num/1000000;
                returnVal+=hundred(intA,firstThr);
                returnVal+=3;
                num-=firstThr*1000000;
        }if(num>=1000 && num<1000000){
                int secThr=num/1000;
                returnVal+=hundred(intA,secThr);
                returnVal+=3;
                num-=secThr*1000;
        }if(num>=0&&num<1000){
                int thrThr=num;
                returnVal+=hundred(intA,thrThr);
        }if(num>1000000000){printf("your enter is wrong! end!!!");}
	return returnVal;
}

unsigned int count_ones(long n) {
  // TODO: Add your function declaration here
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
        //        printf("%d",countOne[i]);
	}
        return returnVal;
}


unsigned long swap_bytes(unsigned long n) {
  // TODO: Add your function declaration here
	int j=snprintf(NULL,0,"%lu",n);
	char num_count[j];
        unsigned long returnVal=0;
	snprintf(num_count,j,"%lu",n);
	printf("%32x",n);
	printf("the hex is: %s", num_count);

        for(int i=0;i<16;i++){
                char c=num_count[i+2];
                num_count[i+2]=num_count[i];
                num_count[i]=c;
		printf("%c \n",num_count[i]);
                if((i%2)==1){
                        i+=2;
                }
        }
/*        for(int i=0;i<16;i++){
		printf("%c",num_count[i]);
	}*/printf(num_count);
        for(int i=0;i<16;i++){
                if((num_count[i]-'0')<10){
                returnVal+=(num_count[i]-'0')*16;
               	}else{
               	returnVal+=(num_count[i]-'0'-39)*16;
                }

        }
        return returnVal;
}

long a4_minus_b4(int a, int b) {
  // TODO: Add your function declaration here
        long a_4=a*a*a*a;
        long b_4=b*b*b*b;
        return a_4-b_4;
}
