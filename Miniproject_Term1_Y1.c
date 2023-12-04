#include <stdio.h>
#include <conio.h>

void main() 
{
    int  service = 0, choice, x[1][2]={150,300},c=0,i=0,j=0;
    float price = 0, vat = 0, total = 0,water = 0 ,g[2][9] ={10.20,16.00,19.00,21.20,18.00,21.00,22.00,23.00,24.00,26.00,30.25,18.50,29.00,31.50,32.50,33.50,34.75,0};
    char y;

    do{
        //ตารางหมายเลข 2 อัตราค่าน้ำประปาพื้นที่ กปภ.สาขาภูเก็ต เกาะสมุย และเกาะพะงัน
        //กด 1) ที่อยู่อาศัย | 2) ราชการและธุรกิจขนาดเล็ก | 3) รัฐวิสาหกิจ/อุตฯ/ธุรกิจขนาดใหญ่
        printf("\n");
        for (c = 34; c >= 1; c = c - 1)
        {
            printf(" * ");
        }
        printf("\n");

        for (i=1; i<=1; i++) 
        {
            printf(" *");
            for (c=16; c>=i; c = c - 2)
                printf(" ");
            printf("Program water tariffs in the area PWA branch in Phuket, Koh Samui and Koh Phangan");
            for (j = 17; j>=i; j = j - 2)
                printf(" ");
            printf("*");
        }
        printf("\n");
        for (c = 34; c >= 1; c = c - 1)
        {
            printf(" * ");
        }
        printf("\n");
        
        printf("\nPleas press \n1)residence  \n2)Government and small businesses \n3)state enterprise / industry / large business");
        printf("\nEnter your number : ");
        scanf("%d",&choice);

        //ขนาดมาตรน้ำ
        //กด 1) 1/2 | 2) 3/4 | 3) 1 | 4) 1 1/2 | 5) 2 | 6) 2 1/2 | 7) 3 | 8) 4 | 9) 6 | 10) >6
        printf("\nPleas press \n1) 1/2 inches \n2) 3/4 inches \n3) 1 inches \n4) 1 1/2 inches \n5) 2 inches \n6) 2 1/2 inches \n7) 3 inches \n8) 4 inches \n9) 6 inches \n10) >6 inches");
        printf("\nEnter your water meter size (Service): ");
        scanf("%d",&service);

        // ใส่ปริมาณน้ำ
        // ราชการและธุรกิจขนาดเล็ก อัตราขั้นต่ำ 150 บาท / เดือน (8 ลบ.ม.)
        // รัฐวิสาหกิจ/อุตฯ/ธุรกิจขนาดใหญ่ อัตราขั้นต่ำ 300 บาท / เดือน (15 ลบ.ม.)
        printf("Enter amount of water : ");
        scanf("%f",&water);

        switch (choice)//การคำนวณค่าประปา
        {
        case 1: // ที่อยู่อาศัย
            if (water <= 10)
            {
                total = water * g[0][0];
            }
            else if (water <= 20)
            {
                total = 10 * g[0][0];
                water = water - 10;
                water = water * g[0][1];
                total = total + water;
            }
            else if (water <= 30)
            {
                total = 10 * g[0][0];
                water = water - 10;
                total = total+(10 * g[0][1]);
                water = water - 10;
                water = water * g[0][2];
                total = total + water; 
            }
            else if (water <= 50) 
            {
                total = 10 * g[0][0]; 
                water = water - 10;  
                total = total+(10 * g[0][1]); 
                water = water - 10; 
                total = total+(10 * g[0][2]);
                water = water - 10;
                water = water * g[0][3];
                total = total + water;
            }

            else if (water <= 80) //หากเดือนใดใช้น้ำมากกว่า 50 ลบ.ม./เดือน ให้คิดอัตราค่าน้ำประปาเท่ากับผู้ใช้น้ำประเภท 2 ณ เวลานั้น โดยคิดตั้งแต่ ลบ.ม.ที่ 51
            {                            
                total = 10 * g[0][0];      
                water = water - 10;      
                total = total+(10 * g[0][1]); 
                water = water - 10;      
                total = total+(10 * g[0][2]); 
                water = water - 10;      
                total = total+(20 * g[0][3]); 
                water = water - 20;      
                water = water * g[0][8];      
                total = total + water; 
            }
            else if (water <= 100)
            {
                total = 10 * g[0][0];
                water = water - 10;
                total = total+(10 * g[0][1]);
                water = water - 10;
                total = total+(10 * g[0][2]);
                water = water - 10;
                total = total+(20 * g[0][3]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                water = water * g[1][0];
                total = total + water;
            }
            else if (water <= 300)
            {
                total = 10 * g[0][0];
                water = water - 10;
                total = total+(10 * g[0][1]);
                water = water - 10;
                total = total+(10 * g[0][2]);
                water = water - 10;
                total = total+(20 * g[0][3]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                water = water * g[1][1];
                total = total + water;
            }
            else if (water <= 1000)
            {
                total = 10 * g[0][0];
                water = water - 10;
                total = total+(10 * g[0][1]);
                water = water - 10;
                total = total+(10 * g[0][2]);
                water = water - 10;
                total = total+(20 * g[0][3]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                total = total+(200* g[1][1]);
                water = water - 200;
                water = water * g[1][1];
                total = total + water;
            }
            else if (water <= 2000)
            {
                total = 10 * g[0][0];
                water = water - 10;
                total = total+(10 * g[0][1]);
                water = water - 10;
                total = total+(10 * g[0][2]);
                water = water - 10;
                total = total+(20 * g[0][3]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                total = total+(200 * g[1][1]);
                water = water - 200;
                total = total+(700 * g[1][1]);
                water = water - 700;
                water = water * g[1][1];
                total = total + water;
            }
            else if (water <= 3000)
            {
                total = 10 * g[0][0];
                water = water - 10;
                total = total+(10 * g[0][1]);
                water = water - 10;
                total = total+(10 * g[0][2]);
                water = water - 10;
                total = total+(20 * g[0][3]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                total = total+(200 * g[1][1]);
                water = water - 200;
                total = total+(700 * g[1][1]);
                water = water - 700;
                total = total+(1000 * g[1][1]);
                water = water - 1000;
                water = water * g[1][1];
                total = total + water;
            }
            else
            {
                total = 10 * g[0][0];
                water = water - 10;
                total = total+(10 * g[0][1]);
                water = water - 10;
                total = total+(10 * g[0][2]);
                water = water - 10;
                total = total+(20 * g[0][3]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                total = total+(200 * g[1][1]);
                water = water - 200;
                total = total+(700 * g[1][1]);
                water = water - 700;
                total = total+(1000 * g[1][1]);
                water = water - 1000;
                total = total+(1000 * g[1][1]);
                water = water - 1000;
                water = water * g[1][1];
                total = total + water;
            }

            break;
        case 2: //2) ราชการและธุรกิจขนาดเล็ก อัตราขั้นต่ำ 150 บาท / เดือน (8 ลบ.ม.)
            if (water <= 8)
            {
                total = x[0][0];
            }
            else if (water <= 10)
            {
                total = water * g[0][4];
            }
            else if (water <= 20)
            {
                total = 10 * g[0][4];
                water = water - 10;
                water = water * g[0][5];
                total = total + water;
            }
            else if (water <= 30)
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                water = water * g[0][6];
                total = total + water;
            }
            else if (water <= 50)
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                total = total+(10 * g[0][6]);
                water = water - 10;
                water = water * g[0][7];
                total = total + water;
            }
            else if (water <= 80)
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                total = total+(10 * g[0][6]);
                water = water - 10;
                total = total+(20 * g[0][7]);
                water = water - 20;
                water = water * g[0][8];
                total = total + water;
            }
            else if (water <= 100)
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                total = total+(10 * g[0][6]);
                water = water - 10;
                total = total+(20 * g[0][7]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                water = water * g[1][0];
                total = total + water;
            }
            else if (water <= 300)
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                total = total+(10 * g[0][6]);
                water = water - 10;
                total = total+(20 * g[0][7]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                water = water * g[1][1];
                total = total + water;
            }
            else if (water <= 1000)
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                total = total+(10 * g[0][6]);
                water = water - 10;
                total = total+(20 * g[0][7]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                total = total+(200 * g[1][1]);
                water = water - 200;
                water = water * g[1][1];
                total = total + water;
            }
            else if (water <= 2000)
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                total = total+(10 * g[0][6]);
                water = water - 10;
                total = total+(20 * g[0][7]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                total = total+(200 * g[1][1]);
                water = water - 200;
                total = total+(700 * g[1][1]);
                water = water - 700;
                water = water * g[1][1];
                total = total + water;
            }
            else if (water <= 3000)
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                total = total+(10 * g[0][6]);
                water = water - 10;
                total = total+(20 * g[0][7]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                total = total+(200 * g[1][1]);
                water = water - 200;
                total = total+(700 * g[1][1]);
                water = water - 700;
                total = total+(1000 * g[1][1]);
                water = water - 1000;
                water = water * g[1][1];
                total = total + water;
            }
            else
            {
                total = 10 * g[0][4];
                water = water - 10;
                total = total+(10 * g[0][5]);
                water = water - 10;
                total = total+(10 * g[0][6]);
                water = water - 10;
                total = total+(20 * g[0][7]);
                water = water - 20;
                total = total+(30 * g[0][8]);
                water = water - 30;
                total = total+(20 * g[1][0]);
                water = water - 20;
                total = total+(200 * g[1][1]);
                water = water - 200;
                total = total+(700 * g[1][1]);
                water = water - 700;
                total = total+(1000 * g[1][1]);
                water = water - 1000;
                total = total+(1000 * g[1][1]);
                water = water - 1000;
                water = water * g[1][1];
                total = total + water;
            }
            break;
        case 3: // รัฐวิสาหกิจ/อุตฯ/ธุรกิจขนาดใหญ่ อัตราขั้นต่ำ 300 บาท / เดือน (15 ลบ.ม.)
            if (water <= 15)
            {
                total = x[0][1];
            }
            else if (water <= 20)
            {
                total = 10 * g[1][2];
                water = water - 10;
                water = water * g[0][6];
                total = total + water;
            }
            else if (water <= 30)
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                water = water * g[1][0];
                total = total + water;
            }
            else if (water <= 50)
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                total = total +(10 * g[1][0]);
                water = water - 10;
                water = water * g[1][3];
                total = total + water;
            }
            else if (water <= 80)
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                total = total +(10 * g[1][0]);
                water = water - 10;
                total = total +(20 * g[1][3]);
                water = water - 20;
                water = water * g[1][4];
                total = total + water;
            }
            else if (water <= 100)
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                total = total +(10 * g[1][0]);
                water = water - 10;
                total = total +(20 * g[1][3]);
                water = water - 20;
                total = total +(30 * g[1][4]);
                water = water - 30;
                water = water * g[1][5];
                total = total + water;
            }
            else if (water <= 300)
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                total = total +(10 * g[1][0]);
                water = water - 10;
                total = total +(20 * g[1][3]);
                water = water - 20;
                total = total +(30 * g[1][4]);
                water = water - 30;
                total = total +(20 * g[1][5]);
                water = water - 20;
                water = water * g[1][6];
                total = total + water;
            }
            else if (water <= 1000)
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                total = total +(10 * g[1][0]);
                water = water - 10;
                total = total +(20 * g[1][3]);
                water = water - 20;
                total = total +(30 * g[1][4]);
                water = water - 30;
                total = total +(20 * g[1][5]);
                water = water - 20;
                total = total +(200 * g[1][6]);
                water = water - 200;
                water = water * g[1][7];
                total = total + water;
            }
            else if (water <= 2000)
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                total = total +(10 * g[1][0]);
                water = water - 10;
                total = total +(20 * g[1][3]);
                water = water - 20;
                total = total +(30 * g[1][4]);
                water = water - 30;
                total = total +(20 * g[1][5]);
                water = water - 20;
                total = total +(200 * g[1][6]);
                water = water - 200;
                total = total +(700 * g[1][7]);
                water = water - 700;
                water = water * g[1][7];
                total = total + water;
            }
            else if (water <= 3000)
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                total = total +(10 * g[1][0]);
                water = water - 10;
                total = total +(20 * g[1][3]);
                water = water - 20;
                total = total +(30 * g[1][4]);
                water = water - 30;
                total = total +(20 * g[1][5]);
                water = water - 20;
                total = total +(200 * g[1][6]);
                water = water - 200;
                total = total +(700 * g[1][7]);
                water = water - 700;
                total = total +(1000 * g[1][7]);
                water = water - 1000;
                water = water * g[1][7];
                total = total + water;
            }
            else
            {
                total = 10 * g[1][2];
                water = water - 10;
                total = total +(10 * g[0][6]);
                water = water - 10;
                total = total +(10 * g[1][0]);
                water = water - 10;
                total = total +(20 * g[1][3]);
                water = water - 20;
                total = total +(30 * g[1][4]);
                water = water - 30;
                total = total +(20 * g[1][5]);
                water = water - 20;
                total = total +(200 * g[1][6]);
                water = water - 200;
                total = total +(700 * g[1][7]);
                water = water - 700;
                total = total +(1000 * g[1][7]);
                water = water - 1000;
                total = total +(1000 * g[1][7]);
                water = water - 1000;
                water = water * g[1][7];
                total = total + water;
            }
            break;
        default:
            break;
        }

        switch (service)//ขนาดมาตรน้ำ
        {
        case 1: // 1/2
            price = 30;
            break;
        case 2: // 3/4
            price = 50;
            break;
        case 3: // 1
            price = 60;
            break;
        case 4: // 1 1/2
            price = 90;
            break;
        case 5: // 2
            price = 350;
            break;
        case 6: // 2 1/2
            price = 450;
            break;
        case 7: // 3
            price = 450;
            break;
        case 8: // 4
            price = 550;
            break;
        case 9: // 6
            price = 950;
            break;
        case 10: // >6
            price = 1200;
            break;
        default:
            break;
        }

        printf("Sum price water = %0.2f BATH",total);
        printf("\nService = %0.2f BATH",price);
        total = total+price;
        vat = (total*7)/100;
        printf("\nVAT = %0.2f BATH",vat);
        total = total + vat;   
        printf("\nTotal = %0.2f BATH",total);
        printf("\nDo you need to use this program ?(y/n) : ");
        y = getche();
    }while (y == 'y');
}
