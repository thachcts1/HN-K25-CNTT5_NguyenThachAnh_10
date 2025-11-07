#include<stdio.h>
   int main(){
   			int sum = 0;
   			int choice,number = 0,arr[100];
   			int value;
   			
   			
   		do{
   			printf("\n|------------------MENU------------------|\n");
   		printf("1. Nhap so luong phan tu va gia tri tung phan tu cho mang: \n");
   		printf("2. In ra gia tri cac phan tu trong mang: \n");
   		printf("3. Tinh tong cua tat ca cac so chan va so le trong mang: \n");
   		printf("4. In ra cac phan tu co index la so chan trong mang: \n");
   		printf("5. Them moi mot phan tu vao dau mang:  \n");
   		printf("6. Xoa phan tu tai mot vi tri cu the: \n");
   		printf("7. Sap xep mang theo thu tu tang dan: \n");
   		printf("8. Kiem tra su ton tai trong mang : \n");
   		printf("9. In ra cac phan tu nam lon hon hoac bang K: \n");
   		printf("10. In so am dung sau nhung khong lam thay doi : \n");
   		printf("11. Thoat  MENU   !!! \n");
   		printf("==================================================\n");
   		
   		printf("Vui long chon chuc nang: ");
   		scanf("%d",&choice);
   			
   			switch(choice){
   				case 1:
   					printf("nhap so luong phan tu: ");
   					scanf("%d",&number);
   					for(int i = 0; i<number;i++){
   					printf("nhap gia tri phan tu cho mang arr[%d]: ",i);
   					scanf("%d",&arr[i]);
   					}
   					break;
   					
   				case 2: 
   			
					   printf("phan tu da nhap la: ");
					   for(int i = 0; i<number;i++ ){
					   	printf("%d ",arr[i]);
					   	}
   					
   					break;
   					
   				case 3:
   					printf("Tong cua cac so chan va le trong mang la: ");
   					for(int i = 0; i<number;i++){
   							sum += arr[i];
   							i++;
					   
					   
					}
					printf("%d",sum);
					printf("\n");
   					break;
   					
   				case 4: 
   					printf("cac phan tu la so chan trong mang la: \n");
   					for(int i = 0; i<number;i++){
   						if(arr[i] %2 == 0){
   							printf("%d ",arr[i]);
   							printf("\n");
   							}else
   								printf("khong tim thay so chan !!\n");
   						
   							}
   					break;
   				
   				
   				case 5: 
   					printf("Chon gia tri muon them vao dau mang: ");
   					scanf("%d",&value);
   						for(int i = 0; i < number - 1 ; i--){
							arr[number -1]= arr[value];
							i++;
   						printf("%d",arr[value]);
   							break;
   							}
   							
   				case 6: 
   					printf("Chon gia tri muon them vao dau mang: ");
   					scanf("%d",&value);
   						for(int i = 0; i > number ; i++){
							arr[number - 1]= arr[value];
							i++;
   						printf("%d",arr[value]);
   						}	
						   break;
   				
   						
   			
				   
				   
				}   
				   
				   
				   
				   
				   
				   
		
   			
		   }while(choice != 11);
		   printf("good bye !!!!");
		   
   
   return 0;
   }

