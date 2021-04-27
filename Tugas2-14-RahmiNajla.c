#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void menu() {
  printf("1. Daftar menu\n");
  printf("2. Belanja\n");
  printf("3. Keluar\n\n");
}

int main(){

    int pilihan, nm, bm, size=0, total_harga=0, i=0, uang_pelanggan, uang_tambahan;
    int total[15];
    int harga[5]={60000, 55000, 65000, 70000, 55000};
    char yn;

   
printf("\n******Selamat datang di Bittersweet by Najla******\n\n");

do{
menu ();

  do{
    printf("Pilihan anda : "); 
    scanf("%d", &pilihan);

    if(pilihan<1 || pilihan>3){
    printf("\nMaaf, input anda tidak sesuai!\n");
    }
  }while (!(pilihan==1 || pilihan==2 || pilihan==3));
      if (pilihan==1){

        printf("-------------------------------------------------\n");
        printf("+       |                                       +\n");
        printf("|  No   |   Menu                       Harga    |\n");
        printf("+-------|---------------------------------------+\n");
        printf("|       |                                       |\n");
        printf("|   1   | Turkish Choco Dessert Box      60k    |\n");
        printf("|   2   | Red Velvet Dessert Box         55k    |\n");
        printf("|   3   | Regal Dessert Box              65k    |\n");
        printf("|   4   | Lotus Dessert Box              70k    |\n");
        printf("|   5   | Milk Bath Dessert Box          55k    |\n");
        printf("+-------|---------------------------------------+\n");

        printf("\nTekan enter untuk lanjut...\n"); 
        getchar();

      }else if(pilihan==2){
          do{
            do{
              do{     
                printf("\n");
                printf("Input nomor menu : ");
                scanf("%d", &nm);

                if(nm<1||nm>5){
                  printf("\nMaaf, input anda tidak sesuai!\n");
                }
              }while(!(nm==1 || nm==2 || nm==3 || nm==4 || nm==5));

                  if(nm>=1 || nm<=5){
                  printf("\n");
                  printf("Input banyak menu ini yang diinginkan : "); 
                  scanf("%d", &bm);
                  }
                    total[i]=harga[nm-1] * bm; i++; 
                    size=size+1;
            }while(!(nm==1 || nm==2 || nm!=3 || nm!=4 || nm==5));

              do{
              printf("Apakah anda ingin memesan menu yang lainnya (y/n)? "); 
              scanf(" %c", &yn);
              printf("\n");

              if(!(yn=='y'||yn=='n'))
              {printf("\n");
              printf("Maaf, input anda tidak sesuai!\n");
              }
            }while(!(yn=='y'||yn=='n'));

         }while(yn=='y');

            if(yn=='n'){
                for(i=0; i<size; i++){
                  total_harga = total_harga + total[i];
                }
                printf("Total belanjaan            :Rp. %d\n\n", total_harga);
                printf("Masukkan uang anda         :Rp. ");
                scanf("%d", &uang_pelanggan);

                if(total_harga<=uang_pelanggan){
                  printf("Kembalian anda           :Rp. %d\n\n", uang_pelanggan-total_harga);

                }else if(total_harga>uang_pelanggan){
                  printf("Uang anda tidak cukup      :Rp. %d\n\n", total_harga-uang_pelanggan);
                  printf("Masukkan uang tambahan     :Rp. ");
                  scanf("%d", &uang_tambahan);

                    uang_pelanggan = uang_pelanggan+uang_tambahan;
                    printf("Kembalian anda             :Rp. %d\n\n",uang_pelanggan-total_harga);
                }
            }
                printf("\n\n******Terimakasih Telah Berkunjung******\n");
                break;
  
      }else if(pilihan==3){
        printf("\n\n******Terimakasih Telah Berkunjung******\n");
        break;   
      }
}while(getchar() == '\n');
return 0;

}
