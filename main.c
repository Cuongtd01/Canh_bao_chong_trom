#include <main.h>

unsigned char cam_bien1=0, cam_bien2=0;

void main()
{

   while(TRUE)
   {
      //TODO: User Code
      if(sensor1==value) //cam bien phat hien trom
      //muon an trom di ra ngoai nhung chuong van bao thi sensor1 phai de la value tuc 0 hoac 1
      {
         cam_bien1=1;
      }
  
      if(sensor2==1)
      {
         cam_bien2=1;
      }
      
      if(cam_bien1==1)
      {
         buzzer1(1);
      }
      
      if(cam_bien2==1)
      {
         buzzer2(1);
      }
      
      if(reset==1)//neu nut reset duoc nhan
      {
         delay_ms(100);
         cam_bien1=0;
         cam_bien2=0;
         buzzer1(0);
         buzzer2(0);
      }
   }

}
