import java.util.Scanner;

public class dina1512{
	static Scanner input=new Scanner(System.in);
	static int pilih,indx,ratarata[]=new int[100],nilaitotal[]=new int[100],nilai[][]=new int[100][100];
	static String maPel[]= {"Matematika","Biologi\t","Fisika\t","Kimia\t","B.Inggris","B.Indonesia","Agama\t","PKn\t","Sejarah\t"},nama[]=new String[100],kelas[]=new String[100],cari;

	public static void main(String[] args){
		clear();
		showMenu();
	}
	
	static void showMenu(){
		clear();
		System.out.println("Menu");
        System.out.println("[1] Data Siswa");
        System.out.println("[2] Mata Pelajaran");
        System.out.println("[3] Input Nilai Siswa");
        System.out.println("[4] Rapor Nilai");
        System.out.println("[5] Nilai per Mata Pelajaran");
        System.out.print("Pilih menu : ");
		pilih=input.nextInt();
        switch(pilih){
        	case 1:
        		dataSiswa();
        		break;
			case 2:
				// mataPelajaran();
				break;
        	case 3:
        		inputNilaiSiswa();
        		break;
        	case 4:
        		raporNilai();
        		break;
        	case 5:
        		// nilaiPerMapel();
        		break;
        	default:
        		System.out.println("Pilihan Salah!!");
        }
	}

	static void dataSiswa(){
		clear();
		indx=0;
		while(nilai[indx][0]!=0){
			System.out.println("\nData ke-"+(indx+1));
			System.out.printf("Nama  : %s\nKelas : %s\n",nama[indx],kelas[indx]);
			indx++;
		}
		mulailagi();
	}

	static void inputNilaiSiswa(){
		clear();
		input.nextLine();
		indx=0;
		while(nilai[indx][0]!=0) {
			if(nilai[indx][0]==0){
				break;
			}
			indx++;
		}
		System.out.print("Masukkan Nama Siswa  : ");
		nama[indx]=input.nextLine();
		System.out.print("Masukkan Kelas Siswa : ");
		kelas[indx]=input.nextLine();
		System.out.println("\nInput Nilai Mata Pelajaran\n");
		for(int i=1;i<=maPel.length;i++){
			System.out.printf("%s\t\t: ",maPel[i-1]);
			nilai[indx][i-1]=input.nextInt();
			nilaitotal[indx]=nilaitotal[indx]+nilaitotal[i-1];
		}
		mulailagi();
	}
	
	static void raporNilai(){
		clear();
		input.nextLine();
		indx=0;
		System.out.print("Masukkan nama yang ingin ditampilkan rapor nya : ");
		cari=input.nextLine();
		while(nama[indx].compareTo(cari)!=0){
			if(nama[indx].compareTo(cari)==0){
				break;
			}
			indx++;
		}
		clear();
		System.out.printf("Nama\t\t: %s\nKelas\t\t: %s\n\n",nama[indx],kelas[indx]);
		for(int i=1;i<=9;i++){
			System.out.printf("%s\t: %d\n",maPel[i-1],nilai[indx][i-1]);
		}
		mulailagi();
	}

	static void mulailagi(){
		String confirm;
		System.out.print("\nApakah anda ingin melanjutkan program (ya/tidak) : ");
		confirm=input.nextLine();
		if(confirm.compareTo("ya")==0){
			switch(pilih){
				case 1:
					dataSiswa();
					break;
				case 2:
					// mataPelajaran();
					break;
				case 3:
					inputNilaiSiswa();
					break;
				case 4:
					raporNilai();
					break;
				case 5:
					// nilaiPerMapel();
					break;
				default:
					mulailagi();
					
			}
		}else{
			main(null);
		}
	}

	static void clear(){
        System.out.print("\033[H\033[2J");
        System.out.flush();
	}

}