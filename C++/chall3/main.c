#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char matkhau[50];
	int loi=0;
 printf("Duong Tank tiep tuc di thinh kinh voi mot chiec BAN DO THE GIOI tren tay, vua di ong vua thoa man so thich NGAM SAO cua minh, dac biet la cac CHOM SAO\n...\n");
 getch();
	printf("Ong di tu Brazil den Angieri\n...\n");
	getch();
	printf("Tai do, ong gap yeu quai va bi bat giu\n...\n");
	getch();
	printf("Ngo Khong nghe tin va bay tu Hoa Qua Son tai Canada den Angieri giai cuu su phu\n...\n");
	getch();
	printf("Sau do, thay tro Duong Tank tiep tuc di thinh kinh va den Iran\n...\n");
 getch();
 printf("Ho nhan ra rang cang di xa tren con duong thinh kinh thi BAU TROI SAO cang dep, ro net va day du hon\n...\n");
	getch();
	printf("Va roi ho dat chan den Nhat Ban\n...\n");
	getch();
 printf("Dung luc do la nua dem, thay tro Duong Tank nhan ra rang ca CHOM SAO da hien len DAY DU va dep nhat\n...\n");
 getch();
	printf("Tai day, ho thay canh cua dan den Tay Thien\n...\n");
	getch();
	printf("Thay tro Duong Tank den gan, ho nhan ra canh cua nay rat hien dai, phai co mat khau moi co the di qua duoc mat khau chinh la ten chom sao\n...\n");
	getch();
	while(1)
	{
  printf("Nhap mat khau: ");
		scanf("%s",&matkhau);
		if((matkhau[0]=='c' || matkhau[0]=='C')&& matkhau[1]=='a' && matkhau[2]=='n' && matkhau[3]=='c' && matkhau[4]=='e' && matkhau[5]=='r')
        {
            printf("Chuc mung, ban da thanh cong mo canh cua den Tay Thien\nPass: specialjourney");
             getch();
              
            return 0;
         }
        else
        {
            loi++;
        }
        printf("Mat khau sai!\n");
        if(loi==1)
        printf("Day la mot canh cua rat xin nen phai dung tieng Anh\n");
        if(loi==3)
        printf("Dap an khong phai o diem ket thuc ma nam o CON DUONG ma ta di\n");
        if(loi==7)
        printf("\"Dung la chi khi den Nhat Ban ca CHOM SAO moi hien ra day du va ro rang nhat, dep that, DUNG KHONG?\"- Duong Tank noi\n");
        if(loi==5)
        printf("Duong Tank da xuat phat voi mot chiec BAN DO THE GIOI tren tay, co le ban cung nen nhu vay\n");
        if(loi==9)
        printf("\"Do you know about Zodiac?\"- The gate said\n");
	}
    return 0;
}
