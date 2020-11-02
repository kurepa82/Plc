#include <globals.h>
#include <TFT_eSPI.h>
#include <hmi.h>

//--------------------------------------------------------------------------------
// HMI Configuration Page
//--------------------------------------------------------------------------------

void pageConfigHMI (uint16_t firstLoad, uint16_t touchType, uint16_t ts_x, uint16_t ts_y){
  //-------------------------------
  // draw full Page on first load
  //-------------------------------
    
    if(firstLoad){
      drawConfigHMI();
    }
    
  //-------------------------------
  // update required fields
  //-------------------------------

    //Nothing to update

  //-------------------------------
  // Parse touch screen
  //-------------------------------

  if (touchType){
    touchConfigHMI(ts_x, ts_y); 
  } 
}

//--------------------------------------------------------------------------------
// HMI Configuration draw 
//--------------------------------------------------------------------------------

void drawConfigHMI (void){
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(WHITE);
  tft.setCursor(10, 10);
  tft.setTextSize(2);
  tft.print("HMI !");
}

//--------------------------------------------------------------------------------
// HMI configuration page
// Touch Screen parsing
//--------------------------------------------------------------------------------

void touchConfigHMI(uint16_t ts_x, uint16_t ts_y){
  HMI_Page = PAGE_MainConfig;
}
