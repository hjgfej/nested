#include<stdio.h>

main(){
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);

    printf("enter b:");
	scanf("%d",&b);
	
	
	printf("enter c:");
	scanf("%d",&c);
    
    if(a<b){
    	if(c<b){
           printf("b is max");    		
		}
    	else{
    		printf("c is max");
			
		}
	}
	else{
	
		if(b<a){
			printf("a is max");
		}
	    else{		
	        printf("b is max");
		}
		
	}
	
}

