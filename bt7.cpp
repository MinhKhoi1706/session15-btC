#include<stdio.h>
#include<string.h>

int main(){

	char stringinput[] = "Hello my gmail is test123@gmail.com";
	
	int countletter = 0;
	int countnumber = 0;
	int countspecial = 0;
	
	int length = strlen(stringinput);
	for(int i = 0; i < length; i++){
		char c = stringinput[i];
		
		if((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122)){
			countletter++;
			
		}else if(c >= 48 && c <= 57){
			countnumber++;
		}
		
		else{
			countspecial++;
		}
	}
	
	printf("so chu cai la %d\n", countletter);
	printf("so chu so la %d\n", countnumber);
	printf("so ky tu dac biet la %d\n", countspecial);
	
	return 0;
}
