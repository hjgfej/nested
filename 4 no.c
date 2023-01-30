#include<stdio.h>

main(){
	int a,b,c,d;
	printf("enter a:");
	scanf("%d",&a);

    printf("enter b:");
	scanf("%d",&b);
	
	
	printf("enter c:");
	scanf("%d",&c);
	
	printf("enter d");
	scanf("%d",&d);
    
    if(a<b){
    	if(b<c){
             if(c<d){
             	printf("d is max");
}
       	    else{
       		    printf("c is max");
		   }
		}
    	else{
    		printf("b is max");
			
		}
	}
	else{
	if(b<a){
		if(c<a){
          if(d<a){
          	printf("a is max");
		  }	
		  else{
		  	printf("d is max");
		  }		
		}
		else{
			printf("c is max");
		}
	}
	else{
		printf("b is max");
	}
}
}
