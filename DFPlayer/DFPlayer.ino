//#include <SoftwareSerial.h>
//SoftwareSerial mySerial(10, 11); // RX, TX
//mySerial.begin (9600);
//mp3_set_serial (mySerial);  //set softwareSerial for DFPlayer-mini mp3 module
#include <DFPlayer_Mini_Mp3.h>



void setup () {
  Serial2.begin(9600);
  mp3_set_serial (Serial2);
	mp3_set_volume (20);
  
}


//
void loop () {        
	mp3_play (1);
	delay(400000);
  mp3_prev();
  delay(400000);
}

/*
   mp3_play ();		//start play
   mp3_play (5);	//play "mp3/0005.mp3"
   mp3_next ();		//play next 
   mp3_prev ();		//play previous
   mp3_set_volume (uint16_t volume);	//0~30
   mp3_set_EQ ();	//0~5
   mp3_pause ();
   mp3_stop ();
   void mp3_get_state (); 	//send get state command
   void mp3_get_volume (); 
   void mp3_get_u_sum (); 
   void mp3_get_tf_sum (); 
   void mp3_get_flash_sum (); 
   void mp3_get_tf_current (); 
   void mp3_get_u_current (); 
   void mp3_get_flash_current (); 
   void mp3_single_loop (boolean state);	//set single loop 
   void mp3_DAC (boolean state); 
   void mp3_random_play (); 
 */
