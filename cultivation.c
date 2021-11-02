#include <stdio.h>

int main()
{
   char name[50];
   int mob=0;
   char address[100];
   char cropType='x';
   int quantity=0;
   int district=0;
   char groupSelection='x';
   int plantCount=0;
   
   int pr_banana=30;
   int pr_chilly=10; //price of a chilly plant
   
   int pr_dambala=10,
        pr_Luffa=10,
        pr_onion=5,
        
        pr_tomato=15,
        pr_okra=15,
        pr_brinjle=15;
    double cropPrice=0,delivery=0,totalPrice=0;
        

   while(1){
       printf("Enter name: ");
        scanf("%s", &name);
        
        printf("\nEnter mobile: ");
        scanf("%d", &mob);
        
        printf("\nEnter address: ");
        scanf("%s", &address);
        
        printf("\nSelect your District from the  list below. enter the corresponding number: ");
        printf("\nJaffna-1 \nKilinochchi-2\nmullative-3\nmannar-4\nVavniya -5\nTrnco-6\nAnuradhapura-7\nPuttalam-8\nPolonnaruwa-9\nBatticaloa-10\nAmpara-11\nMonaragala-12");
        printf("\nColombo-13\nGampaha-14\nKegalle-15\nKalutara-16\nGalle-17\nMatara-18\nRatnapura-19\nNuwara eliya-20");
        printf("\nBadulla-21\nMatale-22\nKurunegala-23\nHambantota-24\n");
        printf("\nEnter district: ");
        scanf("%d", &district);
        
            printf("\nDo you want to select the best plants/seeds group for your zone or select any plants/ seeds on your choice? \nPress G for group selection and O for Own choice : ");
            
        scanf(" %c",&groupSelection);
        
        if(groupSelection=='G' || groupSelection=='g'){
            if(district>0 && district<=12){
                printf("\nMost suitable plants/seeds for your Zone are: ");
                printf("\nChili,Red Onion,Brinjal,Luffa,Okra");
                printf("\nPress S if you want to buy seeds or P if plants: ");
                        
                    while(1){
                        scanf(" %c",&cropType);
                
                    if(cropType=='S' || cropType=='s'){
                    printf("\nEach seed packet costs Rs 50. Enter your desired packet quantity : ");
                    scanf("%d",&quantity);
                                                            
                    cropPrice=cropPrice+(50*quantity);
                    delivery=0;
                    totalPrice=cropPrice+delivery;

                    printf("\nCustomer Name: %s",name);
                    printf("\nMobile No: %d",mob);
                    printf("\nAddress: %s \n",address);

                    printf("Total number of Packets is %d",quantity);
                    printf("\nTotal price for seeds is Rs %lf",cropPrice);
                    
                    printf("\nTotal price  is Rs %lf",totalPrice);
                    break;
                    }
                    else if(cropType=='P' || cropType=='p'){
                        printf("\nPrice of each plant is Rs 20. You will get equal number of plants from each crop. Enter your Quantity per crop: ");
                        scanf("%d",&quantity);
                        cropPrice=cropPrice+(20*5*quantity);
                        if(quantity<=30){
                            delivery=150;
                        }
                        else if(quantity>30){
                            delivery=300;
                        }
                        

                        totalPrice=cropPrice+delivery;
                         printf("\nCustomer Name: %s",name);
                    printf("\nMobile No: %d",mob);
                    printf("\nAddress: %s \n",address);
                    printf("Total number of crops is %d",quantity*5);
                    printf("\nTotal price for crops is Rs %lf",cropPrice);
                    printf("\nTotal price for delivery is Rs %lf",delivery);
                    printf("\nTotal price  is Rs %lf",totalPrice);
                    break;
                    }
                    
                    else if(cropType=='e'){
                        break;
                    }
                    else printf("Please enter a valid letter ");
                    }

                
            }

            if(district>12 && district<=20){
                printf("\nMost suitable plants/seeds for your Zone are: ");
                printf("\nChili,Red Onion,Brinjal,Luffa,Okra");
                printf("\nPress S if you want to buy seeds or P if plants: ");
                        
                    while(1){
                        scanf(" %c",&cropType);
                
                    if(cropType=='S' || cropType=='s'){
                    printf("\nEach seed packet costs Rs 50. Enter your desired packet quantity : ");
                    scanf("%d",&quantity);
                                                            
                    cropPrice=cropPrice+(50*quantity);
                    delivery=0;
                    totalPrice=cropPrice+delivery;
                     printf("\nCustomer Name: %s",name);
                    printf("\nMobile No: %d",mob);
                    printf("\nAddress: %s \n",address);
                    printf("Total number of Packets is %d",quantity);
                    printf("\nTotal price for seeds is Rs %lf",cropPrice);
                    
                    printf("\nTotal price  is Rs %lf",totalPrice);
                    break;
                    }
                    else if(cropType=='P' || cropType=='p'){
                        printf("\nPrice of each plant is Rs 20. You will get equal number of plants from each crop. Enter your Quantity per crop: ");
                        scanf("%d",&quantity);
                        cropPrice=cropPrice+(20*5*quantity);
                        if(quantity<=30){
                            delivery=150;
                        }
                        else if(quantity>30){
                            delivery=300;
                        }
                        

                        totalPrice=cropPrice+delivery;
                        printf("\nCustomer Name: %s",name);
                    printf("\nMobile No: %d",mob);
                    printf("\nAddress: %s \n",address);

                    printf("Total number of crops is %d",quantity*5);
                    printf("\nTotal price for crops is Rs %lf",cropPrice);
                    printf("\nTotal price for delivery is Rs %lf",delivery);
                    printf("\nTotal price  is Rs %lf",totalPrice);
                    break;
                    }
                    
                    else if(cropType=='e'){
                        break;
                    }
                    else printf("Please enter a valid letter");
                    }

                
            }

            if(district>20 && district<=24){
                printf("\nMost suitable plants/seeds for your Zone are: ");
                printf("\nChili,Red Onion,Brinjal,Luffa,Okra");
                printf("\nPress S if you want to buy seeds or P if plants: ");
                        
                    while(1){
                        scanf(" %c",&cropType);
                
                    if(cropType=='S' || cropType=='s'){
                    printf("\nEach seed packet costs Rs 50. Enter your desired packet quantity : ");
                    scanf("%d",&quantity);
                                                            
                    cropPrice=cropPrice+(50*quantity);
                    delivery=0;
                    totalPrice=cropPrice+delivery;

                     printf("\nCustomer Name: %s",name);
                    printf("\nMobile No: %d",mob);
                    printf("\nAddress: %s \n",address);

                    printf("Total number of Packets is %d",quantity);
                    printf("\nTotal price for seeds is Rs %lf",cropPrice);
                    
                    printf("\nTotal price  is Rs %lf",totalPrice);
                    break;
                    }
                    else if(cropType=='P' || cropType=='p'){
                        printf("\nPrice of each plant is Rs 20. You will get equal number of plants from each crop. Enter your Quantity per crop: ");
                        scanf("%d",&quantity);
                        cropPrice=cropPrice+(20*5*quantity);
                        if(quantity<=30){
                            delivery=150;
                        }
                        else if(quantity>30){
                            delivery=300;
                        }
                        

                        totalPrice=cropPrice+delivery;

                        printf("\nCustomer Name: %s",name);
                    printf("\nMobile No: %d",mob);
                    printf("\nAddress: %s \n",address);

                    printf("Total number of crops is %d",quantity*5);
                    printf("\nTotal price for crops is Rs %lf",cropPrice);
                    printf("\nTotal price for delivery is Rs %lf",delivery);
                    printf("\nTotal price  is Rs %lf",totalPrice);
                    break;
                    }
                    
                    else if(cropType=='e'){
                        break;
                    }
                    else printf("Please enter a valid letter");
                    }

                
            }
            

            

            
        }
        
        else if(groupSelection=='O' || groupSelection=='o'){
            printf("List of plant prices are shown below.\n Select your plants and the Quantity\nPress 0 for crop number after finishing");
            printf("      1.Banana  30\n        2.Chilly    10\n        3.dambala   10\n        4.Luffa 10\n        5.tomato    15\n        6.okra  10\n     7.brinjle  10\n     8.Red Onion    5");
            int cropNumber=0;
            int ownPlantQty=0;
            plantCount=0;
            cropPrice=0;

            while(1){
                printf("\nSelect your crop number ");
                scanf("%d",&cropNumber);
                if(cropNumber==0){
                    break;
                }
                printf("\nEnter your crop Quantity");
                scanf("%d",&ownPlantQty);
                
                if(cropNumber==2 || cropNumber==3 || cropNumber==4){
                    //10
                    cropPrice=cropPrice+(ownPlantQty*10);

                }
                else if(cropNumber==1){
                    //30
                    cropPrice=cropPrice+(ownPlantQty*30);
                }
                else if(cropNumber==5 || cropNumber==6 || cropNumber==7 ){
                    //15
                    cropPrice=cropPrice+(ownPlantQty*15);
                }
                else if(cropNumber==8){
                    //5
                    cropPrice=cropPrice+(ownPlantQty*5);
                }
                else printf("\n incorrect number. Enter again");

                plantCount=plantCount+ownPlantQty;
   
                
                
            }

            if(plantCount<=30){
                delivery=150;
            }
            else if(plantCount>30){
                delivery=300;
            }
            totalPrice=cropPrice+delivery;

            printf("\nCustomer Name: %s",name);
                    printf("\nMobile No: %d",mob);
                    printf("\nAddress: %s \n",address);

            printf("Total number of crops is %d",plantCount);
            printf("\nTotal price for crops is Rs %lf",cropPrice);
            printf("\nTotal price for delivery is Rs %lf",delivery);
            printf("\nTotal price  is Rs %lf",totalPrice);

        }
        printf("\nDo you want to add another entry?  press e to exit or press any other key to continue :");
        char ex='l';
        scanf(" %c",&ex);
        if(ex=='e' || ex=='E'){
            break;
        }
   }
   
   
   
   

    return 0;
}
