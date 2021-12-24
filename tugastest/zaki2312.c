#include <stdio.h>
#include <string.h>

int main(){
	
	int pilihan;
	int file1 = 0, file2,file3;
    char n[10],a[10],nama['0'][50],nim['0'][10],kelas['0'][3],dosen['0'][50],gg['0'][10];
    FILE *data;
	
	printf("===sistem pendataan akun I-Lab infotech===\n");

	menu:
	printf("\n-------------------------------------\n");
	printf("PILIH MENU\n");
	printf("-------------------------------------\n");
	printf("(1)	create data\n");
	printf("(2)	show data\n");
	printf("(3)	update data\n");
	printf("(4)	delete data\n");
	printf("(5)	search data\n");
	printf("(6)	exit\n");
	printf("-------------------------------------\n");
	
	printf("masukan kode yang ingin anda pilih :");
	scanf("%d", &pilihan);
	printf("-------------------------------------");
	printf("\n\n");
	
	
	switch (pilihan){
	case 1:	
	data = fopen("fix.txt.","a");
		file1=file1+1;
		printf("INPUT 3 NIM TERAKHIR	:");
		// fflush(stdin);
		scanf("%[^\n]s", nim[file1]);
		if(file1 != 0)
		{
			for (int cek = 0; cek < file1; cek++)
			{
				if(strcmp(nim[file1], nim[cek]) == 0)
				{
				printf("\n=====================================\n           DATA SUDAH ADA\n=====================================\n");
				file1--;
				printf("\nTEKAN ENTER UNTUK MELANJUTKAN\n");
				// getch();
				goto menu;
				}
			}
		}
  	   	printf("INPUT NAMA		:");
	   	// fflush(stdin);
	   	scanf("%[^\n]s", nama[file1]);
	   	printf("INPUT KELAS		:progdas ");
	   	// fflush(stdin);
	   	scanf("%[^\n]s", kelas[file1]);
	   	printf("INPUT NAMA DOSEN	:");
	   	// fflush(stdin);
	   	scanf("%[^\n]s", dosen[file1]);
	   	
	   	fprintf(data,"%s\n",nim[file1]);
	   	fprintf(data,"%s\n",nama[file1]);
	   	fprintf(data,"%s\n",kelas[file1]);
	   	fprintf(data,"%s\n",dosen[file1]);
	   	fclose(data);
	   	printf("=====================================\n            DATA TERINPUT\n=====================================");
		printf("\n");
		printf("\nTEKAN ENTER UNTUK MELANJUTKAN\n");
	   	// getch();
	   	goto menu;		
	   	break;


	case 2:
    	if(nim[file1]==0 || !(data = fopen("fix.txt.","r")))
		{
		printf("=====================================\nANDA BELUM MEMASUKAN DATA SAMASEKALI\n=====================================\n\n");
		fclose(data);
		}
		else
		{
			data = fopen("fix.txt.","r");
			file2=1;
			while(!feof(data))
			{
			printf("=========%d========\n",file2);
			fgets(nim[file2],sizeof(nim),data);
			fgets(nama[file2],sizeof(nama),data);
			fgets(kelas[file2],sizeof(kelas),data);
			fgets(dosen[file2],sizeof(dosen),data);
			if(feof(data)){
			fgets(gg[file2],sizeof(gg),data);
			break;}
			printf("nim:%s", nim[file2]);
			printf("nama:%s", nama[file2]);
			printf("kelas:%s", kelas[file2]);
			printf("dosen:%s", dosen[file2]);
		   	printf("\n");
		   	file2++;
			}
		}
		fclose(data);
		printf("-------------------------------------\n");
		printf("\nTEKAN ENTER UNTUK KEMBALI KE MANU\n");
		// getch();
		goto menu;
		break;
	
	
	case 3:
		data = fopen("fix.txt.","r");
		file2 = 1;
		while(!feof(data))
			{
			fgets(nim[file2],sizeof(nim),data);
			fgets(nama[file2],sizeof(nama),data);
			fgets(kelas[file2],sizeof(kelas),data);
			fgets(dosen[file2],sizeof(dosen),data);
			if(feof(data)){
			fgets(gg[file2],sizeof(gg),data);
			break;}
		   	file2++;
			}
			fclose(data);
		printf("MASUKAN 3 NIM TERAKHIR :");
		scanf("%s",n);
		strcat(n,"\n");
		file2=1;
		file3=0;
		while(!strcmp(n,nim[file2])){
			if(strcmp(n,nim[file2])==0)
			{
			file3++;
			break;
			}
			file2++;
		}
		if(file3<1){
			printf("\n=====================================\n           DATA TIDAK ADA\n=====================================\n");
		}else{
			// file2--;
			printf("\nINPUT NAMA BARU		:");
			scanf(" %[^\n]s",nama[file2]);
			printf("INPUT KELAS BARU	:progdas ");
			scanf(" %[^\n]s",kelas[file2]);
			printf("INPUT DOSEN BARU	:");
			scanf(" %[^\n]s",dosen[file2]);
			printf("\n=====================================\n       DATA BERHASIL TEREDIT\n=====================================\n");
		}
        // printf("%s\n%s\n%s",nama[2],kelas[2],dosen[2]);
		data = fopen("fix.txt.","w");
		file2 = 1;
		while(1){
			if(strcmp(n,nim[file2])){
				fprintf(data,"%s",nim[file2]);
				fprintf(data,"%s\n",nama[file2]);
				fprintf(data,"%s\n",kelas[file2]);
				fprintf(data,"%s\n",dosen[file2]);
			}
			else{
				fprintf(data,"%s",nim[file2]);
				fprintf(data,"%s\n",nama[file2]);
				fprintf(data,"%s\n",kelas[file2]);
				fprintf(data,"%s\n",dosen[file2]);
			}
			file2++;
            if(strcmp(nim[file2],"\0")){
                break;
            }
		}
		fclose(data);
		printf("\nTEKAN ENTER UNTUK KEMBALI KE MANU\n");
		// getch();
		goto menu;
		break;
	
	case 4:
		printf("MASUKAN 3 NIM TERAKHIR :");
		scanf("%s",n);
		file2=1;
		file3=0;
		while(file2<=file1 && file3==0){
			
				if(strcmp(n,nim[file2])==0)
				{
					file3++;
				}

			file2++;
		}
		if(file3<1){
			printf("\n=====================================\n           DATA TIDAK ADA\n=====================================\n");
		}
		else
		{
			file2--;
			printf("\n=====================================\n      DATA BERHASIL TERHAPUS\n=====================================\n");
			while (file2<=file1)
			{
				strcpy(nim[file2],nim[file2+1]);
				strcpy(nama[file2],nama[file2+1]);
            	strcpy(kelas[file2],kelas[file2+1]);
				strcpy(dosen[file2],dosen[file2+1]);
            	file2++;
			}
        	file2--;
        	strcpy(nim[file2],"");
        	file1--;
		}	
		printf("\nTEKAN ENTER UNTUK KEMBALI KE MANU\n");
		// getch();
		goto menu;
		break;

	case 5:
		printf("\n=====================================\n");
		printf("MASUKAN ANGKATA  	:");
		scanf("%s",a);
		printf("MASUKAN 3 NIM TERAKHIR 	:");
		scanf("%s",n);
		file2=1;
		file3=0;
		while(file2<=file1 && file3==0){
			
			
				if(strcmp(n,nim[file2])==0)
				{
					file3++;
				}
			
			file2++;
		}
		if(file3<1)
		{
			printf("           DATA TIDAK ADA\n=====================================\n");
		}
		else
		{
			file2--;
			printf("NAMA			:%s\n", nama[file2]);
			printf("KELAS			:Progdas-%s\n", kelas[file2]);
			printf("DOSEN			:%s\n", dosen[file2]);
			printf("=====================================\n");
		}
		printf("\nTEKAN ENTER UNTUK KEMBALI KE MANU\n");
        // getch();
		goto menu;
		break;
	
		case 6:
	
		break;}
	
	return 0;
}