#include<stdio.h>

int main(){
	int a,b;
	float total=0;
	printf("Welcome to Uber foods\n");
	printf("How may I help you\n"); 
	printf("Press 1 for available restaurent\n");
	printf("Press 2 for available cafe\n\n");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("1. Moonlight restaurent\n");
			printf("2. Real paprika\n\n");
			scanf("%d",&a);
		switch(a){
		case 1:	
			printf("Menu:\n1.Starters:\n a.Munchow soup = RS:100/-\n b.Tomato soup = RS:60/-\n c.Italian spice = RS:200/-\n d.Hot N Sour = RS:150/-\n\n");
			printf("2.Main Course:\n a.Sabji/Chappati = RS:300-\n b.Rice/Dal = RS:250/-\n\n");
            printf("3.Desert:\n a.Lemon juice = RS:50/-\n b.Cake = RS:200/-\n c.Brownie = RS:450/-\n d.Wine = RS:500/-\n\n\n");
            printf("Select your food:");
            scanf("%d",&a);
            switch(a){
            	    case 1:
                    printf("1.Starters:\n a.Munchow soup = RS:100/-\n b.Tomato soup = RS:60/-\n c.Italian spice = RS:200/-\n d.Hot N Sour = RS:150/-\n\n");
                    printf("What would you like to have in your Starters?");
                    scanf("%d",&a);
                    printf("Enter the quantity:");
                    scanf("%d",&b);
                    switch(a){
                    	case 1:
                    		printf("You order Munchow soup...Enjoy your meal");
                    		
                    		break;
                    	case 2:
                    		printf("You order Tomato soup...Enjoy your meal");
                    		break;
                    	case 3:
                    		printf("You order Italian soup...Enjoy your meal");
                    	
                    		break;
                    	case 4:
                    		printf("You order Hot N Sour...Enjoy your meal");
                    	
                    		break;
                    		default:
                    			printf("Invalid option");
					}
                    break;
                    switch(b){
                    	case 1:
                    		total=100*b;
                    		break;
                    	case 2:
                    		total=60*b;
                    		break;
                    	case 3:
                    		total=200*b;
                    		break;
                    	case 4:
                    		total=150*b;
                    		break;
                    		default:
                    			printf("Invalid option");
					}
					break;
                    case 2:
                    printf("2.Main Course:\n a.Sabji/Chappati = RS:300-\n b.Rice/Dal = RS:250/-\n\n");
                    printf("What would you like to have in your Main Course?");
                    scanf("%d",&a);
                    printf("Enter the quantity");
                    scanf("%d",&b);
                    switch(a){
                    	case 1:
                    		printf("You order Sabji/Chappati...Enjoy your meal");
                    	
                    		break;
                    		case 2:
                    		printf("You order Rice/Dal...Enjoy your meal");
                    	
                    		break;
                    		default:
			printf("Invalid option\n");
					}
                    break;
                     switch(b){
                    	case 1:
                    		total=300*b;
                    		break;
                    	case 2:
                    		total=250*b;        		
                    		break;
                    	default:
                    		printf("Invalid option");
					}
					break;
                    case 3:
                    printf("3.Desert:\n a.Lemon juice = RS:50/-\n b.Cake = RS:200/-\n c.Brownie = RS:450/-\n d.Wine = RS:500/-\n\n\n");         
                    printf("What would you like to have in your Desert?");
                    scanf("%d",&a);
                    printf("Enter the quantity");
                    scanf("%d",&b);
                    switch(a){
                    	case 1:
                    		printf("You order Lemon juice...Enjoy your meal");
                    		
                    		break;
                    		case 2:
                    		printf("You order Cake...Enjoy your meal");
                    	
                    		break;
                    		case 3:
                    		printf("You order Brownie...Enjoy your meal");
                    	
                    		break;
                    		case 4:
                    		printf("You order Wine...Enjoy your meal");
                    	    break;
                    		default:
			printf("Invalid option\n");
					}
                    break;
                     switch(b){
                    	case 1:
                    		total=50*b;
                    		break;
                    	case 2:
                    		total=200*b;
                    		break;
                    	case 3:
                    		total=450*b;
                    		break;
                    	case 4:
                    		total=500*b;
                    		break;
                    		default:
                    			printf("Invalid option");
					}
					break;
                    
                    default:
                    	printf("Invalid option");
			}
			break;
		case 2:
				printf("Menu:\n1.Starter:\n a.Barbique = RS:200/-\n b.Paneer Chilli = RS:250/-\n c.Masala Papad = RS:100/-\n d.Sizller = RS:350\n\n");
				printf("2.Main Course:\n a.Veggie/Kulcha = RS:350/-\n b.Biryani = RS:250/-\n\n");
				printf("3.Desert:\n a.Cream cake = RS:300/-\n b.Apple Pie = RS:400/-\n c.Mocktail = RS:500/-\n d.Shake = RS:200/-\n\n\n");
				printf("Select your Food:");
				scanf("%d",&a);
				switch(a){
					case 1:
					printf("1.Starter:\n a.Barbique = RS:200/-\n b.Paneer Chilli = RS:250/-\n c.Masala Papad = RS:100/-\n d.Sizller = RS:350\n\n");
					printf("What would you like to have in your Starters?");
					scanf("%d",&a);
					 printf("Enter the quantity");
                    scanf("%d",&b);
					
					switch(a){
						case 1:
                    		printf("You order Barbique...Enjoy your meal");
                    	
                    		break;
						case 2:
                    		printf("You order Paneer Chilli...Enjoy your meal");
                    	
                    		break;
                    		case 3:
                    		printf("You order Masala Papad...Enjoy your meal");
                    	
                    		break;
                    		case 4:
                    		printf("You order Sizller...Enjoy your meal");
                    		break;
                    		default:
			printf("Invalid option\n");
					}
					break;
					 switch(b){
                    	case 1:
                    		total=200*b;
                    		break;
                    	case 2:
                    		total=250*b;
                    		break;
                    	case 3:
                    		total=100*b;
                    		break;
                    	case 4:
                    		total=350*b;
                    		break;
                    		default:
                    			printf("Invalid option");
					}
					break;
					case 2:
					printf("2.Main Course:\n a.Veggie/Kulcha = RS:350/-\n b.Biryani = RS:250/-\n\n");
					printf("What would you like to have in your Main Course?");
					scanf("%d",&a);
					 printf("Enter the quantity");
                    scanf("%d",&b);
					switch(a){
						case 1:
                    		printf("You order Veggie/Kulcha...Enjoy your meal");
                    		break;
                    		case 2:
                    		printf("You order Biryani...Enjoy your meal");
                    		
                    		break;
                    		default:
			printf("Invalid option\n");
					}
					break;
					 switch(b){
                    	case 1:
                    		total=350*b;
                    		break;
                    	case 2:
                    		total=250*b;
                    		break;
                    		default:
                    			printf("Invalid option");
					}
					break;
					
					case 3:
					printf("3.Desert:\n a.Cream cake = RS:300/-\n b.Apple Pie = RS:400/-\n c.Mocktail = RS;500/-\n d.Shake = RS:200/-\n\n\n");
					printf("What would you like to have in your Desert?");
					scanf("%d",&a);
					 printf("Enter the quantity");
                    scanf("%d",&b);
					switch(a){
						case 1:
                    		printf("You order Cream cake...Enjoy your meal");
                    		
                    		break;
                    		case 2:
                    		printf("You order Apple Pie...Enjoy your meal");
                    	
                    		break;
                    		case 3:
                    		printf("You order Mocktail...Enjoy your meal");
                    	
                    		break;
                    		case 4:
                    		printf("You order Shake...Enjoy your meal");
                    	
                    		break;
                    		default:
			printf("Invalid option\n");
					}
					break;
					
					 switch(b){
                    	case 1:
                    		total=300*b;
                    		break;
                    	case 2:
                    		total=400*b;
                    		break;
                    	case 3:
                    		total=500*b;
                    		break;
                    	case 4:
                    		total=200*b;
                    		break;
                    		
                    		break;
                    		default:
                    			printf("Invalid option");
					}
				default:
				printf("Invalid option");
				} 
				break;
			default:
			printf("Invalid option\n");
		}
		break;
                    		printf("Quantity: %d\n",b);
                    		printf("Total Bill: %f\n",total);                   
		case 2:
			printf("cafe are closed");
			break;
			default:
				printf("Invalid input");
		}
	return 0;
}
  		     